#include <bits/stdc++.h>
using namespace std;
string removecharacter(string s){
    string result="";
    for(char c: s){
        if(isalpha(c)){
            result+=c;
        }
    }
    return result;
}
int main(){
    string int_str;
    cout<<"enter the string :";
    getline(cin,int_str);
    cout<<"removecharacter : "<<removecharacter(int_str)<<endl;
    return 0;
}