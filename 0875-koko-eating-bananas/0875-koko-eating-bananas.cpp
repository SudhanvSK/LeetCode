class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // Submitted for 100DaysLeetCodeChallenge DAY 64
        long long n = piles.size();
        long long k;
        long long max=*max_element(piles.begin(),piles.end());
        long long sum,low=1,high=max;
        while(low<=high)
        {
            long long mid=(low+high)/2;
            sum=0;
            for(long long i=0;i<n;i++)
            {
                if(piles[i]%mid==0) sum+=(piles[i]/mid);
                else sum+=(piles[i]/mid+1);
            }
            if(sum<=h) {k=mid;high=mid-1;}
            else low=mid+1;
        }   
        return k;
    }
};