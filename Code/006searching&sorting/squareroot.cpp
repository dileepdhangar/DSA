
// #include <iostream>
// using namespace std;
// int sqrRoot(int target)
// {
//   int s=0;
//   int end = target ;
//   int mid = s+ (end-s)/2 ;
//   int ans = -1 ;
//   while (s<end )
//   {
//     if (mid*mid == target){
//         ans = mid ;
//     }
//     else if (mid * mid < target){
//         //right search
//         s= mid +1 ;
//         ans = mid ;
//     }
//     else if (mid * mid > target){
//         //left search
//         end = mid -1  ;
//     }
//     mid = s  - (end -s)/2 ;


//   }
//   return ans ;
// }
// int main()
// {
// int target ; 
// cout << " enter the number n: " << endl ;
// cin >> target ;
// int ans = sqrRoot(target) ;
// cout << " square root is :" << ans  ;
// return 0;
// }
// #include <iostream>
// using namespace std;

// int findsqrRoot(int n) {
//   int target = n ;  
//   int s = 0;
//   int end = n;
//   int mid = s + (end - s) / 2;
//   int ans = -1;
//   while (s <= end) {
//     if (mid * mid == target) 
//       return mid;
//       ans = mid ;
//       if (mid * mid < target) {
//       // right search
//       s = mid + 1;
//       ans = mid;
//     } else  {
//       // left search
//       end = mid - 1;
//     }
//     mid = s - (end - s) / 2;
//   }
//   return ans;
// }
// int main() {
//   int n;
//   cout << " enter the number n: " << endl;
//   cin >> n;
//   int ans = findsqrRoot(n);
//   cout << " square root is :" << ans;
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int findSqaure(int n) 
// {  
//    int target = n ;
//    int s= 0;
//    int end = n ;
//    int mid = s + (end - s )/2 ;
//    int ans =-1 ;
//    while(s<= end )
//    {
//     if (mid*mid == target)
//     {
//         return mid ;
//     }
//     else if (mid * mid < target )
//     {
//         s = mid +1 ;
//         ans = mid ;
//     }
//      else 
//     {
//         end = mid -1 ;
//     }
//     mid = s+ (end - s) /2 ;
//    }
//    return ans ;
// }

// int main()
// {
// int n;
// cout<< " enter the value of n : " << endl ;
// cin>> n ;
// int ans = findSqaure(n) ;
// return 0;
// }

// #include <iostream>
// using namespace std;
// int findsqrt(int n) 
// {
//     int target = n;
//     int s=0;
//     int e=n;
//     int mid = s+ (e-s)/2 ;
//     int ans = -1 ;

//     while(s<=e)
//     {
//         if(mid*mid == target) 
//         return mid ;
//         if(mid*mid > target)
        
//           e = mid -1 ;
        
//         else 
//         {   
//             ans = mid ;
//             s= mid + 1;
//         }
//         mid = s+(e-s)/2 ;
//     }   
//     return ans ;
// }

// int main()
// {
// int n ; 
// cout << " enter the number " << endl ;
// cin>> n ;
// int ans = findsqrt(n) ;
// cout << " ans is " << ans << endl ;
// return 0;
// }

#include <iostream>
using namespace std;

int main()
{
int n = 11 ;    
double ans = 3 ;
int precision ;
double step = 0.1 ;
cout << " entr the precision value : " << endl ;
cin>> precision ;
for (int i=0 ; i < precision ;i++) 
    {
        for (double j=ans ; j*j <= n; j= j+step )
        {
            ans = j ;
        }
        step = step/10 ;
    }
    cout<< " final ans is " << ans << endl ;
return 0;
}
