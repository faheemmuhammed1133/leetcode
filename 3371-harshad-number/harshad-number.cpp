class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0;
        int og=x;
        while(x!=0){
            sum+=x%10;
            x/=10;
        }
        if(og%sum==0){
            return sum;
        }else{
            return -1;
        }
    }
};