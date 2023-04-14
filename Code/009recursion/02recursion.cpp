
// #include <iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// bool  checkSorted(vector<int>arr, int i,int n) {

//     if (i == n-1) {
//         return true  ;
//     }
//     if (arr[i+1]<arr[i])
//     {
//         return false ;
       
//     }
//     return checkSorted(arr,i+1,n) ;
// }

// int main()
// {
// vector<int>arr = { 10,20,30,40,50 ,60,80,90} ;
// int n = arr.size() ;
// int i = 0 ;

// bool ans =  checkSorted(arr,i,n) ;
// cout << "status is " << ans << endl ;

// return 0;
// }

// #include <iostream>
// #include<vector >
// using namespace std;

// bool ckeckSorted(vector<int>&arr,int i,int& n){

//     //best case
//     if(i == n-1) {
//         return true ;
//     }
//     if (arr[i+1]< arr[i]){
//         return false ;
//     }

//     return ckeckSorted(arr,i+1,n) ;

// }

// int main()
// {
// vector<int>arr = {10,20,30,40,50,60,85 ,70,80,90 } ;

// int n= arr.size() ;
// int i=0;

// bool ans = ckeckSorted(arr,i,n) ;
// if(ans) {
//     cout << "arr is sorted " << endl ;
// }
// else {
//     cout << " arr is not sorted " << endl ;
// }

// return 0;
// }

// #include <iostream>
// #include<vector >
// using namespace std;

// int findElement(vector<int>&arr,int s ,int e,int target){
//           int mid = s+(e-s)/2 ;
//           //best case
//           if(s>e)
//           return -1;

//           if(arr[mid] == target){
//             return mid ;
//           }
//           if(target>arr[mid]){
//             return findElement(arr,mid+1,e ,target) ;
//           }
//           else {
//             return findElement(arr,s,mid-1,target) ;
//           }


// }

// int main()
// {
// vector<int>arr = { 10,20,40,60,70,80,90} ;
// int n = arr.size()-1;
// int s=0;
// int e=n-1;

// int target = 20;
// int ans = findElement(arr,s,e,target);
// cout << " index is " << ans << endl ;
// return 0;
// }

// #include <iostream>
// #include<vector>
// using namespace std;


// void printAllstring(string str,string extra,int i,vector<string>& v){
//      int n = str.length();
//     //bese case 
//      if(i==n){
//         // cout << extra << endl  ;
//         v.push_back(extra) ;
//         return ;
//      }

//     //exclude 
//      printAllstring(str,extra,i+1,v) ;
//     //include
//     extra.push_back(str[i])  ;
//     printAllstring(str,extra,i+1,v) ;
   
// }

// int main()
// {
// string str = "abc" ;
// string extra = " ";
// int  i=0;
// vector<string>v={};

// printAllstring(str,extra,i,v) ;
// for(auto i:v) {
//     cout << i << "," ;

// }
// cout << v.size() <<endl ;

// return 0;
// }

// #include <iostream>
// using namespace std;

// void printDigit(int num ) {
//    //base case
//    if(num==0) {
//      return ;
//    }
//   ///baki recursion shmbhal lega 
//      printDigit(num/10 ) ;
//    //1st case  
//      int ans = num%10  ;
//      cout << ans << endl ;
// }

// int main()
// {
// int num = 2000 ;
// if (num =0){
//     cout << 0 << endl ;
// }

// printDigit(num ) ;
// return 0;
// }

#include <iostream>
#include<vector>
using namespace std;

int solve(vector<int>arr,int target) {
    int n = arr.size() ;
    //base case
    if(target ==0) {
        return 0;
    }
    if (target <0){
        return INT_MAX;
    }
    int mini = INT_MAX ;
    for(int i=0; i<n ; i++ ) {
    int ans = solve(arr,target - arr[i]) ;
    
     if (ans != INT_MIN){
        mini = min(mini , ans +1)  ;
    }
    }
     return mini ;
   
}

int main()
{
int target = 5;
vector<int> arr = {2,3} ;

int ans = solve(arr,target) ;
cout << " ans is " << ans << endl ;
return 0 ;
}

