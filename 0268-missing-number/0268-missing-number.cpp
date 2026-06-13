class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Submitted for 100DaysLeetCodeChallenge DAY 94
        int sum = 0, n = nums.size();
        for(int i:nums) sum+=i;
        return n*(n+1)/2 - sum;
    }
};