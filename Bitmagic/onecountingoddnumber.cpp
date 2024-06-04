#include <bits/stdc++.h>
using namespace std;
int oneodd(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        res=res^arr[i];
    }
    return res;
}
int main(){
    int arr[]={2,2,3,3,3,3,4,4,4,4,2,2,5,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<oneodd(arr,n);
    return 0;
}