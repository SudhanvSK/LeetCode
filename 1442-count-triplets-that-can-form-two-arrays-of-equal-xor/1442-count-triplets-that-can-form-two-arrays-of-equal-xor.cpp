class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n = arr.size() + 1, res = 0;
        vector <int> prefix(n);
        for (int i = 1; i < n; i++) prefix[i] = arr[i - 1] ^ prefix[i - 1];
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                if (prefix[i] == prefix[j]) res += j - i - 1;
        return res;
    }
};