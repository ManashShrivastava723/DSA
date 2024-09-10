#include <bits/stdc++.h>
using namespace std;
void countcharacter(string s,int& vovels,int& constant, int& spaces){
    vovels=0;
    constant=0;
    spaces=0;
    for(char c :s){
        if(tolower(c) =='a' || tolower(c) =='e' ||tolower(c) =='i' || tolower(c) =='o' || tolower(c) =='u'){
        vovels++;
        }
        else if(isalpha(c)){
            constant++;
        }
        else if(isspace(c)){
            spaces++;
        }
    }
}
int main(){
    string string;
    cout<<"enter the string"<<endl;
    getline(cin, string);
    int vovels, constant,spaces;
    countcharacter(string,vovels,constant,spaces);
    cout<<"vovles"<<vovels<<" "<<endl;
    cout<<"constant"<<constant<<" "<<endl;
    cout<<"blank"<<spaces<<" "<<endl;
    return 0;


}