class Solution {
public:
    static int count1(int a){
        int count = 0;
        while(a){
            a &= (a - 1);
            count++;
        }
        return count;
    }
    
    static bool cmp(int a, int b){
        int x = count1(a);
        int y = count1(b);
        if(x < y){
            return true;
        }
        if(x == y){
            if(a < b){
                return true;
            }
        }
        return false;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), cmp);
        return arr;
    }
};
