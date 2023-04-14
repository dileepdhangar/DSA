
#include <iostream>
using namespace std;

//global variable 
int raja = 420 ;

int main()
{
    // variable declaration
int a ;
// variable initializing

int b = 5 ;
// updation
b=10 ;

if(true)
{  
    //local variable  
    int raja = 421 ;
    int b = 15;
    cout << b << endl ;
    cout<< raja << endl ;
}

cout << raja << endl ;
cout << b ;
return 0;
}
