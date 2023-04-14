// #include <iostream>
// using namespace std;

// int main()
// {
//     int row, col;
//     int n;
    
//     cout << "n ki value daal BSDK" << endl ;
//     cin >> n;
//     for (row = 1; row < n; row = row + 1)
//     { // for spaces
//         for (col = 1; col <= n - row; col = col + 1)
//         {
//             cout << "  " ;
//         }
//         // for middle no

//         for (col = 1; col <= row; col = col + 1)
//           {//    int m=1;
//         //     cout << m  ;
//         //     m++ ;
//               cout << col <<" ";
//         }
//         //for right no
//          for (col = 1; col < row; col = col + 1)
//           {//    int p=1;
//         //     cout << p;
//         //     p++ ;
//             cout << col<< " " ;
//         }
//         cout << endl ;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int row, col;
//     int n;
//     cout << "n ki value daal BSDK" << endl ;
//     cin >> n ;
//     for (row = 1; row <= n; row = row + 1)
//     { // for spaces
//         for (col = 1; col < n - row; col = col + 1)
//         {
//             cout << " " ;
//         }
//         // for star

//         for (col = 1; col <= row; col = col + 1)
//         {
//             cout << "* " ;

//         }
//         // //for star 
//         //  for (col = 1; col < row; col = col + 1)
//         // {
//         //     cout << "* " ;

//         // }
//         cout << endl;
//     }
         
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
// code for diamond 
#include <iostream>
using namespace std;

int main()
{
    int row, col ;
    int n;
    cout << "put value of n" << endl ;
    cin >> n ;
for (row=1; row<=n; row=row+1)
{    // spaces print 
    for(col=1; col<=n-row; col=col+1)
    {
        cout <<" ";
    } // print star
    for(col=1;col<=row; col=col+1 )
    {
        cout <<"* ";
    } cout<< endl;
}

// return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
// int row, col ;
//     int n;
//      cout << "put value of n" << endl ;
//      cin >> n ;
   for (row=1; row<=n; row=row+1)
   {    // spaces print     
      for(col=1;col<=row-1; col=col+1)
      { 
        cout<<" ";
      }
      for(col=1;col <= n-row+1;col=col+1)
      {
        cout<<"* ";
      } cout<< endl;
        }
return 0;
}

