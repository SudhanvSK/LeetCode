class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector <string> v;
        string temp;
        for(int i=0;i<n;i++) temp+='.';
        v.push_back(temp);
        for(int i=0;i<m-1;i++)
        {
            temp="";
            for(int j=0;j<n-1;j++) temp+='#';
            temp+='.';
            v.push_back(temp);
        }
        return v;
    }
};