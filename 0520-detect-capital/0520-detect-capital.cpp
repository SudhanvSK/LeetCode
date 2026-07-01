class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        for(char i : word) if(isupper(i)) count++;
        return (count == word.length()) || (count == 0) || (count == 1 && isupper(word[0]));
    }
};