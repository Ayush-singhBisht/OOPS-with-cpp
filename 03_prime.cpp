
#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Enter your number = ";
    cin >> a;
    cout<<endl;
    if (a==1){
        cout<<a<<" is a prime number ";
    }
    for (int i=2;i<=(a/2);i++){
        if(a%i==0){
            cout<<a<<" is not a prime number";
        break;
        }
        else{
            cout<<a<<" is a prime number";
        }
    }
    return 0;
}

