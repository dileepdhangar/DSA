
// #include <iostream>
// using namespace std;

// int main()
// {  int row,col;
// int n;
// cout<< " enter the value of n" << endl ;
// cin>>n ;
// for (row=1 ; row<=n; row = row+1)
// {
//    //if(row != n)
//    //{
//     for(col=1; col<=n-row; col= col+1)
//     {
//     cout<<"  ";
//     }
//     for(col=1; col<=2*row-1; col=col+1)
//     {
//      if(col=1)
//      {
//         cout<< col;
//      }
//      else if(col=2*row-1)
//      {
//         cout<< row ;
//      }
//      else
//      {
//         cout<<" ";
//      }
//     }

//   // }
// //    else
// //    {
// //     for(col=1; col<=2*row-1; col=col+1)
// //     cout<< col<< " ";
// //    }
//    cout<< endl ;
// }
// return 0 ;
// }

#include <iostream>
using namespace std;

int main()
{
int row, col ;
int n ;
cout<< " enter the value of n";
cin>> n ;
for(row=1; row <=n; row =row+1  )
{
     for(col=1; col<=n-row; col= col+1)
    {
    cout<<" ";
     }
       int start = 1 ;
for(col=1; col<=2*row-1; col=col+1)
if(row==1 || row == n)
{
    if(col%2 == 0 )
    {
        cout<<"*";
    }
   
    else 
   
    {  
      cout<< start ;
        start = start+1 ;
    }
}
else
{  
    if(col==1 )
    {
    cout << "1" ;
    }
    else if (col==2*row-1)
    {
        cout<< row ;
    }
    else
    {
        cout<<" " ;
    }
} 
 cout<< endl ;
} 
return 0;

}
