#include <bits/stdc++.h>
using namespace std;
int traillingzeros(int n){
    if (n<0)
    return -1;

    int res=0;
    for(int i=5;n/i>=1;i=i*5)
        res=res+n/i;
        return res;
    
   
    
}
int main(){
    int n=10;
    //cin>>n;
    cout<<traillingzeros<<traillingzeros(n);
    return 0;
}