#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void permu(string & s, int i=0){
    if(i==s.size()-1){
        cout<<s<<endl;
    }
    for(int j=i;j<s.size();j++){
        swap(s[i],s[j]);
        permu(s,i+1);
        swap(s[i],s[j]);

    }
}
int main(){
    string s ="ABC";
    permu(s);
}