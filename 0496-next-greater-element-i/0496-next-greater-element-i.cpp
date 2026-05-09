class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // Submitted for 100DaysLeetCodeChallenge DAY 59
        vector <int> v;
        for(int i=0;i<nums1.size();i++)
        {
            int now = nums1[i];
            int ans;
            for(int j=0;j<nums2.size();j++) if(nums2[j]==now) {ans = j; break;}
            if(ans==nums2.size()-1) v.push_back(-1);
            else 
            {
                bool ok = false;
                for(int k=ans+1;k<nums2.size();k++) if(nums2[k]>now) {ok = true; v.push_back(nums2[k]); break;}
                if(!ok) v.push_back(-1);
            }
        }
        return v;
    }
};