class Solution {
public:
    int findClosest(int x, int y, int z) {
        int zx = abs(x-z);
        int zy = abs(y-z);
        if (x==y || zx == zy) return 0;
        return zx < zy ? 1 : 2;
    }
};