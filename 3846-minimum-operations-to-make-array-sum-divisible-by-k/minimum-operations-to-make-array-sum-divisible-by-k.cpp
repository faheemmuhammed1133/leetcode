class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        if(nums.size()>0){
            int sum = 0;
            int count=0;
            for (int i =0 ; i<nums.size();i++){
                sum+=nums[i];
            }

            if(sum%k!=0){
                return sum%k;
            }
        }
        return 0;
    }
};