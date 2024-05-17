#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int countnumber(int n){
    if (n==0)
        return 1;
    int res=0;
    while(n !=0){
        n=n/10;
        res++;
    }
    return res;
}
int main(){
    int n=12334;
    cout <<"number of digit"<<countnumber(n);
}