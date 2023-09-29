#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    
    cout<<s.length();
    int i=0,c=0;
    while(s[i]){
        i++;
        c++;
    }
    cout<<c;
    return 0;
}