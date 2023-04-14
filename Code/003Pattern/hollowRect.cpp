
#include <iostream>
using namespace std;

int main()

    // {   int row, col;
    //   for (row=0; row<3; row=row+1){
    //     for(col=0; col<5; col=col+1){
    //         if(row=0 || row=2){
    //             cout<< "*" <<endl ;
    //         }else{if(row=1&&col=1 || row=1&&col=4 ){
    //             cout<< "*" ;
    //         }else {cout<< " " ;}

    //         }

    //         }

    //     }

    // return 0;
//     int row, col;
//     for (row = 0; row < 5; row = row + 1)
//     {
//         for (col = 0; col < 4; col = col + 1)
//         {
//             if (row = 0 || row = 4)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 if (col = 0 || col = 3)
//                 {
//                     cout << "*";
//                 }
//                 else
//                 {
//                     cout << " ";
//                 }
//             }
//         }
//         cout << endl;
//     }
// }
{   int row , col ,i;
    int rowcount, colcount ;
 cin>> rowcount ;
 cin>> colcount ;
 for (row = 0; row < rowcount; row = row + 1){
    if(row == 0 || row == rowcount-1){
        for(col =0 ; col<colcount; col= col+1) {
                cout<<"* " ; }
            }
            else {
                cout<<"* " ;
                for(i = 0; i<colcount-2; i= i+1){
                    cout<< "  ";
                } cout<<"* ";
            } cout<< endl;
        }
    }
 
