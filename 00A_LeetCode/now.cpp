#include<iostream>
using namespace std;

int differenceOfSums(int n, int m) {
        int num1=0;
        int num2=0;
        for (int i=1;i<=n;i++)
        {
            if(i%m==0)
            {
                // cout<<" num1 :  "<<i<<endl;
                num2+=i;
            }else
            {
                cout<<" num2 :  "<<i/m<<endl;
                // cout<<i<<endl;
                num1+=i;
            }
        }
        cout<<" num1 :  "<<num1<<" "<<" num2 :  "<<num2<<"\n";
        return num1-num2;
}
int main(){
    int n = 10, m = 3;
    cout<<differenceOfSums(n,m)<<endl;
}