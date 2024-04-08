#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> reMoved;
        int l=nums.size();
        int k=0;// stores the index to return 
        sort(nums.begin(),nums.end());
        reMoved.push_back(nums[0]);
        for (int i=1;i<l;i++){
            if(nums[i]!=reMoved[k] ){
                reMoved.push_back(nums[i]);
                k++;
            }
        }
        nums=reMoved;
        return k+1; // convert index to size
        
    }
};

int main(){
    vector<int> nums;
    nums.push_back(5);
    nums.push_back(5);
    nums.push_back(2);
    nums.push_back(9);
    nums.push_back(1);
    nums.push_back(7);
    Solution s;
    int k=s.removeDuplicates(nums);
    for(int i=0;i<k;i++){
            cout<<nums[i]<<endl;
        }
    
}

