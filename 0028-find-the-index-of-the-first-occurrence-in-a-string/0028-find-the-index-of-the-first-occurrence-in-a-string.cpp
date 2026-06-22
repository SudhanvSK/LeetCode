class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()<needle.size()) return -1;
        size_t pos = haystack.find(needle);
        return pos!=string::npos ? pos : -1;
    }
};