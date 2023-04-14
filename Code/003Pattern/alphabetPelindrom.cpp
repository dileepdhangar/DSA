
// #include <iostream>
// using namespace std;

// int main()
// {
//   int row,col ;
//     int n;
//     cout << "emtr the velue of n " << endl ;
//     cin>> n ;
    

// for (row=1; row<=n; row=row+1)
//  { int m=1 ;
//    for (col=1;col<=row; col=col+1) {
//    cout<<m << " " ;
//    m++ ;
//  } cout<< endl ;
//  }
 
// return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int row,col ;
//     int n;
//     cout << "emtr the velue of n " << endl ;
//     cin>> n ;
    

// for (row=1; row<=n; row=row+1)
//  { //int m=1 ;
//    for (col=1;col<=row; col=col+1)
//     {
//    cout<<col << " " ;
//    //m++ ;
//     }
//    for(col=row-1; col>=1; col=col-1)
//    {
//     cout<< col << " ";
//    }
//   cout<< endl ;
//  }
 
// return 0;
// }


// #include <iostream>
// using namespace std;

// int main()
// {
//   int row,col ;
//     int n;
//     cout << "emtr the velue of n " << endl ;
//     cin>> n ;
    

// for (row=1; row<=n; row=row+1)
//  { //int m=1 ;
//  char ch = 'A' ;
//    for (col=1;col<=row; col=col+1) {
//    cout<< ch<< " " ;
//    ch++ ;
//  }
//  {
//     for(col=row-1; col>= 1; col= col-1)

//     {   
//         cout<<
//     }
//  } cout<< endl ;
//  }
 
// return 0;
// }
 
 #include <iostream>
using namespace std;

int main()
{
  int row,col ;
    int n;
    cout << "emtr the velue of n " << endl ;
    cin >> n ;
    char ch = 'A' ;

for (row=1; row<=n; row=row+1)
 { //int m=1 ;
   for (col=1; col<=row; col=col+1)
    {
 //  cout<<col << " " ;
 int ans = col ;
 char ch = ans + 'A' -1 ;
 cout << ch ;
   
   //m++ ;
    }
   for(col=row-1; col>=1; col=col-1)
   {
    //cout<< col << " ";
    int ans = col ;
    char ch = ans + 'A' -1 ;
    cout<< ch ;
   }
  cout<< endl ;
 }
 
return 0;
}
 
