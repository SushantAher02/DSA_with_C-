#include<iostream>
using namespace std ;
int main(){
    // int i;
    // for(i=1; i<=5; i++){
    //     cout<<"hello world\n";
    // };

    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;
    // for(int i=1; i<=n ; i++)
    // {
    //     cout<<i <<" Square is : "<< i * i<<endl;
    // }

    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i =2 ; i<=n ; i=i+2)
    {
        if (i%2==0){
            cout<<i<<" ";
        }
    }
};