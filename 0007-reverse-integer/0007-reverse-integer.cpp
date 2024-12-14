class Solution {
public:
    int reverse(int x) {
        int rX = 0; 
        while (x != 0) {
            if(INT_MAX / 10 < rX || INT_MIN / 10 > rX) return 0;
            rX = rX * 10 + x % 10; x /= 10;
        } 
        return rX;
    
    }
};