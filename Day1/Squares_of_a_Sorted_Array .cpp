class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        size_t size = A.size();
        vector<int> res(size);
        size_t l = 0;
        size_t r = size - 1;
        for (size_t k = size - 1; k >= 0; --k) {
            if (abs(A[r]) > abs(A[l])){
                res[k] = A[r] * A[r--];
            }
            else {
                res[k] = A[l] * A[l++];
            }
        }
        return res;
    }
};
