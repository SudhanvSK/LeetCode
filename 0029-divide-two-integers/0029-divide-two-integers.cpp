class Solution {
public:
    int divide(int dividend, int divisor) {
        // Submitted for 100DaysLeetCodeChallenge DAY 99
        if (dividend == divisor) return 1;
        int sign = 1;
        if ((dividend < 0 && divisor < 0) || (dividend > 0 && divisor > 0)) sign = 0;
        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);
        long long ans = 0;
        while (n >= d) {
            int c = 0;
            while (n >= (d << (c + 1))) c++;
            ans += (1LL << c);
            n -= (d << (c));
        }
        if (ans == (1LL << 31) && !sign) return INT_MAX;
        else if (ans == (1LL << 31) && sign) return INT_MIN;
        return !sign ? ans : -1 * ans;
    }
};