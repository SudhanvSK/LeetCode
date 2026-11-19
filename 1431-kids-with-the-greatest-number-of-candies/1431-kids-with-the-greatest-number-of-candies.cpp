class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<int> candies1=candies;
        sort(candies1.begin(),candies1.end());
        vector<bool> result;
        for(int i=0; i< candies.size(); i++){
            if(candies[i] + extraCandies  >= candies1[candies.size()-1]){
                result.push_back(true);
            }else{
                result.push_back(false);
            }
        }
        return result;
    }
};