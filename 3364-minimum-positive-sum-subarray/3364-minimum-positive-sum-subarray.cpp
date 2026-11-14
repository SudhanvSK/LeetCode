class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int sum = INT_MAX, n = nums.size();
        vector <int> v(n);
        v[0] = nums[0];
        for(int i=1;i<n;i++) v[i] = v[i-1] + nums[i];
        for(int k=l;k<=r;k++)
        {
            if(v[k-1]>0) sum = min(sum,v[k-1]);
            for(int i=k;i<n;i++)
            {
                int temp = v[i] - v[i-k];
                if(temp>0) sum = min(sum,temp);
            }
        }
        if(sum == INT_MAX) return -1; return sum;
    }
};