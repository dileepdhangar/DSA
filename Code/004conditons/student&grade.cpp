
#include <iostream>
using namespace std;

char getgrade(int i)
{
//{
    // if ( marks >=90 ) 
    // { 
    //   return 'A';  
    // }
    // else if (marks >= 80)
    // {
    //     return 'B' ;
    // }
    //  else if (marks >= 70)
    // {
    //     return 'C' ;
    // }
    //  else if (marks >= 60)
    // {
    //     return 'D';
    // }
    //  else 
    // {
    //     return 'E';
    // }
    //}
    switch(i/10) {
        case 10 : return 'A' ; break ;
        case 9 : return 'A' ; break ;
        case 8: return 'B' ; break ;
        case 7 : return 'C' ; break ;
        case 6: return 'D' ; break ;
        default : return 'E' ;
                 }
    }

int main()
{ //int  marks ; 
//  cout << " enter your marks " << endl ;
//  cin >> marks ;
int i ;

char ans  = getgrade(i) ;

for(i = 1; i<= 100 ; i++) 
{
cout<<"grade for your no = " << i <<"is"<< ans << endl ;
}
return 0;

}

