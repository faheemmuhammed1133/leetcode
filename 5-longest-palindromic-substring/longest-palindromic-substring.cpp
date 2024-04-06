class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";

        int start = 0;
        int maxLength = 1;
        int n = s.size();
        bool table[n][n] ; // Create a boolean table to store results
        for (int i = 0; i < n; i++) {
            fill_n(table[i], n, false);
        }

        // All substrings of length 1 are palindromes
        for (int i = 0; i < n; ++i) {
            table[i][i] = true;
        }

        // Check for palindromes of length 2
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == s[i + 1]) {
                table[i][i + 1] = true;
                start = i;
                maxLength = 2;
            }
        }

        // Check for palindromes of length greater than 2
        for (int k = 3; k <= n; ++k) {
            for (int i = 0; i < n - k + 1; ++i) {
                int j = i + k - 1;
                if (table[i + 1][j - 1] && s[i] == s[j]) {
                    table[i][j] = true;
                    if (k > maxLength) {
                        start = i;
                        maxLength = k;
                    }
                }
            }
        }

        return s.substr(start, maxLength);
    }
};