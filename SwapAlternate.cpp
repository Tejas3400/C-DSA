#include<iostream>
using namespace std;

int swapalter(int arr[] , int size)
{
    int start = 0 ,  end = 1;
    while(start < size-1 || end < size-1)
    {
        swap(arr[start],arr[end]);
        start=start+2;
        end=end+2;

    }
    for(int i=0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int odd[5]={1,2,3,4,5};
    int even[6]={1,2,3,4,5,6};
    swapalter(odd , 5);
    swapalter(even , 6);
}