class Solution {
public:
    int reverseBits(int n) {
        // Submitted for 100DaysLeetCodeChallenge DAY 95
        bitset<32> binary(n);
        string bin = binary.to_string();
        reverse(bin.begin(),bin.end());
        return stoi(bin,NULL,2);
    }
};