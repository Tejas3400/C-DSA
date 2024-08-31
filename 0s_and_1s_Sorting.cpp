#include<iostream>
using namespace std;


int sort(int arr[] , int size)
{
    int start=0;
    int end=size-1;

    while(start <= end  )
    {
        if(arr[start]==0)
        {
            start++;
        }
        else if(arr[end]==1)
        {
            end--;
        }
        else if(arr[start]==1 && arr[end]==0)
        {
            swap(start,end);
        }
    }

}

int main()
{
    int arr[6]={1,0,1,0,0,1};
    cout<<sort(arr , 6);


    return 0;
}