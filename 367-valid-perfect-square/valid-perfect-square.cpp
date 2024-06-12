class Solution {
public:
    bool isPerfectSquare(int num) {
        for(long int i=0;i<=num/2+1;i++){
            if(i*i==num)
            return true;
        }
        return false;
    }
};