#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter chacter = ";
    cin>>ch;
    switch(ch){
        case 'a':
        cout<<"'a' is vowel";
        break;
        case 'e':
        cout<<"'e' is vowel";
        break;
        case 'i':
        cout<<"'i' is vowel";
        break;
        case 'o':
        cout<<"'o' is vowel";
        break;
        case 'u':
        cout<<"'u' is vowel";
        break;
        case 'A':
        cout<<"'A' is vowel";
        break;
        case 'E':
        cout<<"'E' is vowel";
        break;
        case 'I':
        cout<<"'I' is vowel";
        break;
        case 'O':
        cout<<"'O' is vowel";
        break;
        case 'U':
        cout<<"'U' is vowel";
        break;
        default:
        cout<<ch<<" is consonant";
    }
    return 0;}
