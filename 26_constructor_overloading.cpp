#include<iostream>
using namespace std;
class ayush{
    private:
    public:
    ayush(){
        cout<<"constructor(1) called with no arguments"<<endl;
    }
    ayush(int a)
    {
        cout<<"constructor(2) called SQUARE "<<a*a<<endl;
    }
    ayush(int a,int b)
    {
        cout<<"constructor(3) called RECTANGLE "<<a*b;
    }
};
int main()
{  ayush obj1;
    ayush obj3(10);

    ayush obj2(10,20);
    return 0;
}