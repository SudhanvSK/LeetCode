class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long ans = 0;
        for(char i : columnTitle) ans = ans * 26 + (i - 'A' + 1);
        return (int) ans;
    }
};