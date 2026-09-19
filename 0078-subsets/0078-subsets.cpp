class Solution {
public:
    vector<vector<int>> v;
    vector<int> t;
    void helper(vector<int>& nums, int i) {
        if(i == nums.size()) {
            v.push_back(t);
            return;
        }
        t.push_back(nums[i]);
        helper(nums, i + 1);
        t.pop_back();
        helper(nums, i + 1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        helper(nums, 0);
        return v;
    }
};