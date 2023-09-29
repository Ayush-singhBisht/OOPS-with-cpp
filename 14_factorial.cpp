#include <iostream>

using namespace std;

int fact(int a){
    if (a==1){
        return 1;
    }
    return a*fact(a-1);
}

int main()
{
    
    int n;
    cout<<"Enter a number = ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<fact(n);

    return 0;
}
