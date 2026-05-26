class Solution {
public:
    // Submitted for 100DaysLeetCodeChallenge DAY 76
    void dfs (vector<vector<int>> &image, int i, int j, int newc, int old)
    {
        if(i<0||j<0) return;
        if(i>=image.size()||j>=image[0].size()) return;
        if(image[i][j]!=old||image[i][j]==newc) return;
        image[i][j] = newc;
        dfs(image,i,j+1,newc,old);
        dfs(image,i,j-1,newc,old);
        dfs(image,i+1,j,newc,old);
        dfs(image,i-1,j,newc,old);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        dfs(image, sr, sc, color, image[sr][sc]);
        return image;
    }
};