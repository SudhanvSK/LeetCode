class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        // Submitted for 100DaysLeetCodeChallenge DAY 77
        vector <int> left (n+1);
        vector <int> right (n+1);
        for(int i=0;i<trust.size();i++)
        {
            left[trust[i][0]]++;
            right[trust[i][1]]++;
        }
        for(int i=1;i<=n;i++) if(left[i] == 0 && right[i] == n-1) return i;
        return -1;
    }
};