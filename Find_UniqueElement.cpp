#include<iostream>
using namespace std;


void find(int arr[], int n)
{
    int ans = 0;
    for(int i = 0; i<n ; i++)
    {
        ans = arr[i] ^ ans ; 
    }
    cout<<"\n"<<ans<<endl;
}

void printarray(int arr[], int n)
{
    for( int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[11]={6,5,5,2,3,4,4,3,5,6,5};
    printarray(arr,11);
    find(arr,11);


    return 0;
}