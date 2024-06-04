#include <bits/stdc++.h>
using namespace std;

void Twooddoccuring(int arr[],int n){
    int x=arr[0];

    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++)
          if(arr[i]==arr[j])
            count++;
        if(count%2!=0)
        cout<<arr[i];
    }
}
int main(){
    int arr[]={2,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,5,5,5,5,6,6,6,77,7,7,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    Twooddoccuring(arr,n);
    return 0;
}