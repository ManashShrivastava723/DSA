#include <bits/stdc++.h>
using namespace std;
 
void nNumber(int n){
    if(n==0) return;
    nNumber(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"enter the n numbers :";
    cin>>n;
    nNumber(n);
    return 0;
}