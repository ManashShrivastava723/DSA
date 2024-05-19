#include <bits/stdc++.h>
using namespace std;

int absolutenumber(int n){
    return (n < 0 ) ? -n :n ;
}
int main(){
    int n;
    cin>>n;
    cout<<"absolute number"<<absolutenumber(n);
    return 0;
}