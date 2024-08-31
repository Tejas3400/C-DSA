#include<iostream>
using namespace std;

int search(int arr[] , int size)
{
    int key;
    cout<<"Enter the Key ";
    cin>>key;
    for(int i=0 ; i<size ; i++)
    {
        if(arr[i]==key)
        {
            cout<<"Key Found ";
            return 0;
        }
        
    }
    cout<<"Key Not Found ";
}

int main()

{
    int arr[10]={12,13,23,34,56,-2,4,6,8,0};
    search(arr,10);

    return 0;
}