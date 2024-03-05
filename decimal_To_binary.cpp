#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter number: ";
    cin>>num;
    int rem, ans = 0, mul=1;

    while(num>0)
    {
        //rem
        rem=num%2;
        //quoteient
        num/=2;
        //ans
        ans=rem*mul+ans;
        //mul
        mul*=10;
    }
    cout<<ans<<endl;
}