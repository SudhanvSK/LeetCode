class Solution {
public:
    int rob(vector<int>& nums) {
        //Submitted for 100DaysLeetCodeChallenge DAY 86
        if(nums.size()==1) return nums[0];
        int rob = 0, norob = 0;
        for (int i=0;i<nums.size()-1;i++) 
        {
            int newRob = norob + nums[i];
            int newNoRob = max(norob, rob);
            rob = newRob;
            norob = newNoRob;
        }
        int ans = max(rob,norob);
        rob = 0, norob = 0;
        for (int i=1;i<nums.size();i++) 
        {
            int newRob = norob + nums[i];
            int newNoRob = max(norob, rob);
            rob = newRob;
            norob = newNoRob;
        }
        return max(ans,max(rob, norob));
    }
};