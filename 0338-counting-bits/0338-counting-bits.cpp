class Solution {
public:
    // Submitted for 100DaysLeetCodeChallenge DAY 93

    int hammingWeight(int n) {
        bitset<32> binary(n);
        string ans = binary.to_string();
        int c=0;
        for(char i:ans) if(i=='1') c++;
        return c;
    }

    vector<int> countBits(int n) {
        vector <int> ans;
        for(int i=0;i<n+1;i++) ans.push_back(hammingWeight(i));
        return ans;
    }
};