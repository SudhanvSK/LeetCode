class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
        if(n==0) return 0;
        int i = 0, sign = 1;
        while(i<n&&s[i]==' ') i++;
        if(i==n) return 0;
        if(s[i]=='+') i++; 
        else if(s[i]=='-') {sign = -1; i++;}
        long long res = 0;
        while(i<n&&isdigit(s[i]))
        {
            int d = s[i] - '0';
            res = res*10 + d;
            if(sign*res<=INT_MIN) return INT_MIN;
            else if(sign*res>=INT_MAX) return INT_MAX;
            i++;
        }
        return (int) sign*res;
    }
};