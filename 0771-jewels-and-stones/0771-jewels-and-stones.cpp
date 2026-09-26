class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map <char,int> mp;
        for(char i:jewels) mp[i]++;
        int sum = 0;
        for(char i:stones) if(mp[i]>0) sum++;
        return sum;
    }
};