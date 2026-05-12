class Solution {
public:
    int firstBadVersion(int n) {
        // Submitted for 100DaysLeetCodeChallenge DAY 62
        int i=0, j=n;
        while(i<=j)
        {
            int mid = i+(j-i)/2;
            if(isBadVersion(mid)) j = mid-1;
            else i = mid+1;
        }
        return i;
    }
};