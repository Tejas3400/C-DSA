#include<iostream>
using namespace std;

int reverse( int arr[] , int size)
{
    int start=0 , end = size-1;// Important 
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"Reversed Array :- ";
    for(int i=0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int even[6]={1,2,3,4,5,6};
    int odd[7]={1,2,3,4,5,6,7};

    reverse(even,6);
    reverse(odd,7);

    return 0;
}