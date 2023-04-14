
// #include <iostream>
// using namespace std;

// int main()
// // full pyramid program
// {

//     int n, row, col;
//     cout << "Enter the value of n" << endl;

//     cin >> n;
//     for (row = 0; row < n; row = row + 1)
//     {
//         // foe spaces
//         for (col = 0; col < n - row - 1; col = col + 1)
//         {
//             cout << " ";
//         }
//         for (col = 0; col < row + 1; col = col + 1)
//         {
//             cout << "* ";
//         }
//         for (col = 0; col < row; col = col + 1)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// int row,col;
// int n;
// cin >> n;
// {
//     for(row=0; row<n; row=row+1){
//         for(col=0; col<n-row-1; col=col+1){
//             cout<<"  ";
//         }for(col=0; col<row+1; col=col+1){
//             cout<<"* ";
//         }cout<< endl;

//     }

// return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int row, col;
//     int n;
//     cout << "n ki value daal BSDK" << endl ;
//     cin >> n;
//     for (row = 0; row < n; row = row + 1)
//     { // for spaces
//         for (col = 0; col < n - row - 1; col = col + 1)
//         {
//             cout << " " ;
//         }
//         // for star

//         for (col = 0; col < row + 1; col = col + 1)
//         {
//             cout << "* " ;

//         }
//         cout << endl;
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
//     cin >> n;
//     for (row = 1; row < n; row = row + 1)
//     { // for spaces
//         for (col = 1; col <= n - row; col = col + 1)
//         {
//             cout << " " ;
//         }
//         // for star

//         for (col = 1; col <= row; col = col + 1)
//         {
//             cout << "*" ;

//         }
//         //for star 
//          for (col = 1; col < row; col = col + 1)
//         {
//             cout << "*" ;

//         }
//         cout << endl;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    int row, col;
    int n;
    
    cout << "n ki value daal BSDK" << endl ;
    cin >> n;
    for (row = 1; row < n; row = row + 1)
    { // for spaces
        for (col = 1; col <= n - row; col = col + 1)
        {
            cout << "  " ;
        }
        // for middle no

        for (col = 1; col <= row; col = col + 1)
          {//    int m=1;
        //     cout << m  ;
        //     m++ ;
              cout << col <<" ";
        }
        //for right no
         for (col = 1; col < row; col = col + 1)
          {//    int p=1;
        //     cout << p;
        //     p++ ;
            cout << col<< " " ;
        }
        cout << endl ;
    }
    return 0;
}
