class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        for ( int e : nums){
            if (e%3!=0){
                count++;
            }
        }
        return count;
    }
};