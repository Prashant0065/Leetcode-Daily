// Last updated: 9/25/2026, 3:56:58 PM
class Solution {
public:
    int mySqrt(int x) {
        if (x == 1 || x == 0) return x;
        long long i = 1;
        while(i * i <= x){
            i++;
        }
        return i - 1;
    }
};