class Solution {
public:
    int sumBase(int n, int k) {
        int sum=0;
        while(n!=0){
            int digit=n%k;
            n/=k;
            sum+=digit;
        }
        return sum;
    }
};