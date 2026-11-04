class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector <int> v;
        for(int i:nums) if (find(v.begin(), v.end(), i) == v.end()) v.push_back(i);
        sort(v.begin(),v.end());
        int n = v.size();
        if(n<3) return v[n-1];
        else return v[n-3];
    }
};