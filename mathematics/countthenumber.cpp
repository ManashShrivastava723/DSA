#include <bits/stdc++.h>
using namespace std;
int countnumber(int n){
    if(n==0)
    return 1;
//factorial count
    double result=1;
    for(int i=2;i<=n;i++){
        result=result*i;

    }
//digit count
     int digit=0;
     while(result>=1){
        digit++;
        result=result/10;
     }
     return digit;
}
int main(){
    int n=5;
 //   cout<<result<<endl;
    cout<<countnumber(n);
    return 0;
}