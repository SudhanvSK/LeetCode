class Solution {
public:
    string count(string s) {
        string res = "";
        int count = 1;
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) count++;
                else {
                res += to_string(count) + s[i - 1];
                count = 1;
            }
        }
        res += to_string(count) + s.back();
        return res;
    }
    string countAndSay(int n) {
        string ans = "1";
        for (int i = 1; i < n; ++i) ans = count(ans);
        return ans;
    }
};