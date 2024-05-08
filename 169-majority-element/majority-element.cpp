class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size()/2;
        sort(nums.begin(),nums.end());
        int max=nums[0];
        int count=0;
        if(n!=0){        
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=max){
                    count=0;
                    max=nums[i];
                }
                count++;
                if(count>n){
                    return nums[i];
                }
            }
        }
        return nums[0];
    }
};