class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.resize(m);
        
        vector<int> out(m+n,0);
        std::merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(),                        out.begin());
        nums1 = out;
    }
};
