#include<iostream>
using namespace std;

int main(){
int a,b;
cin>>a>>b;
try
{
    if(b<a){
        cout<<a/b;
    }
    else{
        throw b;
    }
}
catch(int n)
{
    try{
        if(b!=0){
        cout<<"b is small";
    }
    else{
        throw b;
    }
    }
    catch(int b){
        cout<<"sorry";
    }
}
    return 0;
}