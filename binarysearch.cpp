#include<iostream>
using namespace std;

int binarysearch(int arr[] , int size, int key)
{
    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2 ; 

    while(start <= end)
    {
        
        if (arr[mid]==key)
        {
            return mid;
        }
        else if(key > arr[mid])
        {
             start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end-start)/2 ; 
    }

    return -1;
}


int main ()
{
    int even[6]={2,4,8,12,16,20};
    int odd[7]={2,4,6,8,9,12,13};

    int evenindex = binarysearch(even, 6, 12);

    int oddindex = binarysearch(odd, 7, 13);

    cout<<"Index Of 12 is "<<evenindex<<endl;
    cout<<"Index Of 13 is "<<oddindex<<endl;


    return 0;
}
