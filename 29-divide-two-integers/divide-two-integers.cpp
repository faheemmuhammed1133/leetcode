class Solution {
public:
    int divide(int dividend, int divisor) {
        
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        int sign = 1;
        if(dividend < 0) sign *= -1;
        if(divisor < 0)  sign *= -1;
        
        long long ldividend = abs((long long)dividend);
        long long ldivisor = abs((long long)divisor);
        
        long long result = ldividend / ldivisor;
        
        return sign * result;
    }
};
    