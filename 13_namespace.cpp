#include <iostream>

namespace add1{
    int add(int a,int b){
        return (a+b);
    }
}

namespace add2{
    float add(float a,float b){
        return (a+b);
    }
}

int main()
{
    int a,b;
    float i,j;
    
    std :: cout<<"Enter two integer : ";
    std :: cin>>a>>b;
    std :: cout<<std::endl;
    
    std :: cout<<"Enter two float value : ";
    std :: cin>>i>>j;
    std :: cout<<std::endl;
    
    std::cout<<"Sum of integers = "<<add1::add(a,b)<<std::endl;
    std::cout<<"Sum of flot values = "<<add2::add(i,j);
    
    return 0;
}
