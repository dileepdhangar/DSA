
// #include <iostream>
// using namespace std;

// int main()
// {int row,col;
// int n;
// cout<< "put value of n" ;
// cin>> n;
// for(row=0; row<n; row=row+1)
// {    for(col=0;col<n-row-1;col=col+1)
//     {
//     cout<<" ";
//     }
//     //forstar print
//     for(col=0; col<2*row+1; col=col+1)
//       {
//      if(col==0 )
//      {
//         cout<<"*";
//      }   
//      else if(col==row*2)
//      {
//         cout<<"*";
//      }
//      else
//      {
//         cout<<" " ;
//      } 
//       }cout<< endl ;
// }
//down arrow v
// #include <iostream>
// using namespace std;

// int main()
// {int row,col;
// int n;
// cout<< "put value of n" ;
// cin>> n;
// for(row=0; row<n; row=row+1)
// {
//     //for spaces
//     for(col=0; col<row; col=col+1)
//     {
//         cout<<" " ;
//     }
//     for(col=0;col<2*n-row-1;col=col+1)
//     {  
//      if(col==0)
//     {
//         cout<<"*";
//     }
//     else if ( col==n*2-(2*row -1) )
//         {
//           cout<<"*"  ;
//         }
//         else
//         {
//            cout<<" " ;
//         }
//     } cout<< endl;
// }

// return 0;
// }



// #include <iostream>
// using namespace std;

// int main()
// {
// int row,col;
// int n;
// cout << "enter the value of n"<< endl  ;
// cin >> n ;

// for(row=1; row<=n; row=row+1)
// {
//   for (col=1; col<= n-row; col=col+1)
//   { 
//     cout<<" ";
//   }
//   for(col=1; col<=2*row-1; col=col+1)
//   {
//     if (col==1 )
//     { 
//         cout<<"*";
//     }
//     else if(col==2*row-1)
//     {
//         cout<<"*" ;
//     }
//     else
//     {
//         cout<<" ";
//     }
//   } cout<< endl;
// }


// return 0;
// }

#include <iostream>
using namespace std;

int main()
{
int row,col;
int n;
cout <<"enter the value of n "<< endl;
cin >> n ;
for(row=1; row<=n; row=row+1)
{
  for (col=1; col<= n-row; col=col+1)
  { 
    cout<<" ";
  }
  for(col=1; col<=2*row-1; col=col+1)
  {
    if (col==1 )
    { 
        cout<<"*";
    }
    else if(col==2*row-1)
    {
        cout<<"*" ;
    }
    else
    {
        cout<<" ";
    }
  } cout<< endl;
}
for(row=1; row<=n; row=row+1)
{//print space 
   for(col=1; col<= row-1; col=col+1) 
   {
     cout<<" ";
   }//for star
   for(col=1; col <= 2*n-1; col=col+1)
   {
    if(col==1)
    {
        cout<<"*" ; 
    }
    else if(col==2*n-(2*row-1) )
    {
        cout<<"*";
    }
    else
    {
        cout<<" ";
    }
   } cout<< endl;
}
return 0;
}
