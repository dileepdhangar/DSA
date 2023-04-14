
// #include <iostream>
// using namespace std;

// int main()
// {
// int row,col ;
// int n;
// cout<< "enter the value of n" << endl ;
// cin >> n ;
// for( row=1; row<=n; row++)
// {  //printspsces
//     for(col=1; col<=row-1; col++)
//     {
//         cout<<" ";
//      }
//      //print*
//      for(col=1; col < n-row+1; col++)
     
//     {
//         cout<<"* " ;
//      }
//      cout<< endl ;
// }
// return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
// int row, col,n;
// cout << "enter value of n"<< endl; 
// cin >> n;
// for(row=1; row<=n; row++)
// {   //sapce print 
//     for(col=1; col<row; col++)
//     {
//         cout<<" ";
//     }
//     //star print 
//     for(col=1; col<n-row+1; col++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
// }

// return 0;
// }
// #include <iostream>
// using namespace std;

// int main()
// {
// int row,col ;
// int n;
// cout<< "enter the value of n" << endl ;
// cin >> n ;
// for( row=1; row<=n; row++)
// {  //printspsces
//     for(col=1; col<=row-1; col++)
//     {
//         cout<<" ";
//      }
//      //print*
//      for(col=1; col < n-row+1; col++)
     
//     {
//         cout<<"* " ;
//      }
//      cout<< endl ;
// }
// return 0;
// }
#include <iostream>
using namespace std;

int main()
{
int row,col ;
int n;
cout<< "enter the value of n" << endl ;
cin >> n ;
for( row=1; row<=n; row++)
{  //printspsces
    for(col=1; col<=row-1; col++)
    {
        cout<<" ";
     }
     //print*
     for(col=1; col < n-row+1; col++)
     
    {
        cout<<"* " ;
     }
     cout<< endl ;
}
return 0;
}