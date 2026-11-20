class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        int n=a.size();
        bool ok = true;
        vector<int> ans, st;
        for(int i=0;i<n;i++){
            ok = true;
            if(a[i]>0) st.push_back(a[i]);
            else {
                int j = st.size() - 1;
                while(j>=0) {
                if(abs(a[i]) > st[j]) st[j] = 0;
                else if(abs(a[i]) == st[j]) {st[j]=0; ok = false; break;}
                else {ok = false; break;}
                j--;
            }
            if(ok) ans.push_back(a[i]);
            }
        }
        for(int i=0;i<st.size();i++) if(st[i]!=0) ans.push_back(st[i]);
        return ans; 
    }
};