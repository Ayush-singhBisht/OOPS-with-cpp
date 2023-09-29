#include<iostream>
using namespace std;

class A{
    int x;
    public:
    void input(int x){
        this->x=x;
    }
    void display(){
        cout<<x<<endl;
    }

    void operator ++(){
        ++x;
    }
};

int main(){

    A obj;
    obj.input(20);
    obj.display();
    ++obj;
    obj.display();
    return 0;
}