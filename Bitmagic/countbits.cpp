#include <bits/stdc++.h>
using namespace std;
int bitcount(int n){
    int res=0;
    while(n>0){
        n=(n & (n-1));
        res++;
    }
    return res;
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<"total set bits are "<<bitcount(n)<<endl;
    return 0;
}
    