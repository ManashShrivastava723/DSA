#include <bits/stdc++.h>
using namespace std;
void substring(string str,string current="",int i=0){
    if(i==str.size()){
        cout<<current<<endl;
        return;
    }
    substring(str,current,i+1);
    substring(str,current+str[i],i+1);
}
int main(){
    string str="abc";
    substring(str);
    return 0;
}