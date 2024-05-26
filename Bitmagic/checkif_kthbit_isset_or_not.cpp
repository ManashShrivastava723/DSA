#include <bits/stdc++.h>
using namespace std;
bool kbitchecker(int n,int k){
    return ((n>>k) & 1);      
}
int main(){
   // int t;
    //cin>>t;
    //while(t--){
    long long n;
    cin>>n;
    int k;
    cin>>k;
    if(kbitchecker(n,k)){
        cout<<"yess";}
    else{
        cout<<"no";}
return 0;
    
}



