#include <iostream>
#include<cmath>
using namespace std;

class triangle{
    int a,b,c;
    public:
        void input(){
            cout<<"Enter 1st side : ";
            cin>>a;
            cout<<"\nEnter 2nd side : ";
            cin>>b;
            cout<<"\nEnter 3rd side : ";
            cin>>c;
            cout<<endl;
        }

        int perimeter(){
            return (a+b+c);
        }

        float area(){
            float s=(perimeter())/2;
            return sqrt((s)*(s-a)*(s-b)*(s-c));
        }


};

int main(){
    triangle t;
    t.input();
    cout<<"\nArea of triangle : "<<t.area();
    cout<<"\nPerimeter of triangle : "<<t.perimeter();

return 0;
}