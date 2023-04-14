
// #include <iostream>
// using namespace std;

// int main()
// {  int n;
// int row,col ;
// for(row=0; row<n; row= row+1){
//     for(col = 0; col<row+1; col=col+1){
//         cout << row+1;
//     } cout<< endl;
// }
// return 0;
// }

#include <iostream>
using namespace std;

int main()
{
int n;
    cin >> n;
    int row,col ;
    for( row=0; row<n; row=row+1) {
        for( col=0; col<n-row; col = col+1) {
            cout << col+1 ;
        }
        cout << endl;
    }

return 0;
}



