#include<iostream>
using namespace std;

int leftsearch(int arr[], int size, int key)
{
    int s=0;
    int e=size-1;
    int mid = s + ((e-s)/2);

    int ans=-1;

    while(s <= e)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            e=mid-1;
        }
        if(key>arr[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+((e-s)/2);
        
    }
    return ans;
}

int rightsearch(int arr[], int size, int key)
{
    int s=0;
    int e=size-1;
    int mid = s + ((e-s)/2);

    int ans=-1;

    while(s <= e)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            s=mid+1;
        }
        if(key>arr[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+((e-s)/2);
    }
    return ans;
}





int main ()
{

    int arr[8]={0,0,1,1,2,2,2,7};
    cout<<"First occurence :- "<<leftsearch(arr,8,2)<<endl;
    cout<<"Last occurence :- "<<rightsearch(arr,8,2)<<endl;
    return 0;
}

