class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> newnum;
        for(int i:nums){
            if(i!=val){
                newnum.push_back(i);
            }
        }
        nums=newnum;
        return newnum.size();
    }
};