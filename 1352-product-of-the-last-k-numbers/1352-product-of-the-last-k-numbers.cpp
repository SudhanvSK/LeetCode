class ProductOfNumbers {
    vector<int> v;
public:
    ProductOfNumbers() {
    }
    void add(int num) {
        v.push_back(num);
    }
    int getProduct(int k) {
        int n = v.size(), pro = 1;
        for(int i=n-1;i>=n-k;i--) pro*=v[i];
        return pro;
    }
};