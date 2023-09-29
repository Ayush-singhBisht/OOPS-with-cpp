#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    // ofstream write("count_word.txt");
    // write << "hello world";
    // write.close();

    ifstream read("count_word.txt");
    char str;
    // getline(read, str);
    int count=0;
    while (!read.eof())
    {
        read.get(str);
        // read>>str;            for words
        // read,getline(str);    for words

        count++;
    }
    cout<<count;
    return 0;
}
