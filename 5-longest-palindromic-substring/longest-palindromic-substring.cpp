class Solution {
public:
    string longestPalindrome(string str) {
        int n = str.length();
        vector<vector<int> > dp(n,vector<int>(n,0));
        int maxLen=0,si,se;

        for(int g=0;g<n;g++){
           for(int i = 0 , j=g; j<n;j++, i++){
                if(g==0 ) {
                    dp[i][j]=1;
                }else if(g==1 && str[i]==str[j]){
                    dp[i][j]=g+1;
                }else if( str[i]== str[j] && dp[i+1][j-1]>0){
                    dp[i][j]=g+1;
                }

                if(maxLen <dp[i][j]){
                    maxLen=dp[i][j];
                    si=i;
                    se=j;
                }
            }
        }
        // cout<<str.substr(si,se);
        
        return str.substr(si,se-si+1);
    }
};