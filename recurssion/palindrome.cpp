#include <bits/stdc++.h>
using namespace std;
 bool ispalindrome(string & str,int start ,int end){
    if(start >= end){
        return true;
    }
    if(str[start]!=str[end]){
        return false;
    }
    return ispalindrome(str,start+1,end-1);
 }
 int main(){
    string str;
    int start;
    int end;
    cin>>str>>start>>end;
    bool result=ispalindrome(str,start,end);
    if (result){
        cout<<"is palindrome"<<endl;
    }
    else {
        cout<<"not "<<endl;
    }

    return 0;
 }