#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b==0)
    return a;
    else {
        return gcd(b,a%b);
    }
}
long long lcm(int a,int b){
    return (a*b/gcd(a,b));
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<gcd(a,b)<<endl;
    cout<<lcm(a,b)<<endl;

}