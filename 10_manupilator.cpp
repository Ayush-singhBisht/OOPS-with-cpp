#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a[100], n, i, sum = 0;
    float avg;
    cout << "Enter total number of elements" << endl;
    cin >> n;
    cout << "enter the array" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    printf("the array is\n");
    for (i = 0; i < n; i++)
    {
        cout << setw(4) << a[i];
    }
    avg = (float)sum / n;
    cout << endl<< "The average of the elements is: " << endl;
    cout << setprecision(2) << avg;
    return 0;
}
