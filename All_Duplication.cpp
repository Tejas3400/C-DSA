#include<iostream>
using namespace std;

void find(int arr[],int n)
{
    int ans = 0;
    for (int i=0 ; i<n ; i++)
    {
        ans = arr[i] ^ ans;
        if(ans==0)
        {
            cout<<arr[i]<<" ";
        }
    }
}
void print(int arr[], int n)
{
    for (int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[7]={1,2,2,3,3,7,8};
    //print(arr,7);
    find(arr,7);

    return 0;
}