#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printcol(int arr[][4], int row, int col)
{

   //col wise
   for(int j=0; j<col; j++ )
   for(int i=0; i<row; i++)
   
   cout<<arr[i][j]<<" ";
  

}


// void printrowmax(int arr[][4], int row, int col)
// {
//     int index = -1, sum = INT_MIN;
//     for(int i=0; i<row; i++)
//     {
//         int total = 0;
//         for(int j=0; j<col; j++)
//         total = arr[i][j];
        
//         if(total>sum)
//         {
//             sum = total;
//             index = i;
//         }
//     }
//     cout<<index<<" ";
// }


void printsumdig(int matrix[][3], int row, int col)
{
  int first = 0;
  int second = 0;

  //first diagonal sum
  int i =0;
  while(i<row)
  {
    first+=matrix[i][i];
    i++;
  }

  //second diagonal sum
  i = 0;
  int j = col-1;
  while(j>=0)
  {
    second+=matrix[i][j];
    i++,j--;

  }
  cout<<first<<" "<<second<<" ";
}

int main()
{
    //create 2d array
   int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
   int arr2[3][4]={0,1,3,4,6,7,10,11,41,18,9,11};
   int ans[3][4];

   //print all vlues in Array row wise 
//    for(int row=0; row<3; row++)
//    {
//     for(int col=0;col<4; col++)
//     {cout<<arr[row][col]<<" ";
//      }
//    } 


   //Print all the value in arry cil wise, function call

  // printcol(arr,3,4);

   //Find an element in our array
//    int x = 17;

//    for(int  row=0; row<3; row++)
//    for( int col=0; col<4; col++)
//    {
//     if(arr[row][col]==x)
//     {
//         cout<<"Yes ";
//         return 0;
//     }
//    }
//    cout<<"No ";


    // //Add 2 matrix
    // for(int row=0; row<3; row++)
    // for(int col=0; col<4; col++)
    // {
    //     ans[row][col]= arr1[row][col] + arr2[row][col];

    // }

    // for(int row=0; row<3; row++)
    // for(int col=0; col<4; col++)
    // cout<<ans[row][col]<<" ";



    // //Print row index with maximum sum
    // printrowmax(arr2,3,4);

    //Print digonal sum
    int matrix[3][3]= {1,2,3,4,5,6,7,8,9};
    printsumdig(matrix,3,3);



}