#include <iostream>
using namespace std;

int getmax(int num[] , int n)
{
    int max = INT16_MIN;
    for(int i=0 ; i<n ; i++)
    {
        if(num[i]>max)
        max = num[i] ;
        
    }
    //cout<<"Maximum Number is "<<max<<endl;
    return max ;

}

int getmin(int num[], int n)
{
    int min = INT16_MAX;
    for(int i=0 ; i<n ; i++)
    {
        if(num[i]<min)
        min=num[i];
    }
    return min;
}

int main (){

int size ;
cin>>size;

int array[100];

for(int i=0; i<size; i++)
{
    cin>>array[i];
}
cout<<"Maximum Number is "<<getmax( array , size)<<endl;;




    

  return 0;
}
