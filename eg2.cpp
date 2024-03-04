#include<iostream>
using namespace std;
int main()
{
    // int row, col;
    // int n;
    // cout<<"Enter the input number: ";
    // cin>>n;
    // for(row=1; row<=n; row=row+1)
    // {
    //     // space print
    //     for(col=1; col<=n-row; col=col+1)
    //     {cout<<"  ";}
    //     for(col=1; col<=2*row-1; col=col+1)
    //     {cout<<"* ";}
    //     cout<<endl;
    // }


    // int row, col;
    // int n;
    // cout<<"Enter the input number: ";
    // cin>>n;
    // for(row=1; row<=n; row=row+1)
    // {
    //     // space print
    //     for(col=1; col<=n-row; col=col+1)
    //     {cout<<"  ";}
    //     // 1 to row print 
    //     for(col=1; col<=row; col=col+1)
    //     {cout<<col<<" ";}
    //     // row-1 to 1
    //     for(col=row-1; col>=1; col=col-1)
    //     {cout<<col<<" ";}
    //     cout<<endl;
    // }



    // int row, col;
    // int n;
    // cout<<"Enter input number: ";
    // cin>>n;
    // for(row=n; row>=1; row=row-1)
    // {
    //     // space print
    //     for(col=1; col<=n-row; col=col+1)
    //     {cout<<"  ";}
    //     for(col=1; col<=2*row-1; col=col+1)
    //     {cout<<"* ";}
    //     cout<<endl;
    // }



   int row, col, n;
   cout<<" Enter the input: ";
   cin>>n;

   for(row=n; row>=1; row=row-1 )
   {
    // print *
    for(col=1; col<=row; col=col+1)
    cout<<"* ";
    // print space
    for(col=1; col<=2*n-2*row; col=col+1)
    cout<<"  ";

    // print *
    for(col=1; col<=row; col=col+1)
    cout<<"* ";

    cout<<endl;

   }

   for(row=1; row<=n; row=row+1 )
   {
    // print *
    for(col=1; col<=row; col=col+1)
    cout<<"* ";
    // print space
    for(col=1; col<=2*n-2*row; col=col+1)
    cout<<"  ";

    // print *
    for(col=1; col<=row; col=col+1)
    cout<<"* ";

    cout<<endl;


    
   }

   
   










}