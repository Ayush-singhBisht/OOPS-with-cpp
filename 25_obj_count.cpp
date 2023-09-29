#include <iostream>
using namespace std;

class A{
    static int c;
    
    public:
    A(){
        c++;
    }
    void display(){
        cout<<c;
    }

};
int A::c=0;

int main()
{
A obj1,obj2,obj3;
obj3.display();

return 0;
}