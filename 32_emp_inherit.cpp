#include<iostream>
using namespace std;

class person{
protected:
    string add;
    int pno;
public:
    void get_a(){
        cout<<"address : ";
        cin>>add;
        cout<<"\nphone number :";
        cin>>pno;
    }
    void put_a(){
        cout<<add;
        cout<<pno;
    }

};

class employee:public person{
protected:
    string ename;
    int eno;
public:
    void get_b(){
        cout<<"\nemployee name :";
        cin>>ename;
        cout<<"\nemployee number :";
        cin>>eno;
    }
    void put_b(){
        cout<<ename;
        cout<<eno;
    }
};

class manager:public employee{
protected:
    string dept;
    string desg;


public:
    int sal;
    void get_c(){
    cout<<"\ndepartment :";
    cin>>dept;
    cout<<"\ndesignation :";
    cin>>desg;
    cout<<"\nsalary :";
    cin>>sal;
    }

    void total(){
        put_a();
        put_b();
        cout<<dept;
        cout<<desg;
        cout<<sal;
    }

};


int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;

    manager obj[n];
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"emp = "<<i+1<<endl;
        obj[i].get_a();
        obj[i].get_b();
        obj[i].get_c();
        obj[i].total();
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        arr[i]=obj[i].sal;
    }

    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<min;

return 0;
}