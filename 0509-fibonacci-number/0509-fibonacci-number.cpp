class Solution {
public:
    int fib(int n) {
        // Submitted for 100DaysLeetCodeChallenge DAY 84
        int f1=0;
        int f2=1;
        if (n==0) return f1;
        if (n==1) return f2;
        for (int i=2;i<=n;i++)
        {
            int f3 = f2 + f1; 
            f1 = f2;
            f2 = f3; 
        
        }
        return f2;
    }
};