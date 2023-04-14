
// #include <iostream>
// using namespace std;

// int main()
// {
// //int num = 524 ;
// int num ;
// cout<< " enter the no "<< endl  ;
// cin >> num ;
// int a = (num%10) ;
// cout << "3rd digit :" << a << "," ;
// int b = num/10 ;
// int c = (b%10) ;
// cout <<"2nd digit :" << c << ",";
// int d = (b/10) ;
// //int e = (d%10) ;
// cout<<"3rd digit :" << d << "," ;

// return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//  int num ;
//  cout << " enter the numver " << endl ;
//  cin>> num ;
//  int rem ;

//  while ( num != 0)
// {   rem = (num %10);
//     cout<< rem << endl ;
//     num=num/10 ;
// }
// return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
// int num ;
// cout << " enter the nu " << endl ;
// cin >> num ;
// for ( ;num  != 0; num = num/ 10 ) 
// {  
//      int rem = num%10 ;
//     cout << rem ;
// }

// return 0;
// }


#include <iostream>
using namespace std;

int main()
{
int n =15 ;
int count =0 ;
while (n!=0)
{ 
  if (n&1) {
  count ++ ;
  }
   n =  n >> 1 ;
}

cout << " no of 1's set is "<< count ;
return 0;
}
