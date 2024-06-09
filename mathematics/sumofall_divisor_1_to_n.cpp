#include <bits/stdc++.h>
using namespace std;
long long sumofall(int n){
    long long sum=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j*j<=i;j++){
            if(i%j==0){
                sum=sum+j;
                if(i/j!=j){
                    sum=sum+(i/j);
                }
            }
        }
      
    }
      return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<sumofall(n);
    return 0;
}
