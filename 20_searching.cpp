#include <iostream>
using namespace std;

int main()
{
   int n, val;
   cout << "enter the size of array: ";
   cin >> n;
   int a[n], i;
   cout << "\nenter the elements of the array: ";
   for (i = 0; i < n; i++)
   {
      cin >> a[i];
   }
   cout << "the array is: " << endl;
   for (i = 0; i < n; i++)
   {
      cout << a[i] << " ";
   }
   cout << endl<< "enter the value to be search: " << endl;
   cin >> val;
   for (i = 0; i < n; i++)
   {
      if (a[i] == val)
      {
         cout << "element found at index " << i << endl;
      }
   }
   return 0;
}
