class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int> freq;
         for (int x : nums) {
            if (++freq[x] > 2) {
                return false;
            }
        }
        return true;
    }
};