#include <iostream>
using namespace std;
inline void printsum(int a,int b){
    cout<<"sum of "<<a<<" and "<<b<<" is "<<a+b;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    cout<<endl;
    printsum(a,b);
    
    return 0;
}
