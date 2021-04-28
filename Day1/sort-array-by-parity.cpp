class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        size_t size = A.size();
        int j = 0;
        
        for (int i = 0; i < size; ++i){
            if (A[i] % 2 == 0){
                swap(A[i],A[j++]);
            }
        }
    return A;}
};
