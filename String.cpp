#include<iostream>
using namespace std;

int main()
{
    // char arr[]={'a','p','p','l','e'};
    // for(int i=0; i<5; i++)
    // cout<<arr[i];

    // char arr[20];
    // cout<<"enter array element: ";
    // cin>>arr;
    // //arr[2]='\0';
    // cout<<arr;

    ////creating String
    // string s = "rohit";
    // cout<<s;
    ////from user 
    // string s;
    // cout<<"enter the string char: ";
    // // cin>>s;
    // getline(cin,s);
    // cout<<s<<endl;
    // //cout<<s.size();



    // ////adding two string
    // string s1 = "rohit", s2 ="mohit";
    // // string s3= s1+s2;
    // // string s3 = s1.append(s2);
    // s1.push_back('p');
    // s1.pop_back();
    // // cout<<s3;
    // cout<<s1;


    // ////escape charater(\)
    // string s = "rohit negi is a \"good\" boy";
    // cout<<s;


    //reverse string 
    string s="rohit";
    int start = 0 , end=s.size()-1;
    while(start<end)
    {
        swap(s[start],s[end]);
        start++,end--;

    }
    cout<<s<<endl;
    //size of string 
    int size = 0;
    while(s[size]!='\0')
    {
        size++;

    }
    cout<<size<<" ";

    ////pallindrome
    string s2 = "naman";
    start =0, end = s2.size()-1;
    while(start<end)
    {
        if(s2[start]!=s2[end])
        {cout<<"not a pallindrome";
        return 0;
        }
        start++,end--;

    }
    cout<<"it is a pallindrome";




}