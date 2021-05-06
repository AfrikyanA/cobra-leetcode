class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto it = std::unique (nums.begin(), nums.end());
        
        nums.resize (std::distance(nums.begin(),it));
        return nums.size();
    }
};
