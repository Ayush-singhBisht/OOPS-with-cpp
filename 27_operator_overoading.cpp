#include <iostream>
using namespace std;
class SUM
{
    int a, b;

public:
void input(int a,int b){
    this->a=a;
    this->b=b;

}
void display(){
    cout<<a<<endl;
    cout<<b<<endl;
}
    SUM operator+(SUM obj)
    {
        SUM sum;
        sum.a = a + obj.a;
        sum.b = b + obj.b;
        return sum;
    }
};

int main()
{
    SUM obj1, obj2,obj3;
    obj1.input(10,20);
    obj2.input(20,30);
    obj3=obj1+obj2;
    obj3.display();
    return 0;
}