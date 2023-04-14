
#include <iostream>
using namespace std;

void  permutationStr(string & str,int i){

    if(i >= str.length()){
        cout << str << endl ;
    } 

    for(int j=i ; j<str.length(); j++){

        swap(str[i],str[j] ) ;
    
     permutationStr(str,i+1) ;

     swap(str[i],str[j] ) ;
    }
}

int main()
{

string str ="abc" ;
int i=0;

permutationStr(str,i) ;




return 0;
}
