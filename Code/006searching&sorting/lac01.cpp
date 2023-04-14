
#include <iostream>
using namespace std;
bool keyFound(int arr[15],int size ) 
{
    int size = 15 ;
    int key ;
   cout<< " enter the key that " << endl ;
cin>> key ;
for(int i=0;i<size;i++)
{
    if(arr[i] == key)
    return true ;
} 
}

int main()
{
int arr[15]{1,2,3,4,5,6,7,11,22,33,77,99,0,67,88} ;
int size = 15 ;
int key ;

//  for(int i=0;i<size;i++)
// {
//     if(arr[i] == key)
//     {
//     cout<< " found " ;
//     }
   
// } 
bool key = keyFound(arr,size) ;
if (key)
{
cout<< keyFound << endl ;
}
else 
{ 
    cout << " not found" << endl ;
}
return 0;
}
