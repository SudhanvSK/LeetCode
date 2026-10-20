class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int n = piles.size();
        int coins = n/3, i = n-2, ans = 0;
        while(coins--) {ans+=piles[i]; i-=2;}
        return ans;
    }
};