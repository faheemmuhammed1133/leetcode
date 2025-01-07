class Solution {
public:
    int minimumTotal(vector<vector<int>>& t) {
        int l=t.size()-1;
        vector<int> sum(t[l]);
        for(int i=l-1;i>=0;i--){
            for(int j=0;j<=i;j++){
                sum[j]=t[i][j]+min(sum[j],sum[j+1]);
            }
            cout<<sum[i]<<" \n";
        }
        return sum[0];
    }
};