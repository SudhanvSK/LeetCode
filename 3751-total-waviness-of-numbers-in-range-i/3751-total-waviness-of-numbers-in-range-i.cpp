class Solution {
public:
    int waviness(int n) {
        int wav = 0;
        vector <int> v;
        while(n!=0) {v.push_back(n%10); n/=10;}
        for(int i=1;i<v.size()-1;i++) 
        if((v[i-1]<v[i] && v[i]>v[i+1])||(v[i-1]>v[i] && v[i]<v[i+1])) wav++;
        return wav;
    }
    int totalWaviness(int num1, int num2) {
        int total_wav = 0;
        for(int i=num1;i<=num2;i++) total_wav+=waviness(i);
        return total_wav;
    }
};