
// #include <iostream>
// using namespace std;

// int main()
// {
// int arr[15]{1,2,3,4,5,6,7,11,22,33,77,99,0,67,88} ;
// int size = 15 ;
// cout << " entr key " ;
// int key ;
// cin>> key ;
// int i ;
// int ans = -1 ;

// for(i=0;i<size;i++)
// {
//     if(arr[i] == key)
//     {
//      ans = i ;
//     } 
// } 
// if ( ans  == -1)
//    {
//    cout << " not found " ;
// }
// else 
// { 
//     cout << " found " ;
// }
// return 0;
// }

// #include <iostream>
// using namespace std;
// int binarySearch(int arr ,int  size,int key ) 
// {
// int start = 0;
// int end = size-1 ;
// int mid  = (start + end)/2;
// while(start<end )
// {
//     if (key < arr[mid])
//     {
//         return  end = mid-1 ;
//     }
//     else if(key > arr[mid])
//     {
//        return  start = mid +1 ;
//     } 
//     else if (key = arr[mid])
//     {
//       return mid = element   ;
//     }
//     else 
//     {
//        return  mid = (start+ end )/2 ;
//     }
// }
// }
// int main()
// {
// int arr[15]{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
// int key = 13 ;
// int element = -1 ;
// int size = 15 ;
// int element = binarySearch(arr[15],size,key ) ;
// if (element  = -1)
// {
//    cout<< "not found" << endl ;
// }
// else 
// {
//      cout<< " element found index = " << mid <<  endl ;
// }


// return 0;
// }
// #include <iostream>
// using namespace std ;
// int binarysearch(int arr[],int size,int target)
// {
//   int start = 0;
//   int end = size-1 ;
//   int mid = (start + end )/2 ; // start + (end - start) /2 ; INT NOT GET OVERFLOW  -2^31 T0 2^31-1 ;
//   while(start <= end )
//     {
//       int element = arr[mid] ;
//       if(target == element )
//       {
//         return mid ;
//       }
//       else if(target < element )
//       {
//         end = mid -1 ;
//       }
//       else 
//         {
//         start = mid +1 ;
//         }
      
//       mid = (start+end )/2 ;
       
//     }
//   return -1 ;
// }

// int main() {
//   int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15} ;
//   int size = 15 ;
//   int target = 7;
//   int getindex = binarysearch(arr,size,target) ;
//   if (getindex == -1 )
//   {
//     cout << " target not found " << endl ;
//   }
//   else
//   {
//     cout<< "target found at index " << getindex  ;
//     }
// }

// #include <iostream>
// #include<vector> 
// #include<algorithm>
// using namespace std;

// int main()
// {
// vector<int>arr {1,2,3,5,6,7,9,10,11,14,16,18,20}  ;
// int size = 13 ;
// if( binary_search (arr.begin(),arr.end(),22))
// {
//    cout<< " found " ;
// }
// else 
// {
//    cout << " not found " ;
// }

// return 0;
// }

// #include <iostream>
// #include<vector>
// using namespace std;
// int firstOccurance(vector<int>arr,int target) 
// {
//     int s= 0;
//     int end = arr.size()-1 ;
//     int mid = (s+end)/2 ;
//     int ans =-1 ;
//     while (s<=end)
//     {
//           if (arr[mid] == target )
//           {
//             int ans = mid ;
//             end = mid -1 ;
//           }
//           else if (target< arr[mid ])
//           {
//             end = mid -1 ;
//           }
//           else 
//           {
//             s= mid +1 ;
//           }
//     }
//      return ans ;
// }


// int main()
// {
// vector<int>arr={2,3,4,4,4,4,4,4,4,11,15,18,20} ;
// int size = 13 ;
// int target = 4 ;
// int firstoccIndex = firstOccurance(arr,target) ;
// cout << " ans is " << firstoccIndex ;


// return 0;
// }


// #include <iostream>
// #include<vector>

// using namespace std;
// int lastOccurance(vector<int>arr,int target)
// {
//   int s =0;
//   int end = arr.size()-1 ;
//   int mid = s+ (end-s)/2 ;
//   int index = -1 ;
//   while(s<=end)
//   { 
//     if (arr[mid] = target) {
//        index = mid ;
//        s = mid + 1 ;
//         }
//     else if(target > arr[mid])
//     {
//       s= mid +1 ;
//     }
//     else if(target < arr[mid])
//     {
//       end = mid -1 ;
//     }
//     mid = s+ (end -s)/2 ;  
//   }
//   return index ;
// }

// int main()
// {
// vector<int>arr = {1,2,3,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,8,9,10,11,15} ;
// //int arr.size() = 25 ;
// int size = 25 ;
// int target = 7 ;
// int lastindex = lastOccurance(arr,target) ;
// cout << " last index is : " << lastindex ;

// return 0;
// }

// #include <iostream>
// #include<vector>

// using namespace std;
// int lastOccurance(vector<int>arr,int target)
// {
//   int s = 0 ;
//   int end = arr.size()-1 ;
//   int mid = s + (end-s)/2 ;
//   int index = -1 ;
//   while(s<=end)
//   { 
//     if (target = arr[mid]  ) {
//        index = mid ;
//        s = mid + 1 ;
//         }
//     else if(target > arr[mid])
//     {
//       s = mid +1 ;
//     }
//     else if(target < arr[mid])
//     {
//       end = mid -1 ;
//     }
//     mid = s+ (end -s)/2 ;  
//   }
//   return index ;
// }

// int main()
// {
// vector<int>arr = {1,2,3,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,8,9,10,11,15} ;
// //int arr.size() = 25 ;
// int size = 24 ;
// int target = 7 ;
// int lastindex = lastOccurance(arr,target) ;
// cout << " last index is : " << lastindex ;

// return 0;
// }

// #include <iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int firstOccurance(vector<int>arr,int target) 
// {
//     int s= 0;
//     int end = arr.size()-1 ;
//     int mid = (s+end)/2 ;
//     int ans = -1 ;
//     while (s<=end)
//     {
//           if (arr[mid] == target )
//           {
//             ans = mid ;
//             s = mid +1 ;
//           }
//           else if (target< arr[mid])
//           {
//             end = mid-1 ;
//           }
//           else if (target > arr[mid]) 
//           {
//             s = mid +1 ;
//           }
//       mid = (s+end )/2  ;
//     }
//      return ans ;
// }


// int main()
// {
// vector<int>arr={1,1,1,2,3,3,3,3,3,4,4,4,4,4,4,4} ;
// int size = 16 ;
// int target = 4 ;
// // int firstoccIndex = firstOccurance(arr,target) ;
// auto ans = upper_bound(arr.begin(),arr.end(),target) ;
// cout << " upper bound is : " << ans-arr.begin()<< endl ;

// auto ans1 = lower_bound(arr.begin(),arr.end(),target) ;
// cout << " lower bound is : " << ans1-arr.begin() << endl ;



// return 0;
// }

// #include <iostream>
// #include<vector >
// #include<algorithm>
// using namespace std;

// int main()
// {
//   vector<int>arr={2,4,4,4,4,4,4,6,8,10} ;
//   int target = 4 ;
//   int size =10 ;
//   auto lower = lower_bound(arr.begin(),arr.end(),target) ;
//   cout<< " upper bound is " << lower - arr.begin() ;
//   int low = lower - arr.begin() ;
//   auto upper = upper_bound(arr.begin(),arr.end(),target) ;
//   cout<< " upper bound " << upper - arr.begin() ;
//    int up  = upper - arr.begin() ;

//   cout << " total accurance  : " << up - low +1 ;


// return 0;
// }

#include <iostream>
#include<vector>
using namespace std;
int peakElement(vector<int>arr){
int s=0 ;
int end = arr.size()-1 ;
int mid = (s+end )/2 ;
while(s<end )
{
  if(arr[mid]<arr[mid+1])
  {
    //right search
    s = mid +1 ;
  }
  else
  {
    end = mid ;
  }
   mid = (s+end)/2  ;
}
  return arr[mid];
}
int main()
{
vector<int>arr{1,2,5,10,11,9,8} ;
int size = 6 ;
int getelement = peakElement(arr) ;
cout<< " peakelement is : " << getelement ;
return 0;
}

