#include <bits/stdc++.h>
using namespace std;

string removespaces(string s){
    string result="";
    for(char c: s){
       if(c !=' '){
        result+=c;
       }
    }
    return result;

}
int main(){
    string int_str;
    cout<<"enter the string :";
    getline(cin,int_str);
    cout<<"removespaces    ;"<<removespaces(int_str);
    return 0;
}