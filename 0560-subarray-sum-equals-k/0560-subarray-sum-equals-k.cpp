class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //Submitted for 100DaysLeetCodeChallenge DAY 51

        unordered_map<int, int> mp;
        mp[0] = 1;
        int total = 0, ans = 0;

        for (int n : nums) 
        {
            total += n;
            if (mp.find(total - k) != mp.end()) ans += mp[total - k];
            mp[total]++;
        }

        return ans;
    }
};