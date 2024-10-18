class Solution {
public:
    int search(vector<int>& nums, int t) {
        int r=0,l=nums.size()-1;
        while(r<=l){
            int mid=(r+l)/2;
            if(nums[mid]==t){
                return mid;
            }
            if(nums[mid]>t){
                l=mid-1;
            }
            if(nums[mid]<t){
                r=mid+1;
            }
        }
        return -1; 
    }
};