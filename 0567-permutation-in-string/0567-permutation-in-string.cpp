class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        // Submitted for 100DaysLeetCodeChallenge DAY 58
        if(s1.size()>s2.size()) return false;
        unordered_map <char, int> m1;
        unordered_map <char, int> m2;
        for(auto i:s1) m1[i]++;
        for(int i=0;i<=s2.size()-s1.size();i++)
        {
            m2.clear();
            bool ok = true;
            for(int j=i;j<i+s1.size();j++) m2[s2[j]]++;
            for(auto i:m1) if(i.second!=m2[i.first]) {ok=false;break;}
            if(ok) return true;
        }
        return false;
    }
};