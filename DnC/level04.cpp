#include <iostream>
#include<vector>
using namespace std;

 void print(vector<vector<char>> &dibba,int n){
    for(int i=0; i<n; i++){
      for(int j=0; j<n ;j++ ){

           cout << dibba[i][j] << " ";
          }
       cout   << endl ;
    }
    cout << endl << endl ;
 }


bool isSafe(vector<vector<char>> &dibba,int row,int col,int n){

     //same col
     int i=row ;
     int j = col;
     while(j>=0) {
     if(dibba[i][j] == 'Q'){
    return false ;
    }
       j-- ;
     }

      i = row ;
      j=col;
     
     while(j>=0 && i>= 0){ 
     if(dibba[i][j] == 'Q'){
      
        return false;
     }
       i--;
       j--;
     }
      i= row ;
      j=col;

     while(j>=0 && i<= n){
        if(dibba[i][j]=='Q'){
            return false; 
        }
        i++;
        j--;   
     }
     
     return true ;
  }

void solve(vector<vector<char>> &dibba,int col,int n) {

    //base case
    if(col>=n) {
        print(dibba,n);
        return;
    }

    //first case solve 
    for(int row=0; row<n; row++){

    if (isSafe(dibba,row,col,n)){
      dibba[row][col] = 'Q' ;

      solve(dibba, col+1, n);

      dibba[row][col] = '_' ;

}
}
}

int main()
{

int n=4;

vector<vector<char>> dibba(n ,vector<char>(n,'_')) ;

//qeen hsi to Q
//queen nhi hai to '-' 
int col=0;

solve(dibba,col,n) ;

return 0;
}