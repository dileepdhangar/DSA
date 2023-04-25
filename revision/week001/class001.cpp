
// #include <iostream>
// using namespace std;

// int main()
// {
// int  bronum ;
// cout << " enter the value of bronum " << endl ;
// cin >> bronum ;
// if (bronum == 0){

//     cout << " baat ban ajegi " << endl ;
// }
// else {

//     cout << " baat nhi bnegi " <<  endl ;
// }
// return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

// for (int i=0 ; i< 100 ; i++ ){
//     //cout << " love babbar " << endl ;

//     cout << i << " " ;
// }
// for ( int i= 5 ; i>0 ; i--) {

//     cout << i << " " ;
// }

// return 0;
// }
// for ( int i = 1;  i <10  ; i =i* 2 ) {

//     cout << i << " ";
// }

// for (int  i = 100; i > 0 ;i=  i/2)
// {
//     cout << i << " "  ;
// }

// isme bhi doubt hai ;

//     int i = 0;
//     for ( ; ; )
//     {
//         if (i < 5)o
//             cout << i << " ";
//             i++ ;
//     }
//     return 0;
// }

// doubt hai isme

// #include <iostream>
// using namespace std;

// int main()
// {
//   // code for solid rectangle
//   // for ( int i =1 ; i<= 3; i ++) {

//   //   for ( int i = 1 ; i <= 5 ; i++ ) {

//   //       cout  << '*' << " " ;

//   //   }
//   //   cout << endl ;
//   // }
//   for (int row = 1; row <= 4; row++)
//   {
//     for (int col = 1; col <= 4; col++)
//     {
//       cout << "*"
//            << " ";
//       // cout << '*' << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   for (int row = 1; row <= 5; row++)
//   {

//     if (row == 1 || row ==5)
//     {

//       for (int col = 1; col <= 8; col++)
//       {

//         cout << '*' << " ";
//       }
//     }

//     else
//     {

//       for (int col = 1; col <= 8; col++)
//       {

//         if (col ==1 || col ==8)
//           { cout << '*' << " " ;}
//           else
//           {
//             cout << " " << " " ;
//           }
//       }
//     }
//     cout << endl;
//   }
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int rownum = 3;
// int colnum = 5;

// int main()
// {
//   for (int row = 1; row <= 3; row++)
//   {

//     if (row == 1 || row == 3)
//     {
//       for (int col = 1; col <= 5; col++)
//       {
//         cout << '*' << " ";
//       }
//     }
//     else
//     {

//       cout << '*' << " ";
//       for (int col = 1; col <= colnum-2 ; col++)
//       {

//         cout << " "
//              << " ";
//       }
//       cout << '*' << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

// code for half pyramid

// #include <iostream>
// using namespace std;

// int main() {

// int n;
// cout << " enter the value of n " << endl;
// cin >> n;

//   for (int row = 1; row <= n; row++)
//   {

//     for (int col = 1; col <= row; col++)
//     {

//       cout << "* ";
//     }
//     for ( int col = row+1 ; col<= n ; col++) {

//       cout << "-" << " " ;
//     }
//     cout << endl;
//   }
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//   int n;
//   cout << "enter the value of n " << endl;
//   cin >> n;

//   for (int row = 1; row <= n; row++)
//   {

//     for (int col = 1; col <= n - (row - 1); col++)
//     {

//       cout << "*"
//            << " ";
//     }
//     cout << endl;
//   }

//   return 0;

// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int n;

//   cout << " entetr thw value of n" << endl;
//   cin >> n;

//   for (int row = 1; row <= n; row++)
//   {

//     for (int col = 1; col <= row ; col++)
//     {
//       // int i = 1;
//       // while (i <= row)
//       // {
//       //   cout << i << " ";
//       //      i++ ;
//       // }
//       // for ( int i =1 ; i<= row ; i++ ) {
//       //   cout << i << " " ;
//       // }
//       cout << col << " " ;

//     }
//     cout << endl ;
//   }
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
// int n;
// cout << " enter the value of n " << endl ;
// cin >> n;

// for ( int row = 1; row <= n; row ++ ) {

//   for ( int col = 1 ; col <= n-row + 1 ; col++) {
//     cout << col << " ";
//   }
//   cout << endl ;
// }
// return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
// int n;
// cout << " enter the value of n "  << endl ;
// cin>> n;
// for ( int row = 1; row <= n ; row++ ) {

//   for ( int col =1 ;col <= n-row ; col++ ) {
//     cout << " " ;
//   }

//   for (int col= 1; col <= row ; col++ ) {
//     cout << "*" <<" " ;
//   }
//   cout << endl ;
// }

// return 0;
// }
// }
// #include <iostream>
// using namespace std;

// int main()
// {
// int n;
// cout << " enter the value of n "  << endl ;
// cin>> n;
// for ( int row = 1; row <= n ; row++ ) {

//   for ( int col =1 ;col <= row -1 ; col++ ) {
//     cout << "-" ;
//   }

//   for (int col= 1; col <= n- row + 1 ; col++ ) {
//     cout << "*" <<" " ;
//   }
//   cout << endl ;
// }

// return 0;
// }

// #include <iostream>
// using namespace std;

// void printNumber(int a)
// {

//   cout << a << "$" << endl;
//   a++;

//   cout << a << "#" << endl;
// }

// int main()
// {
//   int a = 5;
//   printNumber(a);

//   cout << a << endl;

//   return 0;
// }

// #include <iostream>
// using namespace std;

// int findMax( int  a, int b, int c ) {

//    if ( a> b && a> c) {

//     return a ;

//    }
//    else if ( b> a && b> c) {

//     return b;
//    }
//    else {

//    return c ;
//   }

// }

// int main()
// {

// int a,b,c ;
// cout << " ennter the number " << endl ;
// cin >> a>> b>> c ;

// int result = findMax( a,b,c ) ;
// cout <<  " maximum num is "<<  result << endl ;
// return 0;
// }

// #include <iostream>
// using namespace std;

//  char getMarks (int  marks ){

//    if ( marks >= 90 ) {
//    return 'A' ;
//    }
//    else if ( marks >= 80) {
//     return 'B';
//    }
//    else if(marks >= 70) {

//     return 'C';
//    }
//    else {
//     return 'D';
//    }

//  }

// int main()
// {
// int marks ;
// cout << " enter the marks obtained " << endl ;
// cin >> marks ;

// char result = getMarks ( marks ) ;
// cout << " you grade is "  << result << endl ;
// return 0;
// }

// #include <iostream>
// using namespace std;

// char getMarks (int marks ) {

//   switch (marks /10) {

//      case 10 : return 'A' ; break ;
//      case 9 : return 'B' ; break ;
//      case 8 : return 'C' ; break ;
//      case 7: return 'D' ; break ;
//      default : return 'E'  ;

//   }
// }

// int main()
// {

// // int marks ;
// // cout << " enter the marks obtained " << endl ;
// // cin >> marks ;

// for( int i =1 ; i <= 100 ; i++ ) {

// char result = getMarks ( i ) ;
//  cout << " grade for " << i <<" is :  " <<  result << endl ;

// }

// return 0;
// }

// #include <iostream>
// using namespace std;

//  int getSumEven( int n) {
//      int sum =0 ;
//   for ( int i= 2; i<=n ; i = i+2 ) {
//     sum = sum + i;
//   }
//    return sum ;
//  }

// int main()
// {

// int n;
// cout << " enter the value of n " << endl ;
// cin >> n ;

// int result = getSumEven(n) ;

// cout << " the even  sum up to  " << n << " is : "  << result << endl ;

// return 0;
// }

// #include <iostream>
// using namespace std;

// float circle_area( float radius ){

//       float area = 3.14 * radius  * radius  ;

//       return area ;

// }

// int main()
// {
//  float radius ;
//  cout << " emter the radius of circle " << endl ;
//  cin>> radius ;
// //float ans = circle_area( radius )  ;
// cout <<   circle_area( radius ) << endl ;

// return 0;
// }

// #include <iostream>
// using namespace std;

// string  numEvenOdd(int n) {

// }

// int main()
// {
//    int n ;
//    cout << " enter the number " << endl ;
//    cin >> n ;

//    string  ans = numEvenOdd(n) ;

// return 0;
// }

// #include <iostream>
// using namespace std;

// int findFact(int n) {

//     int fact =1 ;
//     for ( int i= 1; i<= n; i++ ) {

//       fact = fact *i ;

//     }

//     return fact ;

// }

// int main()
// {

// int n ;
// cout <<" enter the no " << endl ;
// cin >> n ;

// int ans = findFact(n) ;
// cout << ans << endl ;

// return 0;
// }

// #include <iostream>
// using namespace std;

// bool findPrime (int n) {
//   bool isprime = false;
//   for ( int i = 2 ; i <n ; i++ ) {

//     if( n% i == 0 ) {
//       isprime = false;
//     }
//     else {
//       isprime = true;
//     }

//   }
//   return isprime;
// }

// int main()
// {

// int n ;
// cout << " enter the no " << endl ;
// cin >> n ;

// bool prime = findPrime(n);
// if (prime == true) {
//   cout << n << " is prime";
// }

// return 0;
// }

// #include <iostream>
// using namespace std;

// void printPrime(int i)
// {

//     for (int j = 2; j<= i; j++)
//     {

//       if (i % j == 0)
//       {
//         return;
//       }
//       else
//       {
//         cout << i << " ";
//       }
//     }
//   return ;

// }
// int main()

// {

//   int n;
//   cout << " enter the value of  n " << endl;
//   cin >> n;

// for ( int i = 2; i<= n ; i++ ) {

//       printPrime(i) ;

// }

//   return 0;
// }

// #include <iostream>
// using namespace std;

// bool checkPrime(int j){

//   for( int i =2 ; i < j ; i++ ) {

//     if ( j % i == 0 ) {

//       return false ;
//     }

//   }
//   return true ;

// }

// int main()
// {

// int n;
// cout << " enter the value of n " << endl ;
// cin>>  n ;

// for( int j = 2 ; j<= n ; j++ ) {

// bool isprime = checkPrime(j) ;

// if ( isprime) {

//   cout << " prime no is : " << j <<  endl ;

// }
// else {
//   cout << " compsite no  is  : "<< j << endl ;
// }

// }
// return 0;
// }

// #include <iostream>
// using namespace std;

// int reverseInt( int n ) {

//     int i = 10 ;

//     while ( n >= 0 ) {
//        n = n % i ;
//       i= i*10 ;
//      cout << n << " " ;

//     }

// }

// int main()
// {

// int n;
// cout << " enter the no :" << endl ;
// cin >> n ;

// reverseInt( n ) ;

// return 0;
// }

// #include <iostream>
// using namespace std;

// int reverseInt(int x)
// {

//   int ans = 0;
//   while (x > 0)
//   {
//     int rem = x % 10;
//     ans = ans * 10 + rem;
//     x = x / 10;
//   }

//   return ans;
// }

// int main()
// {

//   int x;
//   cout << " enter the value of x " << endl;
//   cin >> x;

//   int get = reverseInt(x);
//   cout <<get << " " << " reverse digit is : " << endl;
//   return 0;
// }


// reverse the digit 


// #include <iostream>
// using namespace std;

// int reverseInt(int x)
// {

//   int digit = 0;
//   int rem = 0;

//   while (x > 0)
//   {

//     rem = x % 10;
//     digit = digit * 10 + rem;
//     x = x / 10;
//   }
//   return digit ;

// }

// int main()
// {
//   int x;
//   cout << " enter the value of x " << endl;
//   cin >> x;

//   int ans = reverseInt(x);
//   cout << " reverse digit  is " << ans << endl ;

//   return 0;
// }

 // code fopr set the  kth bit 
#include <iostream>
using namespace std;

 int   setKthbit( int n, int  k) {

     int mast = 1 << k ;
     int ans = n | mast ;
     return ans ;

 }

int main()
{
   int n = 2 ; 
   int k  = 2;

int get =    setKthbit( n, k) ;
cout << get << endl ;
return 0;
}
