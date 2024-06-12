class Solution {
public:
    int addDigits(int n) {
        if(n<=9)
        return n;
        int sum=0;
        repeat:
        while(n>9 ){
            int digit=n%10;
            n/=10;
            sum+=digit;
            if(n<=9){
                sum+=n;
            }
        }
        if(sum>9){
                n=sum;sum=0;
                goto repeat;
            }
        return sum;
    }
};