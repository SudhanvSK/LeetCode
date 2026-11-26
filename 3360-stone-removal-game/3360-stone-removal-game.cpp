class Solution {
public:
    bool canAliceWin(int n) {
        bool ok = false;
        int moves = 10;
        if(n<10) return false;
        while(n>=moves)
        {
            n-=moves;
            moves--;
            ok=!ok;
        }
        return ok;
    }
};