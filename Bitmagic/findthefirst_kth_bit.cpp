#include <bits/stdc++.h>
using namespace std;
int findkth(int n){
    if(n==0) return 0;
    int pos=1;
    int bitchecker=1;
    while(!(n & bitchecker)){
        bitchecker <<=1;
        pos++;
    }
    return pos;
}
int main(){
    int n;
    cin>>n;
    cout<<findkth(n)<<endl;
    return 0;
}