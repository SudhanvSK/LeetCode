class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        // Submitted for 100DaysLeetCodeChallenge DAY 75
        unordered_map <char, int> mp;
        int c = 0;
        for(auto i:tasks) {mp[i]++; c = max(c,mp[i]);}
        int ans = (c-1)*(n+1);
        for(auto i:mp) if(i.second == c) ans++;
        return max((int)tasks.size(),ans);
    }
};