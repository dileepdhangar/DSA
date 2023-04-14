
// #include <iostream>
// using namespace std;

// int main()
// {

// int i;
// int j;
// cout<< " enter the value of i"<< endl ;
// cin>> i;
// j=1;
// while(j<=i)
// {   int count = 0;
//     if (i%j == 0)
//     {
//       count++ ;
//      }
//    j++ ;
// } 
// if( int count = 2 )
// {
//     cout<< i << " is prime " ;
// }
// else {
//     cout<< i << " no is composite" ;
// }
// return 0;

// }
// #include <iostream>
// using namespace std ;
// int main() 
// {
//   int i ;
//   int j;
//   cout << "enter the value of i" << endl ;
//   cin >> i ;
//   int count =0 ;
//   for(j=1;j<=i;j++)
//     { 
//          if(i%j==0)
//        count++ ;
//     }
//   if (count == 2)
//   {
//     cout<<i <<  " is prime" ;
//   }
//   else
//   {
//     cout<< i<< " is composite " ;
//   }
//   return 0;
// }

#include <iostream>
using namespace std;

int main()
{
int i;
int j;
cout<< "enter the value of i"<< endl ;
cin>> i ;
j=1;
int count = 0;
while(j<=i)
{   
    if (i%j == 0)
    {
      count++ ;
     }
   j++ ;
} 
if( count == 2 )
{
    cout<< i << " is prime " ;
}
else
{
    cout<< i << " is composite" ;
}
return 0;

}