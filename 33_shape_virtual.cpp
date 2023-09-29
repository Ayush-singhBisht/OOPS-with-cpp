#include<iostream>
using namespace std;
class shape{
    protected:
        double D1=5,D2=8;
    public:
        void get_data(){
            cout<<"enter two arguments";
            cin>>D1>>D2;
        }

        virtual void display_area(){
            cout<<"rectangle ="<<D1*D2<<endl;
            cout<<"triangle = "<<0.5*D1*D2<<endl;
        }
};

class triangle:public shape{
    public:
        void display_area(){
            cout<<"inside triangle function"<<endl;
            cout<<"Area of triangle = "<<0.5*D1*D2<<endl;
        }
};

class rectangle:public shape{
    public:
        void display_area(){
            cout<<"inside rectangle function"<<endl;
            cout<<"Area of rectangle = "<<D1*D2<<endl;
        }
};

int main(){

    shape *ptr,obj1;
    triangle obj2;
    rectangle obj3;
    
    
    ptr=&obj1;
    ptr->get_data();
    ptr->display_area();
    
    ptr=&obj2;
    ptr->display_area();
    
    ptr=&obj3;
    ptr->display_area();

    return 0;
}