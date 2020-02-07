class Solution {
public:
    int reverse(int x) {
        int result = 0;
        while (x != 0) {
            // check overflow
            // why INT_MAX/10?
            if (abs(result) > (INT_MAX / 10))
                return 0;
            // overflow at the following line
            // so INT_MAX / 10 
            result *= 10;  // at first, 0 *= 10 is 0, not shift
            result += x % 10;
            x /= 10;
        }
        return result;
    }
};
