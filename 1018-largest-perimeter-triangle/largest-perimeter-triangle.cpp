class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        if(nums.size()<3){
            return 0; 
        }
        int a, b, c;
        sort(nums.begin(),nums.end(),greater<int>());
        
        for (int i=0 ; i<nums.size()-2; i++){
            a = nums[i];
            b = nums[i+1];
            c = nums[i+2];
            if(b+c >a){
                cout<<a+b+c;
                return a+b+c;
            }
        }
       return 0;
    }
};