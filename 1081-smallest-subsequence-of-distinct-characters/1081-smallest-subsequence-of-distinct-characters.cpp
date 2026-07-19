class Solution {
public:
    string smallestSubsequence(string s) {
        unordered_map<char,int> mp;
        for(char i:s) mp[i]++;
        vector<char> st; 
        bool seen[26] = {false}; 
        for(char i:s)
        {
            mp[i]--; 
            if (seen[i - 'a']) continue; 
            while(!st.empty() && i < st.back() && mp[st.back()]) 
            {
                seen[st.back() - 'a'] = false;
                st.pop_back(); 
            }
            st.push_back(i);
            seen[i - 'a'] = true;
        }
        string ans;
        for(char i:st) ans+=i;
        return ans;
    }
};
