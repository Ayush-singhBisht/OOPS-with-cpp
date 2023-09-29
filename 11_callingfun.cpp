#include <iostream>
using namespace std;

void swap_by_value(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"Values after swaping with call by value = "<<a<<"  "<<b<<endl;
}

void swap_by_address(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swap_by_reference(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int p,q;
    cout<<"Enter two values : ";
    cin>>p>>q;
    cout<<endl;
    
    swap_by_value(p,q);
    
    swap_by_reference(p,q);
    cout<<"Values after swaping with call by reference = "<<p<<"  "<<q<<endl;
    
    swap_by_address(&p,&q);
    cout<<"Values after swaping with call by address = "<<p<<"  "<<q<<endl;

    return 0;
}
