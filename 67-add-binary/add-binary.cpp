class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int i = a.length()-1, j =b.length()-1;
        int sum=0;
        while(i>=0 or j>=0 or sum==1 ){
            sum+= i>= 0 ? a[i]-'0':0;
            sum+= j>= 0 ? b[j]-'0':0;

            ans = char(sum%2+'0')+ans;
            sum/=2;
            i--;j--;
        }

        return ans;
    }
};