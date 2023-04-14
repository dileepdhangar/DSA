
// #include <iostream>
// using namespace std;

// void printNum (int a)
// {
// cout << a << endl;
// a++ ;
// cout << a << endl ;
// } 


// int main()
// {
// int a = 5 ;
// printNum(a) ;
// cout << a<< endl;
// a++ ;
// cout << a<< endl ;
// return 0;
// }

// #include <iostream>
// using namespace std;

// int add (int a, int b ) // funtion
// {
//     int result = a+b ;
//     return result ;
// }


// int main()
// {
// int a ;
// cin>> a;
// int b;
// cin>> b;

// int sum = add (a,b) ; // call by value ;
// cout<< sum<< endl ;

// return 0;
// }

#include <iostream>
using namespace std;

int add (int x, int y)
{
    int result = x+y ;
    return result ;
}
int main()
{

int a;
cout<< " enter the value of a " << endl ;
cin>> a;
int b;
cout<< " enter the value of b "<< endl ;
cin>> b;

int sum = add (a,b) ;
cout << sum << endl ;

return 0;
}

