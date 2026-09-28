class Solution {
public:
    int maxDepth(string s) {
        int op = 0, ans = 0;
        for(char i:s)
        {
            if(i=='(') op++;
            else if(i==')') op--;
            ans = max(ans,op); 
        }
        return ans;
    }
};