// #include<iostream>
// using namespace std;
// int main()
// {

//     int arr[6] = {10,8,2,3,1,4};

//     for(int i=0;i<5;i++)
//     {
//         int index=i;
//         for(int j=i+1; j<6; j++)
//         {
//             if(arr[j]<arr[index])
//             index=j;
//         }
//         swap(arr[i],arr[index]);
//     }
//     for(int i=0; i<6;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     }    


#include<iostream>
using namespace std;
int main()
{

    int arr[1000];
    int n;
    cout<<"enter the size of array: ";
    cin>>n;         //size of array
    cout<<"enter the element in array: ";
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        int index=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[index])
            index=j;
        }
        swap(arr[i],arr[index]);
    }
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    }    