//give the greatest number which is common between two number
#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    return (b==0)?a:gcd(b,a%b);
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<"gcd of a and b is "<<gcd(a,b);
    return 0;
}