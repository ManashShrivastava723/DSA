#include <bits/stdc++.h>
using namespace std;

bool luckynumber(int n ,int step=2){
    if(step>n){
        return true;
    }
    if(n%step==0){
        return false;
    }
    int next_postion=n-(n/step);
    return luckynumber(next_postion,step+1);
}
int main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     if(luckynumber(n)){
         cout<<"1"<<endl;
     }
     else {
         cout<<"0"<<endl;
     } 
    }
    
}