#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    return b==0 ? a :(b,a%b);
    
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<"gcd is"<<gcd(a,b);
    return 0;
}
