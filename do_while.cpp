#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number: ";
    cin>>n;
    
    int i =1;   //intilaize
    do{
        cout<<i<<endl;
        i++;              //update
    }
    while(i<=n);          //break
}