#include<iostream>
using namespace std;

void duplicate(int arr[],int n)
{
            int ans = 0;
    for(int i=0 ; i<n ; i++)
    {
        ans = ans^arr[i];

    }
    for(int i=1 ; i<n ; i++)
    {
        ans = ans^i;
    }
    cout<<ans<<endl;
}

int main()
{
    int arr[6]={1,2,3,4,5,4};
    duplicate(arr,6);
    return 0;
}