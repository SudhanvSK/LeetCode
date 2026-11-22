class Solution {
public:
    bool checkString(string s) {
        int i=-1, j=-1, n=s.length();
        for(int k=0;k<n;k++) if(s[k]=='b') {j=k; break;}
        for(int k=n-1;k>=0;k--) if(s[k]=='a') {i=k; break;}
        if(i==-1||j==-1||i<j) return true;
        return false;
    }
};