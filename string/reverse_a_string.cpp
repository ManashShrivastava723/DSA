#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter the string :";
    cin>>s;

    int start=0;
    int end=s.size()-1;
    while(start<=end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    cout<<"reversed string :"<<s<<endl;
    return 0;

}