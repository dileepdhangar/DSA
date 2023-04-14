
#include <iostream>
using namespace std;

int findMax(int num1,int num2,int num3)
{   
    if(num1>num2  && num1> num3)
    {
     return num1 ;
    }
    else if (num2 >num1 && num2 >num3)
    {
       return num2 ;
    }
    else
    {
      return num3;
    }
    
}

int main()
{
int a ,b ,c ;
cout<< " enter the a,b,c "<< endl ;
cin >> a ;
cout<< endl ;
cin >>b ;
cout<< endl ;
cin>>c ;
cout<< endl ;
int maxnumber = findMax(a,b,c) ;
cout<<  maxnumber;
return 0;
}
