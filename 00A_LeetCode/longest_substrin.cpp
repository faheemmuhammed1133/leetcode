#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
void substring(string s){
    vector<char> qU;
    int front=0;
    int rear=0;
    qU.push_back(s[0]);
    for(int i=1;i<s.size();i++){
        for(int j=front;j<rear;j++){
            if(s[i]==qU[j]){
                front++;
                cout<<s[i];
            }

        }rear++;
    qU.push_back(s[i]);

    }
    cout<<rear-front;
    
}
int main(){
    string s1="abcabcbb";
    string s2="bbbbb";
    string s3="pwwkew";
    substring(s1);
    substring(s2);
    substring(s3);
    
}