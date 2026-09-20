class Solution {
public:
    vector<vector<long long>> splitPainting(vector<vector<int>>& segments) {
        vector<vector<long long>> ans;
        map<long long, long long> mp;
        for(int i=0;i<segments.size();i++)
        {
            mp[segments[i][0]]+=segments[i][2];
            mp[segments[i][1]]-=segments[i][2];
        }
        vector <long long> key;
        for(auto i:mp) key.push_back(i.first);
        long long sum = 0;
        for(int i=0;i<key.size()-1;i++)
        {
            sum+=mp[key[i]];
            if (sum == 0) continue;
            else ans.push_back({key[i], key[i + 1], sum});
        }
        return ans;
    }
};