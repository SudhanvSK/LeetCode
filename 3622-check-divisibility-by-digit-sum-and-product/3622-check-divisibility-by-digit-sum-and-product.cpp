class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0, pro = 1, t = n;
        while(n!=0)
        {
            sum+=(n%10);
            pro*=(n%10);
            n/=10;
        }
        return t%(sum+pro) == 0 ? true : false;
    }
};