
// #include <iostream>
// using namespace std;
// int findSquareroot(int target)
// {
//     int s = 0;
//     int e = target ;
//     int mid = s+ (e-s)/2;
//     int ans =-1 ;
//     {
//         while(s<=e)
//         if (mid * mid == target ){
//             ans = mid ;
//             break ;
//         }
//         if (mid * mid > target ){
//             e= mid -1;
//         }
//         else 
//         {   
//             ans = mid ;
//             s= mid +1 ;
//         }
//         mid = s+ (e-s)/2 ;
    
//     }
//     return ans ;

// }
// int main()
// {

// int target = 26 ;
// int ans = findSquareroot(target) ;
// cout << " square root is :" << ans << endl ; 
// double  finalans = ans ;
// int precision ;
// cout << " enter the precision value : " << endl ;
//   cin >> precision ;
//   double step = 0.1 ;
//   for (int i= 1; i<=precision; i++){
//     for (double  j = finalans ; j*j<= target ; j= j+ step ){
//       finalans = j ;
//     }
//     step=step/10 ;
//   }
//   cout << " final ans is : " << finalans << endl ;
// return 0;
// }
#include<iostream>
#include<vector>
using namespace std ;


int findOddelement(vector<int>arr,int size)
{
  int s= 0;
  int e= arr.size()-1 ;
  int mid = s+ (e-s)/2 ;
  int ans =-1 ;
  while(s<=e){
    if(s==e){
      ans = s ;
      break ;
    }
    if(mid%2==0){
      if(arr[mid] == arr[mid+1]){
        s= mid +2 ;
      }
      else{
        e= mid ;
      }
    }else {
      if(arr[mid]==arr[mid-1]){
        s= mid+1;
    }
    else{
      e= mid-1 ;
    }
  }
   
}
 return ans ;
}
int main()
{
  
  vector<int>arr{1,1,2,2,3,3,4,4,5,6,6,8,8} ;
  int size =13;
  int ans = findOddelement(arr,size) ;
  cout<< " odd element index is : " << ans << endl ;
  cout<< " odd element is : " << arr[ans] << endl ;
  return 0 ;
}