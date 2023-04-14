
#include <iostream>
using namespace std;
int findFactorial(int n)
{ int factorial = 1 ;
  for(int i=1; i<=n; i=i+1)
  {
    factorial = factorial *i ;
  }
  return factorial ;
}

int main()
{
int n;
cout<< "enter the the value of n" << endl ;
cin>> n;
int factorial = findFactorial(n) ;
cout<< "factorial is : "<< factorial << endl ;
//cout<<"factorial is"<< ans<< endl ;
return 0;
}
