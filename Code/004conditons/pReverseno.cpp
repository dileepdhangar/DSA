
// #include <iostream>
// using namespace std;

// int main()
// {
// int n;
// cout<< " enter the vakue of n" << endl ;
// cin>> n;
// for(int i= n; i>= 1; i=i-1)
// {
// cout << n << endl  ;
// n=n-1 ;
// }

// return 0;
// }
#include <iostream>
using namespace std;
int findFactorial(int n)
{  int factorial =1 ;
     for(int i= n; i>= 1; i=i-1)
  {

   factorial = factorial * n ;
    n=n-1 ;

  }
  return factorial ;
}

int main()
{
int n;
cout<< "enter the the value of n" << endl ;
cin>> n;
int fact = findFactorial(n);
cout<< "factorial is : "<< fact << endl ;
//cout<<"factorial is : "<< ans<< endl ;
return 0;
}
