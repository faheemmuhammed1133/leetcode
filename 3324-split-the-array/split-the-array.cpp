class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        vector<int> freq(101,0);
        for (int i=0;i<nums.size()-1;i++){
            for (int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    freq[i]+=1;
                }
                if(freq[i]>1) return false;
            }
        }
        
        return true;
    }
};