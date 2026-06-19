class Solution {
public:
    int trap(vector<int>& height) {
        // Submitted for 100DaysLeetCodeChallenge DAY 100
        int l=0, r=height.size()-1, lm=height[l], rm=height[r], w=0;
        while(l<r) {
            if(lm<rm) 
            {
                l++;
                lm = max(lm,height[l]);
                w += lm-height[l];
            }
            else 
            {
                r--;
                rm = max(rm,height[r]);
                w += rm-height[r];
            }
        }
        return w;
    }
};