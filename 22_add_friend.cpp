#include <iostream>
using namespace std;

class B;
class A{
    int a,b;
    public:
        int input(int a,int b){
            this->a=a;
            this->b=b;
        }
        friend class B;
};

class B{
    int x,y;
    public:
        
        void input(){
            cout<<"enter the vslue: ";
            cin>>x>>y;
            

        }
        void add(A &obj){

            x=x+obj.a;
            y=y+obj.b;
            
        }

        void display(){
            cout<<x<<" "<<y<<endl;;
        }

};

int main(){
    B obj;
    A obj2;
    obj.input();
    obj2.input(20,40);
    obj.add(obj2);
    obj.display();

return 0;
}