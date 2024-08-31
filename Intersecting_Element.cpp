#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int intersection(int arr1[] , int n, int arr2[], int m)
{
    int i=0;
    int j=0;

    while(i<n && j<m)
    {
            if(arr1[i] == arr2[j])
            {
                cout<<arr1[i]<<" ";
                i++;
                j++;
            }
            else if(arr1[i] > arr2[j])
            {
                j++;
            }
            else(arr1[i] < arr2[j]);
            {
                i++;
            }
        }
    
}

int main()
{
    int arr1[6]={1,2,3,5,6,7};
    int arr2[4]={3,4,7,9};
    intersection(arr1,6,arr2,4);
    return 0;
}