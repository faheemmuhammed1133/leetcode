class Solution {
public:
    int findCenter(vector<vector<int>>& e) {
        int edge;
        for(int i=1;i<e.size();i++){
            for(int j=0;j<2;j++){
                if(e[0][0]==e[i][j]){
                    edge = e[0][0];
                }else if (e[0][1]==e[i][j]){
                    edge = e[0][1];
                }
            }
        }
        return edge;
    }
};