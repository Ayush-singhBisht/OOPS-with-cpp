#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Choices : \n1.ADDITION (+)\n2.SUBTRACTION (-)\n3.MULTIPLICATION (*)\n4.DIVISION (/)\n5.MODULUS (%)\n";
    char ch;
    cout<<endl<<"Enter operator = ";
    cin>>ch;
    cout<<"Enter operands = ";
    cin>>a>>b;
    cout<<endl;
    cout<<a<<" "<<ch<<" "<<b<<" "<<"= ";
    switch(ch){
        
        case '+':
        cout<<a+b;
        break;
        
        case '-':
        cout<<a-b;
        break;
        
        case '*':
        cout<<a*b;
        break;
        
        case '/':
        cout<<(float)(a/b);
        break;
        
        case '%':
        cout<<a%b;
        break;
        
        default:
        cout<<ch<<" is invalid opertor...";
        
    }

    return 0;
}
