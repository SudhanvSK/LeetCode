class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        // Submitted for 100DaysLeetCodeChallenge DAY 83
        int n = cost.size(), prev2 = cost[0], prev1 = cost[1];
        for(int i = 2; i < n; i++) 
        {
            int cur = cost[i] + min(prev1, prev2);
            prev2 = prev1;
            prev1 = cur;
        }
        return min(prev1, prev2);
    }
};