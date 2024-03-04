#include<iostream>
using namespace std;
int main()
{
    // int i;
    // for( i=100; i<=200 ; i++)
    // {
    //     cout<<i<<" ";
    // }



    // number from a to z 
    // char name;
    // for( name='a'; name<='z';name = name+1)

    // {
    //     cout<<name<<" ";
    // }


    // reverse number 
    // for(int i =10; i>=1; i--)
//     {
//         cout<<i<<" ";
//     }

    //  for(int i =1; i<=100; i=i+3){
    //     cout<<i<<" ";
    //  }

    // int n ;
    // cout<<"Enter the number: ";
    // cin>>n;
    // for (int i=1; i<n; i++){
    //     cout<<i<<" ";
    // }

    

    // print any table 
    // int n,i;
    // cout<<"Enter the number: ";
    // cin>>n;
    // for( i=1; i<=10; i=i+1)
    // {
    //     cout<<n<<"* "<<i<<" = " <<n*i<<endl;
    // }

    // interger with power
    // int n,pow,i,num;
    // cout<<"Enter the number: ";
    // cin>>n;
    // cout<<"Enter the power: ";
    // cin>>pow;
    // num=n;
    // for(i=1; i<pow; i=i+1)
    // {
    //     num = num*n;
    //     cout<<num;
    // }



    // sum of n natural number
    // int i,n,sum;
    // cout<<"Enter the number: ";
    // cin>>n;
    // sum=0;
    // // for(i=1; i<=n; i=i+1)
    // // {
    // //     sum = sum+i;
        
    // // }
    // cout<<(n*(n+1))/2;


// factorial
//    int  i,fact,n;
//    cout<<"Enter the number: ";
//    cin>>n;
//    fact=1;
//    for(i=1; i<=n; i++)
//    {
//     fact=fact*i;
//    }
//    cout<<fact;



// prime or not 
int n,i;
cout<<"enter the number: ";
cin>>n;
if(n<2)
{
cout<<"Not prime";
return 0;
}
else
{
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"not prime";
            return 0;
        }
    }
    cout<<"Prime";
    return 0;
}
return 0;
 }