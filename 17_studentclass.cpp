#include <iostream>
using namespace std;

class student{
    int roll_no;
    long ph_no;
    string address;
    
    public:
        void input(){
            cout<<"Enter roll number : ";
            cin>>roll_no;
            cout<<"Enter phone number : ";
            cin>>ph_no;
            cout<<"Enter address : ";
            cin>>address;
        }
        void display(){
            cout<<endl;
            cout<<"Roll number = "<<roll_no<<endl;
            cout<<"Phone number = "<<ph_no<<endl;
            cout<<"address = "<<address<<endl;
        }
};

int main(){
    student s1,s2;
    s1.input();
    s1.display();
    cout<<endl;
    s2.input();
    s2.display();
return 0;
}