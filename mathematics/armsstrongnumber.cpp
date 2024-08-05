#include <bits/stdc++.h>
using namespace std;
int armstrong(int n){
    int digits=0;
    int original=n;
    while(original>0){
        digits++;
        n=n/10;
    }
    int sum=0;
    while(original>0){
        int digit=original%10;
        sum=sum +pow(digit,digits);
        n=n/10;
    }
    return (sum==original);
}
// int order(int x)
// {
//     int n = 0;
//     while (x) {
//         n++;
//         x = x / 10;
//     }
//     return n;
// }

// int getsum(int n){
//     int sum =0;
//     int len= order(n);
//     while(n!=0){
//         sum+= pow((n%10),len);
//         n=n/10;
//     }

//     return sum;
// }


// bool armstrong(int n){
//     int sum = getsum(n);

//     if(sum == n){
//         return 1;
//     }

//     return 0;
// }

int main(){
    int n;
    cin>>n;
    if(armstrong(n)==1){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}
