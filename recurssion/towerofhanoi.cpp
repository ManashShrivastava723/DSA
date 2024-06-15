#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
long long toh(int n,char from_rod, char to_rod ,char aux){
    if(n==0){
        return 0;
    }
    long long moves=toh(n-1,from_rod,aux,to_rod);
    
    cout<<n<<" from_rod  "<<from_rod<<"  to  "<<to_rod<<endl;
    moves++;
    moves+=toh(n-1,aux,to_rod,from_rod);
    return moves;
}
int main(){
    int n;
    cin>>n;
    cout<<toh(n,'a','b','c');
    return 0;

}