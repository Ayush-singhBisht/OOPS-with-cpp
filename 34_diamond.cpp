//16.12.22
#include<iostream>
using namespace std;

class A{
    int a;
    public:
        void inputA(){
            cin>>a;
        }
        void displayA(){
            cout<<"a = "<<a;
        }
};

class B:virtual public A{
    int b;
        public:
        void inputB(){
            cin>>b;
        }
        void displayB(){
            cout<<"b = "<<b;
        }
};

class C:virtual public A{
    int c;
        public:
        void inputC(){
            cin>>c;
        }
        void displayC(){
            cout<<"c = "<<c;
        }
};

class D:public B,public C{
    int d;
        public:
        void inputD(){
            cin>>d;
        }
        void displayD(){
            cout<<"d = "<<d;
        }
};

int main(){
    D obj2;
    obj2.inputA();
    obj2.displayA();
    obj2.inputB();
    obj2.displayB();
    obj2.inputC();
    obj2.displayC();
    obj2.inputD();
    obj2.displayD();

    return 0;
}