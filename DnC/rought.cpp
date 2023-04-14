
// #include <iostream>
// using namespace std;

// void merge(int arr[],int s,int e){

//     int mid = (s+e)/2 ;

//     int len1 = mid -s+1 ;
//     int len2 = e-mid ;

//     int* left = new int[len1] ;
//     int* right = new int[len2] ;

//     int k =s ;
//     for(int i=0; i<len1; i++){
//         left[i]=arr[k] ;
//         k++;
//     }

//     k=mid+1 ;
//     for(int i=0; i<len2; i++){
//         right[i]= arr[k] ;
//         k++;
//     }

//     int leftindex =0;
//     int rightindex =0;
//     int mainArrindex = s;

//     while(leftindex<len1 && rightindex<len2){

//         if(left[leftindex]<right[rightindex]){
//         arr[mainArrindex++] = left[leftindex++] ;
//         }
//         else {
//         arr[mainArrindex++]= right[rightindex++] ;
//         }
//     }
//     while(leftindex<len1){
//         arr[mainArrindex++] = left[leftindex++] ;
//     }
//     while(rightindex<len2){
//         arr[mainArrindex++] = right[rightindex++];
//     }

// }

// void  mergeSort(int arr[],int s,int e){
//     if(s>=e){
//         return ;
//     }
//     int mid = (s+e)/2 ;

//     mergeSort(arr,s,mid) ;
//     mergeSort(arr,mid+1,e) ;

//     merge(arr,s,e) ;
// }

// int main()
// {
// int arr[] = {4,13,5,13,2,12} ;
// int n= 6;

// int s = 0;
// int e = n-1 ;
// mergeSort(arr,s,e) ;
//  cout <<"ans is " << endl ;
// for(int i =0 ; i<n; i++ ) {
//     cout << arr[i] << " " ;
// }
// return 0;
// }

// #include <iostream>
// using namespace std;

// void merge(int arr[],int s,int e){
//     int mid = (s+e)/2 ;

//     int len1 = mid-s+1 ;
//     int len2 = e-mid ;

//     int* left= new int[len1] ;
//     int* right= new int[len2] ;
//     //cpoying in left wala array
//     int k =s ;
//     for(int i=0;i<len1; i++){
//         left[i] = arr[k] ;
//         k++;
//     }
//    //copying in right wala array
//      k= mid +1 ;
//     for(int i=0; i<len2; i++){
//         right[i] = arr[k] ;
//         k++ ;
//     }

//  int leftindex = 0;
//  int rightindex = 0;
//  int mainArrindex =s;

//  while(leftindex< len1 && rightindex < len2 ){
//     if(left[leftindex] < right[rightindex])
//     {
//         arr[mainArrindex] = left[leftindex] ;
//         mainArrindex ++ ;
//         leftindex++ ;
//     }
//     else {
//         arr[mainArrindex] = right[rightindex] ;
//         mainArrindex++;
//         rightindex++ ;

//      }
//     }
//      while(leftindex<len1) {
//         arr[mainArrindex] = left[leftindex] ;
//         mainArrindex ++ ;
//         leftindex++ ;
//      }
//      while(rightindex< len2) {
//          arr[mainArrindex] = right[rightindex] ;
//         mainArrindex++;
//         rightindex++ ;
//      }
//  }

// void mergeSort(int arr[],int s,int e) {

//      int mid = (s+e)/2 ;

//     if(s>=e){
//         return ;
//     }
// //left divide
//     mergeSort(arr,s,mid) ;
//     //right divide
//     mergeSort(arr,mid+1,e) ;
// // comparing and merging
//     merge(arr,s,e) ;

// }

// int main()
// {
// int arr[] = {7,4,2,1,3,5,6,8,9} ;
// int n = 9;
// int s=0;
// int e= n-1 ;

// mergeSort(arr,s,e) ;

// cout << "my final array is : " ;
// for(int i=0;i<n;i++) {
//     cout << arr[i] << " ";
// }

// return 0;
// }

// #include <iostream>
// using namespace std;

// int partition(int arr[], int s, int e)
// {
//     int pivotindex = s;
//     int pivotelement = arr[s];

//     int count = 0;
//     for (int i = s+1 ; i <= e; i++)
//     {

//         if (arr[i] <= arr[pivotindex])
//         {
//             count++;
//         }
//     }
//     int rightindex = s + count;

//     swap(arr[rightindex], arr[pivotindex]);

//     pivotindex = rightindex ;

//     int i = s ;
//     int j = e ;

//     while (i < pivotindex && j > pivotindex)
//     {

//         while (arr[i] <= pivotelement)
//         {
//             i++;
//         }
//         while (arr[j] > pivotelement )
//         {
//             j--;
//         }

//         if (i < pivotindex && j > pivotindex)

//       {
//         swap(arr[i], arr[j]);
//       }

//     }
    
//     return pivotindex ;
// }
// void quickSort(int arr[], int s, int e)
// {

//     if (s >= e)
//     {
//         return;
//     }
//     int p = partition(arr, s, e);

//     quickSort(arr, s, p - 1);

//     quickSort(arr, p + 1, e);
// }

// int main()
// {
//     int arr[] = {8, 1, 3, 4, 20, 5,5,5,5,5,5,5,50, 30};
//     int n = 14 ;
//     int s = 0;
//     int e = n - 1;
//     quickSort(arr, s, e);

//    cout << "dileep " << endl ;

//    for(int i=0 ; i<n; i++) {
//         cout << arr[i] << " " ;
//     }
//     cout<< endl ;
//     return 0;
// }
// bool isSafe(int row, int col, vector<vector<char>> &board, int n) {
	
//  // check karna chahte h , k kya main 
//   //current cell [row,col] pr    QUEEN rakh 
//   //sakta hu ya nahi
//   int i = row;
//   int j = col;

//   //check row
//   while(j >= 0) {
//     if(board[i][j] == 'Q') {
//       return false;
//     }
//     j--;
//   }

//   //check upper left diaglnol 
//   i = row;
//   j = col;
//   while(i>=0 && j>=0 ) {
//     if(board[i][j] == 'Q'){
//       return false;
//     }
//     i--;
//     j--;
//   }


//   //check bottom left diagnol
//   i = row;
//   j = col;
//   while( i < n && j >=0) {
//     if(board[i][j] == 'Q') {
//       return false;
//     }
//     i++;
//     j--;
//   }

//   //kahin pr bhi queen nahi mili
//   //iska matlab ye position safe hai 
//   //iska matlab eturn kardo true
//   return true;   
// }

#include <iostream>
using namespace std;

int main()
{

return 0;
}
