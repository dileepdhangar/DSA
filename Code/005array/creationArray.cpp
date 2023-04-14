
// #include <iostream>
// using namespace std;

// int main()
// {
// int arr[7] ;
// cout<< arr << endl ;
// cout << "base address print successfully " << endl ;
// cout << &arr << endl ;
// cout << "array declare successfully " << endl ;
// return 0;
// }


// #include <iostream>
// using namespace std;

// int main()
// {
// int arr[] = {2,5,7,9,4} ;
// int brr[10] = {2,5,7,9,4} ;
// //error ;
// int drr[4] = {2,5,7,9,4} ;
// cout<< " array initialised successfully " << endl ;
// return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {2,4,6,5,6,8,9} ;
//     cout << " the no storeed  at insert index  is : " ;
//     cout << arr[2] << endl ;

// return 0;
// }


// #include <iostream>
// using namespace std;

// int main()
// {

// int arr[] = {2,4,3,6,5,8,9} ;
// for (int index =0;index <7;index++)
// {
//     cout<<"int stored at "<< index <<"th index is = " ;
// cout<< arr[index ] << endl ;
// }

// return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     cout<< "enter the input value in arr " ;
// int arr[5] ;
// //cout<< "enter the input value in arr " << "  ";
// for(int i=0;i<5;i++)
// {
// cin>> arr[i] ;
// }
// cout<< "  the value stored in arr is : "  ;
// for(int i=0;i<5;i++) {
// cout << arr[i] << " ";
// }
// return 0;
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout<< "enter the input value in arr " ;
// int arr[5] ;
// //cout<< "enter the input value in arr " << "  ";
// for(int i=0;i<5;i++)
// {
// cin>> arr[i] ;
// }
// cout<< "  the value stored in arr is : "  ;
// for(int i=0;i<5;i++) {
// cout << arr[i] * 2 << " ";
// }
// return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
// int n ;
// cout<< " entr the value of n "<< endl ;
// cin>> n;
// int arr[n] ;
// cout<< " enter the value in arr " ;
// for(int i=0;i<5;i++)
// {
// cin>> arr[i] ;
// }
//  cout<< " indexed value in arr is : "  ;
// for(int i=0;i<5;i++)
// {
//     cout<< arr[i] * 2 ;
// }
// return 0;
// }
// #include <iostream>
// using namespace std;

// int main()
// {
// // int n ;
// // cout<< " entr the value of n "<< endl ;
// // cin>> n;
// int arr[5] = { 1,2,3,4,5};

// for(int i=0;i<5;i++)
// {
//     arr[i] = 2 ;
// }

// for(int i=0;i<5;i++)
// {
//     cout<< arr[i] * 2 ;
// }
// return 0;
// }
// #include <iostream>
// using namespace std;

// int main()
// {

// int arr[5] = { 1,2};

// for(int i=0;i<5;i++)
// {
//     cout<< arr[i] * 2 ;
// }
// return 0;
// }
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
int arr[10] ;
memset(arr,2,sizeof(arr)) ;
 cout<< "value is :" ;
for(int i=0;i<5;i++)
{  
    cout<< arr[i] << " " ;
}
return 0;
}



