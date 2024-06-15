#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int subset(int arr[],int n,int sum){
    if(n==0){
        return (sum==0) ? 1 :0;
    }
    return subset(arr,n-1,sum)+subset(arr,n-1,sum-arr[n-1]);
}
int main(){
    int n;
    cout<<"enter the n elments";
    cin>>n;

    int arr[n];
    cout<<"enter the array element";
    for(int i=0;i < n;i++){
        cin>>arr[i];
    }
    int sum;
    cout<<"enter the sum you want to find";
    cin>>sum;

    cout<<"no of subsets are"<<subset(arr,n,sum)<<endl;
    return 0;

}