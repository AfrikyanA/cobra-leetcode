class Solution {
public:
    void reverseString(vector<char>& s) {
       reverse(s.begin(), s.end());

       // version 2
       
     /* int left = 0;
        int right = s.size()-1;
        
        while(left < right)
            swap(s[left++], s[right--]);
     */
       // version 3
       
     /*   int i = s.size()-1;
          int j = 0;
          vector<char> v(s.size());
          while(i >= 0){
                v[j++] = s[i--];
            }   
        s=v
     */
    }
};
