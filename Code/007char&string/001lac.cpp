
// #include <iostream>
// using namespace std;

// int main()
// {
// char name[20] ;
// cout << " enter your name " << endl ;
// cin >> name ;
//  cout << " entered name is : " ;
// for (int i=0 ; i<13 ; i++) {
//    cout  << name [i] << " " ;
// }

// return 0;
// }

// #include <iostream>
// #include <string.h>
// using namespace std;

// int getlength(char name [100]){
//     int i=0 ;
//     int length =0 ;
//     while(name[i] != '\0' ){
//         i++ ;
//         length++ ;
//    }
//     return length ;
// }
// int reversestring(char name [100] ){
//       int i=0;
//       int size = getlength(name ) ;
//       int e= size-1 ;
//       while(i<=e){
//         swap (name [i] ,name [e]);
//         i++ ;
//         e-- ;

//       }
// }
// void replacespaces(char sentence[]){
//     int i=0;
//     int n = strlen(sentence) ;
//     for (int i=0;i<n;i++){
//         if(sentence[i]== ' ') {
//            sentence[i]= '@' ;
//         }
//     }


// }
// int main()
// {

// char name[100] ;
// cout << " enter the name  : " << endl ;
// cin>> name ;
// cout<< " length is: " << getlength(name) << endl ;
// cout<< strlen(name ) << endl ;

// cout <<"before  " <<name << endl ;
// reversestring(name ) ;
//cout <<  "after  " << name << endl ;

// char sentence[100] ;
// cin.getline(sentence,100) ;
// replacespaces(sentence) ;
// cout << " printing sentence " << endl << sentence ;
// return 0;
// }


// #include <iostream>
// #include<string.h>
// using namespace std;

// // int getlength(char name [100]){
// //     int i=0 ;
// //     int length =0 ;
// //     while(name[i] != '\0' ){
// //         i++ ;
// //         length++ ;
// //    }
// //     return length ;
// // }
// void replaceSpaces(char sentence[]){
    
//       int size = strlen(sentence) ;
//       for (int i=0;i<size ;i++){
//           if (sentence[i]==' ')
//           {
//             sentence[i] = '@' ;
//           }
//       }
// }
// int main()
// {
// char sentence[100] ;
// cout << " enter string " ;
// cin.getline(sentence,100) ;

// replaceSpaces(sentence) ;

// cout << " array is : " << endl << sentence ;
// return 0 ;
// }

// #include <iostream>
// #include<string.h>
// using namespace std;
// void putspaces(char sentence[]) {
//      int size = strlen(sentence) ;
//      for (int i=0;i< size ; i++) {
//           if (sentence[i]== ' '){
//             sentence[i]= '@' ;
//           }
//      }

// }

// int main()
// {

// char sentence[100] ;
// cout<<" enter sentence " ;
// cin.getline(sentence,100) ;
// putspaces(sentence) ;

// cout <<" final string is :" << endl << sentence ;

// return 0;
// }

// #include <iostream>
// #include<string.h>
// using namespace std;

// bool checkpalindrome(char name[] ){
//    int i=0 ;
//    int e = strlen(name) ;
//    for (i=0;i<e;i++) {
//         if(name [i]!=name [e]){
//             return false ;
//         }
//         else {
//             i++;
//             e++;
//         }
//    }
// return true ;
// }

// int main()
// {
// char name [100] ;
// cin>> name ;
// checkpalindrome(name) ;
// cout << "status" << checkpalindrome ;
// return 0;
// }

// #include <iostream>
// #include<string.h>
// using namespace std;
// bool checkpalindrome (char name[])
// {
    
//     int e= strlen(name) ;
//     //cin.getline(name ,100) ;
//     for (int i=0;i<e; i++){
//        if (name[i] != name [e]){
//         return false ;
//      }
//        else {
//            i++ ;  
//            e-- ;
//        }
//     }
//     return true  ;
// }
// int main()
// {
// char name[100]    ;
// cout<< " enter : " ;
// cin>> name ;

// checkpalindrome(name) ;
// cout << " status palindrme is : " << checkpalindrome(name) ;
// return 0 ;
//  }
// #include <iostream>
// #include<string.h>
// using namespace std;

// bool checkpalindrome(char name[] ){
//    int i = 0 ;
//    int size = strlen(name) ;
//    int e = size -1 ;
//    while(i<size)
//     {
//         if(name [i]  != name [e]){
//             return false ;
//         }
//         else {
//             i++ ;
//             e-- ;
//         }
//    }
// return true ;
// }

// int main()
// {
// char name [] = "deebeed" ;
// //cin>> name
// checkpalindrome(name) ;

// cout << "status" << checkpalindrome(name ) ;

// return 0;
// }

// #include <iostream>
// #include<string.h>
// using namespace std;

// void convertintoUppercase(char name[]){
//     int e = strlen (name) ;
//     for (int i=0; i<e; i++){
//         name[i] = name [i] -'A' + 'a' ;
//     }
    
    
// }
// int main()
// {
// char name[100] ;
// cin.getline (name ,100) ;
// convertintoUppercase(name) ;
// cout << "array is :" << name;
// //cout << " result "<< endl  << convertintoUppercase(name) << endl ;
// // char value = convertintoUppercase(name);
// // cout << "array si : " << convertintoUppercase(name) ;

// return 0;
// }

#include <iostream>
#include<string>
using namespace std;

bool comparestring(string a,string b){
     if(a.length()!= b.length()) {
        return false ;
     }
     else {
     
     int n = a.length() ;
     for(int i=0; i<n; i++) {
        if (a[i] != b[i]){
            return false ;
        }
       }
     }
     return true ;
}

int main()
{
    string a= "amanda";
    string b= "amanda" ;
// string str ;
// cin >> str ;
// cout<< str ;
// cout<< str.substr(2,5) << endl ;
// str.push_back('H') ;
// cout << str << endl ;
// str.pop_back();
// cout << str << endl ;
// cout << " length " << str.length() ;
// cout << " empty : " << str.empty() ;
// cout<< str<< endl  ;
// string x = "love";
// string y = "love";
// if (x.compare(y)==0){
//     cout<< "x and y are same :" ; }
//     else {
//         cout << "x and y are not same : " ;
//     }
// comparestring(a,b) ;
// if (comparestring(a,b)){
// cout << "strings are same : " ;
// }
// else 
// {
//     cout << " string are not same " ;
// }

string x = "cdcd" ;
string y = "cecd" ;
cout << x.compare(y) << endl  ;
return 0;
}
