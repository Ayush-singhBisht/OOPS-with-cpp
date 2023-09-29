#include <iostream>
using namespace std;

class student{
    string name;
    int age,marks[3];
    char section;
    public:
        void input(){
            cout<<"enter name : ";
            cin>>name;
            cout<<"\nenter age : ";
            cin>>age;
            cout<<"\nenter section : ";
            cin>>section;
            cout<<"\nenter marks : ";
            for (int i = 0; i < 3  ; i++){
                cin>>marks[i];
            }
            cout<<endl;

            }
        void display(){
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
            cout<<"Section : "<<section<<endl;
            cout<<"Marks : ";
            for (int i = 0; i < 3  ; i++){
                cout<<marks[i]<<"\t";
            }
            cout<<endl;
        }

        double cal_percent(){
            int sum=0;
            double per;
            for (int i = 0; i < 3; i++)
            {
                sum+=marks[i];
            }
            per=(sum/300)*100;
            return per;
        }

        };


int main(){
    student o[3];
    for (int i = 0; i < 3; i++)
    {
        o[i].input();
        o[i].display();
        cout<<"percentage = "<<o[i].cal_percent()<<endl;
    }
    

return 0;
}