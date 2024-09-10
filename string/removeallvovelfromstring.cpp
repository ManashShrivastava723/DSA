#include <bits/stdc++.h>
using namespace std;
string removevovles(string s){
    string vovles="aeiouAEIOU";
    string result= "";
    for(char c: s){
        if(vovles.find(c)==string::npos){
            result +=c;
        }
    }
    return result;
}
int main(){
    string int_str;
    cout<<"enter the string";
    getline(cin,int_str);
    cout<<removevovles(int_str);
    return 0;
}