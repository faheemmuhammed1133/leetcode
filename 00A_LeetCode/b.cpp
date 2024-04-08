#include<iostream>
#include<vector>
using namespace std;
vector<int> nums;
// class Solution {
// public:
//     int maxWidthOfVerticalArea(vector<vector<int>>& points) {
//         int diff=0;
//         for(int i=0;i<points.size();i++)
//         {
//             int k=points[i+1][0]-points[i][0];
//             if(diff==0 || k>diff && k>0 ){
//                     diff=k;
//             }
        
//         }
//         return diff;
//     }
// };
int xOr(int ind){
    int k=0;
    if(ind==0){
        return nums[0];
    }else{
        k=nums[ind]^nums[ind-1];
        cout<<k;
        return k;
    }
}
// vector<int> prefs;
// vector <int> arr;
// int xOr(int ind){
//         int k;
//         if (ind==0){
//             return prefs[0];
//         }else{
//             k=arr[ind]^xOr(ind-1);
//             return k;
//         }
// }
// class Solution {
// public:
//     vector<int> findArray(vector<int>& pref) {
//         prefs=pref;
//         for(int i=1;i<pref.size();i++){
            
//             arr.push_back(xOr(i));
//         }
//         return arr;
//     }
// };


int main(){
    nums.push_back(5);
    nums.push_back(2);
    nums.push_back(0);
    nums.push_back(3);
    nums.push_back(1);
    // Solution s;
    // vector<int> sol=s.findArray(nums);
    for(int i=0;i<nums.size();i++){
        cout<<xOr(i);
    }

}