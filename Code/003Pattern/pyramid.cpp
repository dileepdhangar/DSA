
#include <iostream>
using namespace std;

int main()
{
// row count = n
int n ;
cin >> n ;
int row,col ;
// pyramid 
// for (row =0; row<n; row = row+1){
//     for(col=0; col=row+1; col=col+1){
//         cout<<"* ";
//     } cout<< endl ;
// }
// inverse pyramid 
for (row =0; row<n; row=row+1) {
    for(col = 0; col = n-row; col = col+1) {
        cout<<"* ";
       } cout<< endl ;
}

return 0;

}
