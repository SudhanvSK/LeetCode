class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int carry = 1;
        for(int i=digits.size()-1;i>=0;i--)
        {
            if(carry == 1 && digits[i]+carry != 10) {ans.push_back(digits[i]+1); carry = 0;}
            else if(carry == 1) ans.push_back(0);
            else ans.push_back(digits[i]);
        }
        if(carry == 1) ans.push_back(1);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};