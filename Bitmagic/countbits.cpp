#include <bits/stdc++.h>
using namespace std;
int bitcount(int n){
    int sum=0;
    while(n>0){
        n=(n & (n-1));
        sum=sum+n;
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<"total set bits are "<<bitcount(n)<<endl;
    return 0;
}
    