class Solution {
public:
    int countSubstrings(string s) {
        int n=s.length(),count=0;
        vector<vector<int>> dp(n, vector<int>(n,0));
        for(int g=0;g<n;g++){
            for(int i=0,j=g; j<n; i++,j++){
                if((g==0) or (g==1 && s[i]==s[j]) or(s[i]==s[j] && dp[i+1][j-1]>0) ) {
                    dp[i][j]=g+1;
                }

                if(dp[i][j]>0){ 
                    count++;
                }
            }
        }
        return count;
    }
};