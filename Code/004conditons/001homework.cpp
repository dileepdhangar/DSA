
// #include <iostream>
// using namespace std;
// float findArea(float r)
// { 
//     return  (3.14*r*r);
// }
// int main()
// {
// float r ;
// //float area ;
// cout<< "enter radius of the circle" << endl ;
// cin>> r ;
// float area = findArea(r) ;
// cout << "area of circle is "<< area << endl ;
// return 0;
// }

// #include <iostream>
// using namespace std;
// char findEvenodd(int n)
// {wchar_t Even;
//  wchar_t  Odd;
//     if(n%2)
//     {
//      return Even;
//     }
//     else 
//     {
//         return Odd ;
//     }
// }
// int main()
// {
// int n;
// // wchar_t Even;
// // wchar_t  Odd;
// cout<< " enter the value of n" << endl ;
// cin >> n ;
// wchar_t ans = findEvenodd(n) ;
// cout<<" enter no is :"<<  ans <<endl ;
// return 0;
// }
// #include <iostream>
// using namespace std;
// void checkEvenodd(int n)
// {
//     if(n%2 == 0)
//     {
//      cout<< n << " is even no " ;
//     }
//     else 
//     {
//        cout<< n << " is odd no " ;
//     }
// }
// int main()
// {
// int n;
// // wchar_t Even;
// // wchar_t  Odd;
// cout<< " enter any no. n" << endl ;
// cin >> n ;
// checkEvenodd(n) ;
// return 0;
// }
// #include <iostream>
// using namespace std;
// void findEvenodd(int n)
// {
//     if(n%2== 0)
//     {
//      cout<< n<< "is even no" << endl ;
//     }
//     else 
//     {
//        cout<< n<< "is odd no" << endl ;
//     }
// }
// int main()
// {
// int n;
// cout<< " enter any no. " << endl ;
// cin >> n ;
// findEvenodd(n) ;
// return 0;
// }

#include <iostream>
using namespace std;
void findEvenodd(int n)
{
   switch(n%2){
    
   case 0 : cout <<"even";break ;
   default :cout << "odd" ;
   }
}
int main()
{
int n;
cout<< " enter any no. " << endl ;
cin >> n ;
cout<< n << "is" ;
findEvenodd(n) ;
return 0;
}