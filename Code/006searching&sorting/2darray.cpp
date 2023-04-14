
// #include <iostream>
// using namespace std;

// bool binarsearch(int arr[][4],int row,int col,int element ) {
//     int s= 0;
//     int e = row*col;
//     int mid = s+(e-s)/2 ;

//     while(s<=e)
//     {   int rowindex = mid/col ;
//         int colindex = mid%col ;
//         if()
//     }

// }
// int main()
// {
//     int arr[5][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,17,18,19}} ;
//     int row =5;
//     int col= 4;
//     int element = 19 ;
//     bool ans = binarsearch(arr,row,col,element ) ;

// return 0;
// }

#include <iostream>
using namespace std;

bool findtwoDindex(int arr[][4],int row,int col,int target)
{
   int  s= 0;
   int  e= (row*col)-1 ;
   int mid= s+(e-s)/2 ;
   while(s<=e)
   {
    int rowindex = mid/col ;
    int colindex = mid%col ;
    //int element = arr[rowindex][colindex] ;
    if(arr[rowindex][colindex]  = target)
    
        return true ;
    
    if(arr[rowindex][colindex] < target){
    //rght search
        s= mid +1;
    }
    else {
        e= mid-1 ;
    }
    mid = s + (e-s)/2 ;
   }
   return false ;

}
int main()
{
int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}} ;
int row = 5;
int col = 4 ;
int target = 100 ;
bool ans = findtwoDindex(arr,row,col,target) ;
if(ans)
{
    cout<< " found " << endl ;
}
else 
{
    cout << " not found " ;
}
return 0;
}
