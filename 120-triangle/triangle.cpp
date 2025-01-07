class Solution {
public:
    int minimumTotal(vector<vector<int>>& t) {
        vector<int> sum(t[t.size()-1]);
        for(int i=t.size()-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                sum[j]=t[i][j]+min(sum[j],sum[j+1]);
            }
            cout<<sum[i]<<" \n";
        }
        return sum[0];
    }
};