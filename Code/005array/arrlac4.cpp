
// #include <iostream>
// using namespace std;

// void printSum (int arr[][3], int row,int col)
// {
//     for(int i=0;i<row;i++)
//     {     int sum =0;
//         for(int j=0;j<col;j++)
//         {
//             sum = sum + arr[j][i]  ;
//         }   cout<< sum << endl;
//     }

// }
// int main()
// {
//     int arr[3][3] ;
//     int row =3 ;
//     int col =3 ;
//     cout<< " enter the element in arr" << endl ;
  
// for(int i=0; i<3; i++)
// {
//     for (int j=0;  j<3; j++)
//     {
//         cin>> arr[i][j]   ;
//     } cout<< endl ;
// }
// for(int i=0;i<3; i++)
// {
//     for (int j=0;j<3;j++)
//     {
//         cout<<  arr[i][j]  << " " ;
//     }   cout<< endl ;
// }
// printSum( arr ,row ,col) ;

// return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
// int arr[3][3] {{2,3,4},{5,6,7},{9,0,7,}}  ;

// for(int i=0;i<3; i++)
// {
//     for (int j=0;j<3;j++)
//     {
//         cout<<  arr[i][j]  << " " ;
//     }   cout<< endl ;
// }

// return 0;
// }

#include <iostream>
using namespace std;
bool findKey(int arr[][3],int row, int col,int key )
{
    for(int i=0;i<row;i++)
        {
        for(int j=0;j<col;j++)
        {
          if(arr[i][j]== key )
          return true ;
        }
        }
     return false ;  
       
}
int getMin(int arr[][3],int row,int col)
{    int min=INT_MAX ;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
        {
           if( arr[i][j] < min )
           {
            min = arr[i][j] ;
           }
           
        }
    }
       return min ;
}
void transposeArr(int arr[][3], int row ,int col,int transpose[][3]) 
{
     for(int i=0;i<row;i++)
     {
        for(int j=0;j<col;j++)
        {
            transpose[i][j] = arr[i][j]  ;
        }
     }
}
int main()
{
int arr[3][3] ;
int row = 3;
int col= 3;
int key;

cout<< " enter the elemenyt in arr : ";
for(int i=0;i<row;i++)
{
    for(int j=0;j<row;j++)
    {
        cin>> arr[i][j] ;
    }
}

for(int i=0; i< row;i++)
{
    for (int j=0;j< col; j++ )
    {cout<< arr[i][j]<< " " ;}
    cout << endl ;
}
int min = getMin(arr,row,col) ;
cout<<" min no is :" << min << endl ;
// cout<< " enter the key to search : ";
// cin>> key ;

//cout<< findKey(arr,row,col,key) << " ";
// if(findKey(arr,row,col,key))
// {
//     cout<< " true " ;
// }
// else  
// cout<< "false " ;
int transpose[3][3];
transposeArr(arr,row,col,transpose ) ;
return 0;


}

