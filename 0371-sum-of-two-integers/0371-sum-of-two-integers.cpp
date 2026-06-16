class Solution {
public:
    int getSum(int a, int b) {
        // Submitted for 100DaysLeetCodeChallenge DAY 97
        bitset <32> binary1((unsigned)a);
        string a_bin = binary1.to_string();
        bitset <32> binary2((unsigned)b);
        string b_bin = binary2.to_string();
        int i=31, carry = 0;
        string ans;
        while(i>=0)
        {
            int a1 = a_bin[i] - '0';
            int b1 = b_bin[i] - '0';
            if(carry==0) {
                if (!(a1&b1)&&(a1|b1)) ans += '1';
                else if (!(a1&b1)&&!(a1|b1)) ans += '0';
                else {carry = 1; ans += '0';}
            }
            else {
                if (!(a1&b1)&&(a1|b1)) {carry = 1; ans += '0';}
                else if (!(a1&b1)&&!(a1|b1)) {carry = 0; ans += '1';}
                else {carry = 1; ans += '1';}
            }
            i--;
        }
        reverse(ans.begin(),ans.end());
        unsigned x = bitset<32>(ans).to_ulong();
        return (int)x;
    }
};