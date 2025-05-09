class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        // generating cells
        vector<vector<int>> cells;
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                cells.push_back({r, c});
            }
        }
        
        // sorting 
        sort(cells.begin(), cells.end(),
             [rCenter, cCenter](const vector<int>& a, const vector<int>& b) {
                 int da = abs(a[0] - rCenter) + abs(a[1] - cCenter);
                 int db = abs(b[0] - rCenter) + abs(b[1] - cCenter);
                 return da < db;
             });
        
        return cells;
    }
};