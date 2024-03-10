#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key)
{
    //start,end,mid;
    int start=0,end=n-1,mid, first = -1, last = -1;;

    //find first
    while(start<=end)
    {
        //mid ko find karo
        mid = start +(end-start)/2;
       
       if(arr[mid]==key)
         {first = mid;
         end = mid -1;}
       else if(n[mid]<key)
       start = mid+1;
      else
       end = mid-1;
    }
    // find last
    start = 0, end = n-1;
    while(start<=end)
    {
        //mid ko find karo
        mid = start +(end-start)/2;
       
       if(arr[mid]==key)
         {last = mid;
         start = mid +1;}
       else if(n[mid]<key)
       start = mid+1;
      else
       end = mid-1;
    }

}

int main()
{
     int arr[1000];
   int n;
   cout<<"enter the size of array: ";
   cin>>n;

   cout<<"enter the element of array: ";
   for(int i=0; i<n; i++)
   cin>>arr[i];

   int key;
   cout<<"enter the find element: ";
   cin>>key;

   cout<<BinarySearch(arr,n,key)<<endl;
   return 0;


}