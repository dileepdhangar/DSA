
#include <iostream>
using namespace std;

int main()
{
int row,col;
int n;
cout<<" enter the value of n "<< endl ;
cin>> n;
for(row=1;row<=n;row=row+1)
{
    for(col=1;col<=n-row+1;col=col+1)
    {
      cout<<"*";
    }
    for(col=1;col<=2*row-1;col=col+1)
    {
        cout<<" ";
    }
    for(col=1;col<=n-row+1;col=col+1)
    {
        cout<<"*";
    }
    cout<< endl;
}

// for(row=1; row<=n; row=row+1)
// {
//     for(col=1; col<=row; col=col+1)
//     {
//         cout<<"*" ;
//     }
//     for(col=1; col<=2*n-(2*row-1); col=col+1)
//     {
//         cout<<" ";
//     }
//     for(col=1; col<=row; col=col+1)
//     {
//         cout <<"*" ;
//     }
//     cout << endl ;
return 0;
}
//}

// #include <iostream>
// using namespace std;

// int main()
// {
// int row, col ;
// int n ;
// cout<< "enter the valof n" ;
// cin>> n;
// for(row=1; row<=n; row=row+1)
// {
//     for(col=1; col<=row; col=col+1)
//     {
//         cout<<"*" ;
//     }
//     for(col=1; col<=2*n-(2*row-1); col=col+1)
//     {
//         cout<<" ";
//     }
//     for(col=1; col<=row; col=col+1)
//     {
//         cout <<"*" ;
//     }
//     cout << endl ;
// }
// return 0;
// }

