class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // Submitted for 100DaysLeetCodeChallenge DAY 56
        int minLen = INT_MAX;
        int left = 0, curSum = 0;
        for (int right = 0; right < nums.size(); right++) {
            curSum += nums[right];
            while (curSum >= target) {
                if (right - left + 1 < minLen) minLen = right - left + 1;
                curSum -= nums[left];
                left++;
            }
        }
        return minLen != INT_MAX ? minLen : 0;        
    }
};