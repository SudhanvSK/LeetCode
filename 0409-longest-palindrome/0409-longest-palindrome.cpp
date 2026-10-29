class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();
        unordered_map <char,int> mp;
        for(char i:s) mp[i]++;
        int ans = 0;
        for(auto i:mp)
        {
            if(i.second%2==0) ans+=i.second;
            else ans+=i.second-1;
        }
        if (n==ans) return ans; else return ans+1;
    }
};