//https://leetcode.com/problems/reverse-integer/

#include<iostream>
using namespace std;

int main(){
    int n,x=0;
    cin>>n;
    while(n>0){
        int digit=n%10;
        if((x>INT32_MAX/10)||(x<INT32_MIN/10)){
            return 0;
        }

        x=x*10+digit;        
        n=n/10;
        
    }
    cout<<x;
}


