class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        // Submitted for 100DaysLeetCodeChallenge DAY 89
        int n = nums.size();
        if(!n) return 0;
        vector <int> v (n,1);
        for(int i=1;i<n;i++) for(int j=0;j<i;j++) if(nums[i]>nums[j]) v[i] = max(v[i], v[j]+1);
        return *max_element(v.begin(),v.end());
    }
};