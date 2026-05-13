class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // Submitted for 100DaysLeetCodeChallenge DAY 63
        int i = 0, j = nums.size() - 1;
        while(i<j)
        {
            int m = (i+j) / 2;
            if(nums[m] > nums[m+1]) j = m;
            else i = m+1;
        }
        return i;
    }
};