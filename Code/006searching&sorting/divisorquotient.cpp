
// #include <iostream>
// using namespace std;
// int findquotient(int dividend,int divisor){
//     int s= 0;
//     int e= abs(dividend) ;
//     int mid = s+(e-s)/2 ;
//     int ans = 0;
//     while(s<=e){
//         if(abs(mid*divisor) == abs(dividend))
//         {
//             ans = mid ;
//             break ;
//         }
//         if (abs(mid*divisor)>abs(dividend)){
//             //left search 
//             e= mid-1 ;
//         }
//         else{
//             s= mid +1 ;
//             ans = mid ;
//         }
//         mid = s+ (e-s)/2 ;
//     }  
//     if (dividend<0 && divisor<0 || dividend>0 && divisor>0){
//         return ans ;
//     }
//     else {
//         return -ans ;
//     }

// }

// int main()
// {
// int dividend = 36;
// int divisor = 7;
// int quotient = findquotient(dividend,divisor) ;
// cout<< " quotient is : " << quotient << endl ; 
// int precision ;
// cout << " enter the precision value  : " << endl ;
// cin>> precision ; 
// int step = 0.1 ;
// int finalans = quotient ;
// for(int i=0;i<precision; i++) {
//     for (int j = finalans ; j*divisor <= dividend ; j = j+step){
//             j= finalans ;
//     }
//     step = step/10 ;
// }
// cout<< " result is : " << finalans ;
// return 0;
// }

#include <iostream>
#include<vector>
using namespace std;
int findoddelement(vector<int>arr){
       int s=0;
       int e= arr.size() ;
       int mid = s+(e-s)/2 ;
       while(s<=e){
        if(s==e){
        return s;
        break ;
        }
        if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                s= mid+2 ;
            }
            else {
                e= mid  ;
            }
        }
        else{
            if(arr[mid]==arr[mid-1])
            {
                s= mid ;
            }else {
                e= mid-1 ;
            }
        }
        mid = s+(e-s)/2 ;
       }
       return -1 ;

}
int main()
{
vector<int>arr{1,1,2,2,3,3,4,4,3,600,600,4,4} ;

int ans = findoddelement(arr) ;
cout <<" the odd element index is :   "<< ans << endl ; 
cout << " odd element is  :" << arr[ans]  << endl ; 

return 0;
}

