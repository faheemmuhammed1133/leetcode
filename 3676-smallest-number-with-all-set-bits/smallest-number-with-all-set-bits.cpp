class Solution {
public:
    int smallestNumber(int n) {
        if ( n <=1 ){
            return n;
        }
        int pow2 = pow(2 ,0);
        int i =1 ;
        int n2 = n*n;
        while (i<n2){
            if(pow2 > n){
                return pow2-1;
            }
            pow2 =  pow(2 ,i);
            i++;
        }

        return pow2-1;
    }
};