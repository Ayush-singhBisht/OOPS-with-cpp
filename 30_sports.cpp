

#include <iostream>
using namespace std;

class student
{
    int roll;
    string name;

public:
    void put_data()
    {
        cout << "Enter roll no. and name =  ";
        cin >> roll >> name;
    }

    void get_data()
    {
        cout <<"Student Name = "<<name<<endl;
    
        cout <<"Roll Number = "<<roll<<endl;
    
    }
};

class test
{
    int m1, m2, m3;

public:
    void put_marks()
    {
        cout << "Enter marks = ";
        cin >> m1 >> m2 >> m3;
    }
    int sum()
    {
        int s = m1 + m2 + m3;
    }

    void get_marks()
    {
        cout << "marks m1,m2,m3 = " << m1 << " " << m2 << " " << m3 << endl;
    }
};
class sports:public student{
    int s1,s2,s3;
    public:
        void put_sports(){
            cout<<"swimming = ";
            cin>>s1;
            cout<<"sprint = ";
            cin>>s2;
            cout<<"jump = ";
            cin>>s3;
        }

        void get_sports(){
            cout<<"swimming = "<<s1<<endl;
            cout<<"sprint = "<<s2;
            cout<<endl<<"jump = "<<s3;
        }
};


class result : public sports, public test
{

public:
    float total()
    {
        float t = sum() / 3;
        return t;
    }

    void data()
    {
        get_data();
        get_marks();
        int p = total();
        cout << "result = " << p;
        get_sports();
    }
};

int main(){
    result obj;

    obj.put_data();
    obj.put_marks();
    obj.put_sports();
    cout<<endl<<endl;
    obj.data();
}