class Solution {
public:
    int hammingWeight(int n) {
        // Submitted for 100DaysLeetCodeChallenge DAY 92
        bitset<32> binary(n);
        string ans = binary.to_string();
        int c=0;
        for(char i:ans) if(i=='1') c++;
        return c;
    }
};