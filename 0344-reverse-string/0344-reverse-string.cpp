class Solution {
public:
    void reverseString(vector<char>& s) {
        // Submitted for 100DaysLeetCodeChallenge DAY 52
        for(int i=0,j=s.size()-1;i<j;i++,j--) swap(s[i],s[j]);
    }
};