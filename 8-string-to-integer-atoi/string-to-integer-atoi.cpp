class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.length();
        long ans = 0;
        int sign = 1;

        // 1. Skip leading whitespaces
        while (i < n && s[i] == ' ') i++;

        // 2. Check for sign
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // 3. Parse digits
        while (i < n && isdigit(s[i])) {
            ans = ans * 10 + (s[i] - '0');
            
            // 4. Clamp if out of bounds
            if (sign * ans <= INT_MIN) return INT_MIN;
            if (sign * ans >= INT_MAX) return INT_MAX;

            i++;
        }

        return sign * ans;
    }
};
