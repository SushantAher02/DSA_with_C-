// #include<iostream>
// using namespace std;
// char convert( char name)
// {
//     char ans = name-'a'+'A';
//     return ans;
// }
// int main()
// {
//    char name;
//    cin>>name;
//    cout<<convert(name);
// }



// //Armgstrong number 
// #include<iostream>
// using namespace std;

// int countdigit(int n)
// {
//     int count=0;
//     while(n)
//     {
//         count++;
//         n/=10;

//     }
//     return count;
// }

// bool Armgstrong(int num, int digit)
// {
//     int n=num, rem;
//     int ans=0;
//     while(n)
//     {
//         rem = n%10;
//         n/=10;
//         ans =ans+pow(rem,digit);

//     }
//     if(ans==num)
//        return 1;
//     else
//       return 0;

// }

// int main()
// {
//     int num;
//     cin>>num;
//     //digit count
//     int digit = countdigit(num);
//     //Armgstrong
//     cout<<Armgstrong(num,digit)<<endl;
// }


// ////reactangle      in this breadth and height are same 
// #include<iostream>
// using namespace std;

// int main()
// {
//   int a,b,c,d;
//   cout<<"enter the value of a, b, c, d: ";
//   cin>>a>>b>>c>>d;
//   if(a==c && b==d || a==d && b==c || a==b && c==d )
//     cout<<"1";
//   else
//     cout<<"0";

// }

// ////moves of bishop 
// #include<iostream>
// using namespace std;

// int SolutionBishop(int A, int B)
// {
//     int count = 0;
//     count = min(8-A,8-B);
//     count = min(8-A, B-1);
//     count = min(A-1 , B-1);
//     count = min(A-1, 8-B);
    
//     return count;

// }
// int main()
// {
   
//    int a, b;
//    cout<<"enter the 2 number: ";
//    cin>>a>>b;
//    cout<<SolutionBishop(a,b);

// }