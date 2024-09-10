#include <bits/stdc++.h>
using namespace std;
int main(){
    string s= "rohit";
    int start=0;
    int end=s.size()-1;
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    cout<<s;
    
    //calculate length
    int leng=0;
    while(s[leng]!='\0'){
        leng++;
    }
    cout<<endl;
    cout<<leng<<" ";
}