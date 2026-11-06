class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size(),ans=0;
        while(n--)  if(nums[n]%3!=0) ans++;
        return ans;
    }
};