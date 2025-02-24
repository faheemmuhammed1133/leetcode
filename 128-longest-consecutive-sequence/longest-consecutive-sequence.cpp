class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size()==0) {return 0;}
        sort(nums.begin(),nums.end());
        int count=1, max=1;
   for(int i=1; i<nums.size(); i++)
   {
    cout<<nums[i]<<endl;
      if(nums[i]==nums[i-1]+1 )
      {
        
         count++;
      }
      else if( nums[i]==nums[i-1]){
        // count=count;
      }else
      {
         count=1;
      }
      if(count>max)
      {
         max=count;
      }
   }
   return max;
    }
};