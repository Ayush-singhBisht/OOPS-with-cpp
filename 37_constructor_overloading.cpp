//16.12.22
#include<iostream>
using namespace std;

class A{
    int a;
    public:
        A(int a1){
            a=a1;
        }
        void displayA(){
            cout<<"a = "<<a;
        }
};

class B{
    int b;
        public:
            B(int b1){
            b=b1;
        }
        void displayB(){
            cout<<"b = "<<b;
        }
};

class C:public A,public B{
    int c;
        public:
        C(int a,int b,int c1):A(a),B(b){
            c=c1;
        }
        void displayC(){
            cout<<"c = "<<c;
        }
};


int main(){
    C obj2(1,2,3);
    
    obj2.displayA();
    
    obj2.displayB();
    
    obj2.displayC();

    return 0;
}