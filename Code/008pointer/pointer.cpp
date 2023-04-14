
#include <iostream>
using namespace std;

int factorial(int n){
    cout << " fun called for tha value of n :" << n << endl ;
    int ans = n* factorial(n-1) ;
    return ans ;
}

int main()
{
int n ;
cout << " enter the val : " << endl ;
cin >> n ;


int ans = factorial(n) ;
cout << " ans is " << ans ;
return 0; 
}
