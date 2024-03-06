// #include<iostream>
// using namespace std;

// int Sum(int m,int n)           //function declare
// {
//     int ans = m+n;            //function define 
//     return ans;
// }
// int Mul(int m,int n)           //function declare
// {
//     int ans = m*n;            //function define 
//     return ans;
// }
// void fun()
// {
//     cout<<"hello coder Army";
// }
 



// int main()
// {
//     int a, b;
//     cout<<"enter a: ";
//     cin>>a;
//     cout<<"enter b: ";
//     cin>>b;

//     //function call
//     cout<<"the ans is: "<<Sum(a,b)<<endl;
//     cout<<"the mul is: "<<Mul(a,b)<<endl;

//     fun();

// }




//prime number 
#include<iostream>
using namespace std;

bool Prime(int n)
{
    if(n<2)
    return 0;
    
    for(int i=1; i<n; i++)
    {
        if(n%2==0)
        return 0;
    }
    return 1;

}

int Fact(int n=3)    //default parameter 
{
   int ans =1; 
  
   for( int i=1; i<=n; i++)
   {
    ans = ans*i;
   }
   return ans;
}

int main()
{
    int a, b;
    cout<<"enter the number: ";
    cin>>a>>b;



    // A   is prime or not 
    cout<<Prime(a)<<endl;
    // A   ka factorial
    cout<<Fact(a)<<endl; 
    // B   ka prime
    cout<<Prime(b)<<endl; 
    // B   ka factorial
     cout<<Fact(b)<<endl; 
    // B-A ka prime 
    cout<<Prime(b-a)<<endl;
    // B-A ka factorial 
     cout<<Fact(b-a)<<endl; 


}