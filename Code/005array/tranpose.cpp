
#include <iostream>
using namespace std ;
void transposeArr( int arr[][3] ,int row ,int col,int transpose[][4] )
{ 
     for (int i=0; i<row; i++)
  {
    for(int j=0; j<col; j++)
    {
        transpose[j][i] = arr[i][j] ;
    } cout << endl ;
  }
}
int main()
{
int arr[4][3] ;
int col = 3 ;
int row = 4 ;
int transpose[3][4] ;
int r = 3;
int c = 4; 
cout<< " enter the element : " ;
for (int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        cin>> arr[i][j] ;
    }
}
cout<< " the formed arr is : " << endl ;
for (int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        cout<< arr[i][j] << " " ;
    } cout << endl ;
}
 transposeArr(arr,row,col,transpose ) ;

cout<< " the transposd  formed arr is : " << endl ;
for (int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        cout<< transpose[i][j] <<" ";
    } cout << endl ;
}


return 0;
}
