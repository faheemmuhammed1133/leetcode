class Solution {
public:
    int findClosest(int x, int y, int z) {
        int zx = abs(x-z);
        int zy = abs(y-z);
        return zx < zy ? 1 : zx == zy ?  0 : 2;
    }
};