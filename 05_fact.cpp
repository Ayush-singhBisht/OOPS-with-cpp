#include <iostream>
using namespace std;

int main()
{
    int n,fact=1;
    cout<<"Enter a number = ";
    cin>>n;
    cout<<endl;
    
    for (int i=1;i<=n;i++){
        fact*=i;
    }
    cout<<"factorial of "<<n<<" is "<<fact;

    return 0;
}
