#include <iostream>
#include<vector >
#include<algorithm>
using namespace std;

int main()
{
  vector<int>arr={2,4,4,4,4,4,4,6,8,10} ;
  int target = 4 ;
  int size =10 ;
  auto lower = lower_bound(arr.begin(),arr.end(),target) ;
  cout<< " lower bound is " << lower - arr.begin() ;
  int low = lower - arr.begin() ;
  auto upper = upper_bound(arr.begin(),arr.end(),target) ;
  cout<< " upper bound " << upper - arr.begin() ;
   int up  = upper - arr.begin() ;

  cout << " total accurance  : " << up - low +1 ;


return 0;
}