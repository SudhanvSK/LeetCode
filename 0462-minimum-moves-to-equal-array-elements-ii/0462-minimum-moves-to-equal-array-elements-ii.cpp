class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        if(n%2==1)
        {
            int mid = n/2, ans = 0;
            for(int i:nums) ans+=(abs(nums[mid]-i));
            return ans;
        }
        else
        {
            int mid1 = n/2 - 1, ans1 = 0;
            for(int i:nums) ans1+=(abs(nums[mid1]-i));
            int mid2 = n/2, ans2 = 0;
            for(int i:nums) ans2+=(abs(nums[mid2]-i));
            return min(ans1, ans2);
        }
    }
};