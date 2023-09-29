#include <iostream>
using namespace std;

class B;
class A{
    int a;

    public:
        void input(){
            cin>>a;
        }

        void display(){
            cout<<a<<endl;
        }

        friend void sum(A &x,B &y);
};
class B{
    int b;

    public:
    void input(){
        cin>>b;
    }
    
    void display(){
        cout<<b<<endl;
    }
    
    friend void sum(A &x,B &y);
};

void sum(A &x,B &y){
    
    int temp;
    
    temp=x.a;
    x.a=y.b;
    y.b=temp;
    
};
int main(){
    A x;
    B y;
    x.input();
    x.display();
    y.input();
    y.display();
    sum(x,y);
    x.display();
    y.display();
}