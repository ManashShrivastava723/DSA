#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int ispal(int n){
    int rev=0;
    int temp=n;
    while(temp!=0){
        rev=(rev*10)+(temp%10);
        temp=temp/10;
    }
    return (rev==n);

}
int main(){
    int n=7007;
    if(ispal(n)==1){
        cout<<"yes";}
    else{
        cout<<"no";
    }
    return 0;
    }
    
