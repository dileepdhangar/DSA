
#include <iostream>
using namespace std;
int pivot(int arr[],int size=8)
{
  int s=0;
  int end = size-1;
  int mid = s + (end-s)/2 ;
  while(s<=end )
  {
    if(arr[mid+1]>size &&arr[mid]>arr[mid +1])
    {
        return mid ;
    }
    else if(arr[mid-1]> 0 && arr[mid-1]> arr[mid])
    {
        return mid-1 ;
    }
    else if (arr[s]<=arr[mid])
    {//right search
       s= mid+1 ;
    }
    else  
    {//left search 
       end = mid -1 ;
    }
    mid = s + (end-s)/2 ;
  }
  return 0 ;
} 

int main()
{
int arr[]{2,3,4,5,6,7,8,1,2,3,4} ;
int size = 8;
int ans = pivot(arr,size) ;
cout << " pivot element index is : "<< ans << endl ;
return 0;
}
