
// #include <iostream>
// using namespace std;

// int main()
// {
// int arr[] = { 2,9,7,5,8,6,4}  ;
// int size = 7 ;
// for (int i=0; i<7; i++ )
// {
//     if((arr[i]==6))
//     {
//     cout<< "index " << i<< " " << "of " << "arr["<<i << "]" << "is =  6 : " ;
//     }
//     else 
//     {
//       cout<< " no found 6"  ;
//     }
// }
// return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
// int arr[] = {2,4,6,7,8,9,1,0,5} ;
// int size = 9 ;
// int key ;
// cout<< " entre the key that we have to check :" << endl;
// cin>> key ;
// bool flag = 0 ;
// for(int i=0; i<size; i++)
// {
//     if(arr[i]== key)
//     flag =1 ;
// }
// if(flag)
// {
//     cout<< "found" ;
// }
// else
// {
//  cout<<   "not found " ;
// }
// return 0;
// }
 
 #include <iostream>
 using namespace std;
 bool check(int arr[],int size,int key)
    {  
        for(int i=0;i<size;i++)
        {
            if(arr[i]= key)
            return true;
        }
        return false ;
    }

 int main()
 {
 int arr[]={2,5,6,7,9,8,0,3,4};
 int size = 9;
 cout<< " enter the key that have to chhekc : " ;
 int key ;
 cin>> key ;
 bool ans = check(arr,size,key) ;
 if(ans== true)
 {
 cout<< "present "; }
 else
 {
 cout<< " absent" ;
  }
   return 0;
 }
 