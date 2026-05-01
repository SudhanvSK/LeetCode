class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //Submitted for 100DaysLeetCodeChallenge DAY 51

        vector <int> pre;
        int sum = 0, ans = 0;
        for(auto i : nums)
        {
            sum+=i;
            pre.push_back(sum);
        }
        for(int i=0;i<pre.size();i++)
        {
            if(pre[i]==k) ans++;
            for(int j=i+1;j<pre.size();j++) if(pre[j]-pre[i]==k) ans++;
        }
        return ans;
    }
};