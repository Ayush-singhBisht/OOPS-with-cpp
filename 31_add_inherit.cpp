#include<iostream>
using namespace std;

class input{
    protected:
        int no1,no2;
    public:
        void enter_input(){
            cin>>no1>>no2;
        }
};

class sum : public input{
    public:
        void display_sum(){
            cout<<"SUM = "<<no1+no2;
        }
};

int main(){
    int n,m;
    cout<<"enter two numbers = ";
    sum obj;
    obj.enter_input();
    obj.display_sum();
}