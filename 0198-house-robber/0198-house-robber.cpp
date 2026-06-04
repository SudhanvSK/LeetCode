class Solution {
public:
    int rob(vector<int>& nums) {
        //Submitted for 100DaysLeetCodeChallenge DAY 85
        int rob = 0, norob = 0;
        for (int i=0;i<nums.size();i++) 
        {
            int newRob = norob + nums[i];
            int newNoRob = max(norob, rob);
            rob = newRob;
            norob = newNoRob;
        }
        return max(rob, norob);
    }
};