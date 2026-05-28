class Solution {
public:
    // Submitted for 100DaysLeetCodeChallenge DAY 78
    void dfs(vector<vector<char>>& grid, int row, int col, int rowlen, int collen)
    {
        if(row<0 || col<0 || row>=rowlen || col>=collen || grid[row][col]=='0') return;
        grid[row][col] = '0';
        dfs(grid, row, col+1, rowlen, collen);
        dfs(grid, row, col-1, rowlen, collen);
        dfs(grid, row+1, col, rowlen, collen);
        dfs(grid, row-1, col, rowlen, collen);
    }
    int numIslands(vector<vector<char>>& grid) {
        int rowlen = grid.size();
        int collen = grid[0].size();
        int ans = 0;
        for(int i=0;i<rowlen;i++)
        for(int j=0;j<collen;j++)
        if(grid[i][j]=='1') {ans++; dfs(grid, i, j, rowlen, collen);}
        return ans;
    }
};