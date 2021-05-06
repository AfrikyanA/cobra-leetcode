class Solution {
public:
    int strStr(string haystack, string needle) {
        auto result = haystack.find(needle);
        if(result == string::npos)
            return -1;
        else return result;
    }
};
