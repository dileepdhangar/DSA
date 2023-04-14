
// #include <iostream>
// using namespace std;

// int fib(int n) {

//     if (n==1){
//         return 0 ;
//     }
//     if (n==2 ){
//         return 1 ;
//     }
//     int ans = fib(n-1) + fib(n-2 ) ;
//     return ans ;
// }

// int main()
// {

// int n ;
// cout << "entr the value of n" << endl ;
// cin >> n;

// int ans = fib(n) ;
// cout<< ans << endl;
// return 0;
// }

// #include <iostream>
// using namespace std;


// void  print(int arr[],int n ,int  i)  {
// //base case likhna hai 
//  if ( i >= n)
//  return ;

// // 1 case solve krna  hai 

// cout << arr[i] << " ";
// // baki recursion sambhal lega 

// print (arr,n,i+1 ) ;
 

// }

// int main()
// {
// int arr[9] = { 10,20,30,40,50,60,70,80,90};
// int i=0;
// int n= 9 ;

// print( arr,n,i) ;
// //cout << print << endl ;

// // return 0;
// // }

// #include <iostream>
// using namespace std;

// void print (int arr[],int i ) {

//      if (i < 0) {
//         return ;
//      }
    
//      print(arr, i-1) ;
//      cout << arr[i]  << " ";
// }

// int main()
// {

// int arr[9] = { 10,20,30,40,50,60,70,80,90};
// int n= 9;
// int i = n-1 ;

// print (arr, i ) ;

// return 0;
// }

// #include <iostream>
// using namespace std;

// int findMax(int arr[],int size){
//         // int maxi = INT_MIN ;
//         //  for (int i=0; i<size ; i++) {
          
//         //     arr[i]  < maxi ;
//         //     maxi = arr[i] ;
            
//         // }
//         int mini = INT_MAX ;
//          for (int i=0; i<size ; i++) {
          
//            if( arr[i]  < mini) 
//             mini = arr[i] ;
            
//         }
//         return mini ;
//  }

// int main()
// {
// int arr[9] = {10,60,20,30,80,90,40,50,70,} ;
// int size = 9 ;
// int ans = findMax(arr,size) ;

// cout << ans << endl ;

// return 0;
// }



// #include <iostream>
// #include<limits.h>
// using namespace std;

// void  findMax(int arr[],int n,int& maxi,int i){
    
//     //base case 
//     if(i>=n ){
//      return ;
//     }
//     // 1st case solve 
//     if( arr[i]> maxi) {
//         maxi = arr[i] ;
//     }

//     findMax( arr,n,maxi,i+1) ;
   
// }
// void findMin(int arr[],int n,int mini,int i) {

//      if(i>= n){
//         return ;
//      }
//      mini= min(arr[i],mini) ;

//     findMin(arr,n,mini,i+1) ;

// }


// int main()
// {

// int arr[12] = {10,60,20,30,80,6,2,90,40,50,70,5} ;
// int  maxi = INT_MIN ;
// int mini = INT_MAX ;
// int i =0;
// int n =9 ;
// findMax(arr,n,maxi,i) ;
// findMin(arr,n,mini,i) ;
// //cout << findMax(arr,n,maxi,i) << endl  ;
// cout << maxi << " is the maximum element "  << endl ;
// cout << mini << " is the minimum element "  << endl ;
// return 0 ;

// }

// 


// #include <iostream>
// using namespace std;

// int main()
// {

// int n = 647 ;
// int step = 10 ;
// int ans ;

// for(int i =0; i>n ; i++)  {

//    ans =  n%step  ;
//    cout << ans << endl ;
//    int n  = n/step ;
   
// }

// return 0;

// }

#include <iostream>
using namespace std;

void printDigit(int n){
   
     // base condition
     if(n==0) {
        return ;
     }

     int digit = n%10 ;
     cout << digit ;
     n=n/10 ;

}

int main()
{

int n= 7364 ;

printDigit(n) ;

return 0;
}
