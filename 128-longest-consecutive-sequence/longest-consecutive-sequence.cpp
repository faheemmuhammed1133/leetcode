class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        unordered_set<int> numSet(nums.begin(),nums.end());
        int maxSeq=0;
        for(int num : numSet){
            if(numSet.find(num-1)==numSet.end()){
                int count=1,cNum=num;
                while(numSet.find(cNum+1)!=numSet.end()){
                    count++;
                    cNum++;
                }
                maxSeq=max(count,maxSeq);
            }
        }
    
   return maxSeq;
    }
};