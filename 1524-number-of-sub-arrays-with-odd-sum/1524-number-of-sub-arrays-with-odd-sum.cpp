class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        long long odd = 0, even = 1, count = 0;
        int sum = 0;
        for(int x : arr) {
            sum += x;
            if(sum % 2 == 0) {
                count += odd;
                even++;
            }
            else {
                count += even;
                odd++;
            }
            count %= MOD;
        }
        return count;
    }
};