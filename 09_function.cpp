#include <iostream>
using namespace std;

void area(int a,int b){
    cout<<"Area of rectangle = "<<a*b;
}

void area(float a,int b){
    cout<<"Area of triangle = "<<1/2*(a*b);
}

void area(float a){
    cout<<"Area of circle = "<<3.14*a*a;
}

void area(int a){
    cout<<"Area of square = "<<a*a;
}

int main()
{
    cout<<"Choices : \nRECTANGLE = 1 \nTRIANGLE = 2 \nCIRCLE = 3 \nSQUARE = 4";
    int ch,a,b;
    cout<<endl<<"Enter your choice = ";
    cin>>ch;
    
    cout<<endl;
    
    switch(ch){
        
        case 1:
        cout<<"Enter dimensions of rectangle = ";
        cin>>a>>b;
        area(a,b);
        break;
        
        case 2:
        cout<<"Enter dimensions triangle = ";
        cin>>a>>b;
        area((float)a,b);
        break;
        
        case 3:
        cout<<"Enter radius = ";
        cin>>a;
        area((float)a);
        break;
        
        case 4:
        cout<<"Enter side = ";
        cin>>a;
        area(a);
        break;
        
        
        default:
        cout<<ch<<" is invalid choice...";
        
    }

    

    return 0;
}
