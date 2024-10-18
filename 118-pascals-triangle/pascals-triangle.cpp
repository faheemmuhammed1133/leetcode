class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> tri;
        for(int i=0;i<numRows;i++){
            vector<int> sub;
            int p=1;
            for(int j=0;j<i+1;j++){

                sub.push_back(p);
                p=p*(i-j)/(j+1);
            }
            tri.push_back({sub});
        }
        return tri;
    }
};