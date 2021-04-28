// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int start = 0;
        int end = n;
        int mid;
        
        while(start <= end){
            mid = start + (end - start)/2;
            
            if (!isBadVersion(mid) && isBadVersion(mid+1))
                return mid+1;
				
            if (!isBadVersion(mid))
                start = mid+1;
            
            else
            {
                end = mid;
            }
        }
       
    return mid;}
};
