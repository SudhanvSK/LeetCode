class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++) if(nums[i]<0) nums[i] = -1*nums[i];
        sort(nums.begin(),nums.end());
        long long ans = 0;
        int i;
        for(i=0;i<n/2;i++) ans-=(nums[i]*nums[i]);
        for(int j=i;j<n;j++) ans+=(nums[j]*nums[j]);
        return ans;
    }
};