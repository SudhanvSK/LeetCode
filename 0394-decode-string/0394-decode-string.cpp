class Solution {
public:
    // Submitted for 100DaysLeetCodeChallenge DAY 61

    string decodeString(string s) {
        int i = 0;
        return decode(s,i);
    }
    string decode(string &s, int &i)
    {
        int n=0;
        string res;
        while(i<s.size())
        {
            char c = s[i];
            if(isdigit(c)) {n = n*10 + (c-'0'); i++;}
            else if(c=='[') 
            { 
                i++; 
                string in = decode(s,i);
                for(int j=0;j<n;j++) res+=in;
                n=0;
            }
            else if(c==']') {i++; return res;}
            else {res+=c; i++;}
        }
        return res;
    }
};