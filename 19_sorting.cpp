#include <iostream>
using namespace std;

int insertion_sort(int arr[],int n){
    
    for(int i=0;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

}

int main(){
    int n,i;
    cout<<"Enter size of a arrray : ";
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter array elements : ";
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for ( i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    insertion_sort(arr,n);
    cout<<endl<<"Array after sorting\n";
    for ( i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t";
    }

return 0;
}