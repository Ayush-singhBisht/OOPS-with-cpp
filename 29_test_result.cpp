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

class test:public student
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

class result :  public test
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
    }
};

int main()
{
    result obj1;
    obj1.put_data();
    obj1.put_marks();
    cout<<endl;
    obj1.data();
    return 0;
}