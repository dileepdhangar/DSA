
#include <iostream>
using namespace std;

int main()
{
  int row,col ;
    int n;
    cout << "emtr the velue of n " << endl ;
    cin>> n ;

for (row=1; row<=n; row=row+1)
{
    for(col=1;col<=n-row+1; col=col+1)
    {
        cout<< n-row+1 ;
        if(col != n-row+1)
        cout<< "*" ;   
    }
    cout<< endl ;
}
return 0;
}

