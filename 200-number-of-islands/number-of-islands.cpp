class Solution {
public:
    void dfs(vector<vector<char>>& arr , int i , int j){
        if(i< 0 || j <0 ||i>=arr.size() || j>=arr[0].size() || arr[i][j]=='0') {
            return; 
            }
        arr[i][j]='0';
        dfs(arr,i,j-1);
        dfs(arr,i,j+1);
        dfs(arr,i-1,j);
        dfs(arr,i+1,j); 
    }
    int numIslands(vector<vector<char>>& arr) {
        int count =0,n=arr.size(),m=arr[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]=='1'){
                    count++;
                    dfs(arr ,i ,j );
                }
            }
        }
        return count;
    }
};