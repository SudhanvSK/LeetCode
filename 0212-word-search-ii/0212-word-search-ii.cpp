class TrieNode {
public:
    TrieNode* child[26];
    bool isEnd;
    string word;
    TrieNode() {
        isEnd = false;
        for(int i = 0; i < 26; i++) child[i] = NULL;
    }
};

class Solution {
public:
    //Submitted for 100DaysLeetCodeChallenge DAY 71
    vector<string> ans;

    void insert(TrieNode* root, string word) {
        TrieNode* node = root;
        for(char ch : word) {
            int idx = ch - 'a';
            if(node->child[idx] == NULL) node->child[idx] = new TrieNode();
            node = node->child[idx];
        }
        node->isEnd = true;
        node->word = word;
    }

    void dfs(vector<vector<char>>& board, int i, int j, TrieNode* node)
    {
        char ch = board[i][j];
        if(ch == '#' || node->child[ch-'a'] == NULL) return;
        node = node->child[ch-'a'];
        if(node->isEnd) {
            ans.push_back(node->word);
            node->isEnd = false;
        }
        board[i][j] = '#';
        int dir[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
        for(int k = 0; k < 4; k++) {
            int ni = i + dir[k][0];
            int nj = j + dir[k][1];
            if(ni >= 0 && nj >= 0 && ni < board.size() && nj < board[0].size()) dfs(board, ni, nj, node);
        }
        board[i][j] = ch;
    }

    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        TrieNode* root = new TrieNode();
        for(string word : words) insert(root, word);
        for(int i = 0; i < board.size(); i++) for(int j = 0; j < board[0].size(); j++) dfs(board, i, j, root);
        return ans;
    }
};