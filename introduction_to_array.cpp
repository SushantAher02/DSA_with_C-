#include<iostream>
using namespace std;
int main()
{
    // int arr[5] ;  //Array declare

    // int arr[5] = {1,2,3,4,5};
    // for( int i=0; i<5; i++)
    // cout<<arr[i]<<" ";

    // int arr[] = {1,2,3,4,5,6};
    // for( int i=0; i<6; i++)
    // cout<<arr[i]<<" ";

    // int arr[] = {1,2,3};
    // for( int i=0; i<6; i++)
    // cout<<arr[i]<<" ";

    //  int arr[6] = {0};
    // for( int i=0; i<6; i++)
    // cout<<arr[i]<<" ";

    // int arr[6];
    // for(int i=0; i<6; i++)
    // cin>>arr[i];

    // for( int i=0; i<6; i++)
    // cout<<arr[i]<<" ";

    // int size;
    // cin>>size;
    // int arr[6];
    // for(int i=0; i<size; i++)
    // cin>>arr[i];

    // for( int i=0; i<size; i++)
    // cout<<arr[i]<<" ";



    // //size of Array
    // int arr[5]={1,2,3,4,5};
    // cout<<sizeof(arr)/sizeof(arr[0])<<" ";


    //min value from Array
    int arr[5]={1,2,3,4,5};
    int ans = INT_MAX;
    for(int i=0; i<5; i++)
    {
        if(arr[i]<ans)
        ans  = arr[i];

    }

    return 0 ;

}