#include <bits/stdc++.h>
using namespace std;
void alldivisor(int n){
    int i;
    for(int i=1;i<=sqrt(n);i++){ //for first divisor for 1 to rot n
        if(n%i==0)
        cout<<i<<" ";}
    if (i - (n / i) == 1) {
         i--;
    }
    for( ; i>=1;i--){
        if(n%i==0)
       
        cout<<(n/i)<<" "; }
    
}
int main() {
    int n;
    cin>>n;
    cout<<"all_divisorsare";
    alldivisor(n);
    return 0;
}

