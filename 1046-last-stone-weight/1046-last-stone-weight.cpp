class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        //Submitted for 100DaysLeetCodeChallenge DAY 73
        int n = stones.size();
        if(n==1) return stones[0];
        for(int i=0;i<n-1;i++)
        {
            sort(stones.begin(),stones.end());
            int diff = stones[n-1]-stones[n-2];
            if(diff==0) {stones[n-1]=0; stones[n-2]=0;}
            else {stones[n-1]-=stones[n-2]; stones[n-2]=0;}
        }
        return stones[n-1];
    }
};