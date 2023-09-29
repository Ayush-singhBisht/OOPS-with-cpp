#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string s1;
    cout<<"enter the string: "<<endl;
    getline(cin, s);
    
    s1 = s;
    reverse(s1.begin(),s1.end());
    cout<<"reverse of a string is: "<<endl;
    cout<<s1;
    if(s == s1)
    {
    cout<<endl<<"the string is palindrome: "<<endl;
    }
    else
    {
    cout<<endl<<"the string is not palindrome: "<<endl;
    }
    return 0;
}
