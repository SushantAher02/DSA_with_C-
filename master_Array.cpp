// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[6]={10,20,7,11,8,4};
//     int x = 8;
//     int index = -1;
//     for(int i=0; i<=6; i++)
//     {
//         if(arr[i] == x)
//           return 1;
//     }
//     return -1;
// }



// //Reverse Array
#include<iostream>
using namespace std;
int main()
{

    int arr[5]={1,2,3,4,5};
    int start = 0,end = 4;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    };
    for(int i = 0; i<5; i++)
    cout<<arr[i]<<" ";
    return 0;

}

