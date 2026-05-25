class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        // Submitted for 100DaysLeetCodeChallenge DAY 75
        unordered_map <char, int> mp;
        int cnt = 0;
        for(auto i:tasks) {mp[i]++; cnt = max(cnt,mp[i]);}
        int ans = (cnt-1)*(n+1);
        for(auto i:mp) if(i.second == cnt) ans++;
        return max((int)tasks.size(),ans);
    }
};