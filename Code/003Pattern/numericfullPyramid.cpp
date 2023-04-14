
#include <iostream>
using namespace std;

int main()
{
int row, col;
int n;
cout << " enter the val of n "<< endl ;
cin >> n ;
for(row=1; row<=n; row = row+1)
{
    for(col=1;col<= n-row; col=col+1)
    {
        cout<<"  " ;
    }   
     int start = row ;
    for ( col=1; col<= row ; col=col+1)
    { 
        
       cout<< start << " ";
       start = start+1 ;
    }   
     int st = 2*row-2;
    for(col=1; col<= row - 1; col=col+1)
    {
        cout<< st << " ";
        st = st-1;
    }
    cout<< endl ;
}

return 0;
}