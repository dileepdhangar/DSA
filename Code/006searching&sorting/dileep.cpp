// #include<iostream>
// #include<vector>
// using namespace std ;


// int findOddelement(vector<int>arr,int size)
// {
//   int s= 0;
//   int e= arr.size()-1 ;
//   int mid = s+ (e-s)/2 ;
//   int ans =-1 ;
//   while(s<=e){
//     if(s==e){
//       ans = s ;
//       break ;
//     }
//     if(mid%2==0){
//       if(arr[mid] == arr[mid+1]){
//         s= mid +2 ;
//       }
//       else{
//         e= mid ;
//       }
//     }else {
//       if(arr[mid]==arr[mid-1]){
//         s= mid+1;
//     }
//     else{
//       e= mid-1 ;
//     }
//   }
//   mid = s+ (e-s)/2 ;
   
// }
//  return ans ;
// }
// int main()
// {
  
//   vector<int>arr{1,1,2,2,3,3,4,4,5,6,6,8,8} ;
//   int size =13;
//   int ans = findOddelement(arr,size) ;
//   cout<< " odd element index is : " << ans << endl ;
//   cout<< " odd element is : " << arr[ans] << endl ;
//   return 0 ;
// }

// #include <iostream>
// #include<vector>
// using namespace std;
// int findOddelementindex(vector<int>arr,int size){
// int s= 0;
// int e = arr.size() ;
// int mid = s+(e-s)/2 ;
// int ans =-1 ;
// while(s<=e) {
//     if (s==e){
//         ans = s;
//         break ;
//     }
//     if (mid%2 ==  0 ){
//         if(arr[mid ]== arr[mid +1]){
//             s= mid +2 ;
//         }
//         else {
//             e= mid ;
//             ans = mid ;
//         }
//     }
//     else {
//             if (arr[mid]==arr[mid-1 ]){
//                 s= mid+1 ;
//             }
//             else{
//                 e= mid -1;    
//             }
//         }
//          mid = s+(e-s)/2 ;
// }
//        return ans ;
// }
// int main()
// {
// vector<int>arr{1,1,2,2,3,3,4,4,5,5,6,6,7,7,9,8,8} ;
// int size = arr.size() ;
//  int ans = findOddelementindex(arr,size) ;
//  cout<< " odd element index is :" <<ans <<  endl ;
// cout << " odd element is "  <<arr[ans ] << endl ; 
 
// return 0;
// }

// #include <iostream>
// #include<vector>
// using namespace std;

// int main()
// {
// vector<int>arr{8,9,4,5,2,10,5,15} ;
// int size = arr.size() ;
// for (int i=0;)
// return 0;
// }

// #include <iostream>
// #include<vector>
// using namespace std;

// int main()
// {
// vector<int> arr { 6,9,3,5,1,10,11,4} ;
// int size = arr.size() ;
// for(int i=0; i< size-1;i++){
//     int minindex = i ; 
//     for (int j=i+1; j<size ; j++ ){
//            if(arr[j]< arr[minindex]){
//             minindex = j ;
//            }
//     }
//        swap(arr[minindex], arr[i]) ;
// }
//  cout <<" final sorted array is " ;
// for (int i =0; i< size;i++ ) {
   
//     cout << arr[i]  << " " ;
// }

// return 0;
// }

// #include <iostream>
// #include<vector>
// using namespace std;

// int main()
// {
// vector<int>arr{8,6,9,10,5,2,3,11,16,1} ;
// int size = arr.size() ;

// for(int round =1 ; round< size ;round ++ ){
//      //bool swapped = false ;
//      int swapCount = 0;

//     for (int j=0; j< size - round  ;j++ ){
//         if(arr[j] < arr[j+1]){
//             swap(arr[j] ,arr[j+1]) ;
//             swapCount++ ;
//         }
//     }
//     if (swapCount == 0)//bool swapped = false )
//     {
//     break  ;
// }

// }
// for(int i=0; i<size ; i++ ) {
// cout << arr[i] << " " ;
// }
// return 0;
// }

//selection sort 

#include <iostream>
#include<vector>
using namespace std;

int main()
{
vector<int>arr{2,5,3,8,6,9,10,4,12,19,14}  ;
int size = arr.size() ;
for(int i=0; i<size-1 ;i++){
    int minindex = i;
    for(int j=i+1; j<size; j++ ){
         if(arr[j]<arr[minindex] ){
         minindex  = j ;
         }
    } 
    swap(arr[i] , arr[minindex]) ;
}
for (int i=0; i<size ;i++ ){
    cout << arr[i] << " " ;
}
return 0;
}
