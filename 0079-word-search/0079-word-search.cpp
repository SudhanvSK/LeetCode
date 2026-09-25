class Solution {
public:
    int m, n;
    bool backtrack(vector<vector<char>>& board, int i, int j, int k, string word) {
        if (k == word.length()) return true;
        if (i < 0 || i >= m || j < 0 || j >= n ||
            board[i][j] != word[k]) {
            return false;
        }
        char temp = board[i][j];
        board[i][j] = '\0';
        if (backtrack(board, i + 1, j, k + 1, word) || backtrack(board, i - 1, j, k + 1, word) || backtrack(board, i, j + 1, k + 1, word) || backtrack(board, i, j - 1, k + 1, word)) return true;
        board[i][j] = temp;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        m = board.size();
        n = board[0].size();
        for (int i = 0; i < m; i++) 
        for (int j = 0; j < n; j++) if (backtrack(board, i, j, 0, word)) return true;
        return false;
    }
};