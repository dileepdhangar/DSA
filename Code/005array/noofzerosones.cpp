
// #include <iostream>
// using namespace std;

// int main()
// {
// int arr[] ={ 1,1,1,0,1,0,1,0,0,1,1,0,2,2,3,4,5,6} ;
// int size =18;
// int countone =0;
// int countzero =0;
// int otherint =0;
// for (int i=0;i<size; i++)
// {
//     if(arr[i]==1)
//     {
        
//         countone++ ;
//         }
//     else if(arr[i]==0)
//     {
//         countzero++ ;
//         }
//     else
//     {
//        otherint++ ;
//     }
    
// }
// cout<< " no of 1's is:" << countone << endl ;
// cout<< " no of 0's is:" << countzero<< endl  ;
// cout<<" other no present is :" << otherint   ;
// return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
// int arr[] ={ 1,1,1,2,2,2,2,2,2,0,0,1,1,0,2,2,3,4,5,6} ;
// int size =20;
// int counttwo =0;

// for (int i=0;i<size; i++)
// {
//     if(arr[i]==2)
//     {
        
//         counttwo++ ;
//         }
    
// }
// cout<< " no of 2's is:" << counttwo << endl ;

// return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = { 2,4,5,7,8,99,3,5,3,23,23,44,5,68} ;
//     int size = 14 ;
//     int max = INT_MIN;
//     int min = INT_MAX ;
//     for(int i=0;i<size;i++)
//     {
//         if( arr[i] < min) 
//         {
//             min = arr[i] ;
//          }
//    }
//      cout << " min no present is : " << min << endl ;
// return 0;
// }

#include <iostream>
using namespace std;

int main()
{
int arr[] ={10,20,30,40,50,60,70,80,90} ;
int size = 9; 
int start = 0;
int end = size-1 ;
while(true)
{
    if(start>end )
    
     break ;
     cout << arr[start] << " ";
     cout  << arr[end ] << " ";
     start++ ;
     end-- ;
    
}
return 0;
}
