
// #include <iostream>
// using namespace std;

// int main()
// {
// int arr[14] {1,0,1,0,1,0,1,0,1,0,1,0,0,0} ;
// int size = 14 ;
// // cout << " entr the element in arr : "<< endl ;
// // for (int i=0 ; i<size; i++  )
// // {
// //     cin>> arr[i] ;
// // } cout << endl ;
// // cout << " array is : " ;
// // for (int i=0 ; i<size; i++  )
// // {
// //     cout<<  arr[i] << " ";
// // }
// int start = 0;
// int i= 0 ;
// int end = size-1 ;

//      for (int i=0; i<size  ; i++ )
// {  
//     while(i < end )
  
//     if(arr[i] == 0)
//     {
//         swap (arr[start] ,arr[i] ) ;
//            i++;
//            start++ ;
        
//     }
//     else
//     {
//        swap (arr[i] , arr[end])  ;
//          end-- ;
        
//     }  
    
// }
// cout << " sorted array is : " ;
// for (int i=0 ; i<size; i++  )
// {
//     cout<<  arr[i] << " ";
// }

// return 0;
// }

#include <iostream>
using namespace std;

int main()
{
int arr[15] { 1,2,0,1,2,0,1,2,0,1,2,0,1,2,0} ;
int size = 15 ;
int low = 0 ;
int mid = 0 ;
int high = size-1 ;
for (int i=0;i<size;i++)
{
    while (mid<high)
    {
        if(arr[mid]==0){
        swap(arr[mid],arr[low]) ;
        mid++;
        low++ ;
        }
        else if(arr[mid]== 1) {
            mid++ ;
        }
        else{
            swap(arr[mid] , arr[high]);
            high-- ;
        }
    }
}
for (int i=0;i<size;i++)

cout<< arr[i] << " ";

return 0;
}
