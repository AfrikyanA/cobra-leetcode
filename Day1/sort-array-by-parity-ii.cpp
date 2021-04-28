class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
       int size = nums.size();
       vector<int> arr(size);
        
        int even = 0;
        int odd = 1;
        
        for (int i = 0; i < size; ++i){
            if (nums[i] & 1){
                arr[odd] = nums[i];
                odd += 2;
            }
            else{
                arr[even] = nums[i];
                even += 2;
            }
        }
    return arr;
    }
};
