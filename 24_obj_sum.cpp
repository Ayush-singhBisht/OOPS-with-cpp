#include <iostream>
using namespace std;

class num{
    int n1,n2;
    public:
        void input(){
            cout<<"Enter two inputs : ";
            cin>>n1>>n2;
        }
        void display(){
            cout<<n1<<" "<<n2<<endl;
        }
        void sum(num a,num b){
            n1=a.n1 + b.n1;
            n2=b.n2 + b.n2;
        }
};

int main(){
    num p1,p2,p3;
    p1.input();
    p2.input();
    //p1.display();
    //p2.display();

    p3.sum(p1,p2);

    p3.display();

return 0;
}