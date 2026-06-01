class Solution {
public:
    int climbStairs(int n) {
        // Submitted for 100DaysLeetCodeChallenge DAY 82
        if(n==0||n==1) return 1;
        int i=1, j=1;
        for(int k=2;k<=n;k++) { int t = i; i += j; j = t; }
        return i;
    }
};