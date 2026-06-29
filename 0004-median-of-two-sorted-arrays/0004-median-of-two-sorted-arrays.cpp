class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        int i=0,j=0,n=nums1.size(),m=nums2.size();
        while(i<n||j<m)
        {
            if(i>=n) nums.push_back(nums2[j++]);
            else if(j>=m) nums.push_back(nums1[i++]);
            else if(nums1[i]<=nums2[j]) nums.push_back(nums1[i++]);
            else nums.push_back(nums2[j++]);
        }
        int mid = (n+m)/2;
        double ans;
        if((n+m)%2) ans = (double) nums[mid];
        else ans = ((double) nums[mid] + (double) nums[mid-1])/2;
        return ans;
    }
};