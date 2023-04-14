
// #include <iostream>
// #include<algorithm>
// using namespace std;
 
// string  removeDuplicate(string s )
// {
//     string ans ="";
//     int i=0;
//     while (i <= s.length()){
//         if(ans.length()>0 && ans[ans.length()-1] == s[i]){
//             ans.pop_back() ;
//         }
//         else {
//             ans.push_back(s[i]) ;
            
//         }
//         i++ ;
//     }
//     return ans ;
// }
// int main()
// {
// string s = {"babbar"} ;
// removeDuplicate(s) ;
// cout << "answer is : " << removeDuplicate(s)  << endl ;
// return 0;
// }

// #include <iostream>
// #include<string>
// using namespace std;

// string findOccurance(string s,string part){
//     int pos = s.find(part) ;
//     while(pos != string :: npos){
//         s.erase(pos, part.length()) ;
//         pos = s.find(part);
//     }
//     return s ;
// }

// int main()
// {
// string s= "daabcbaabcbc";
// string part= "abc";
// //findOccurance(s,part) ;
// cout<< "string is : "<< findOccurance(s,part)  ; 
// return 0;
// }

// #include <iostream>
// #include <vector>
// #include<string >
// #include<algorithm>
// using namespace std;

// bool cmp(char first, char second ){
//     return  first > second  ;
// }
// bool compare(int a ,int b){
//     return a>b;
// }


// int main()
// {
   
// string name {"babbar" };
// sort(name.begin(),name.end()) ;

// vector<int>arr {2,7,3,9,4,6,7,8} ;
// sort (arr.begin(),arr.end(),compare) ;
// for(int i=0;i<arr.size();i++) {
// cout << arr[i] << endl ;
// }

// //cout << name << endl ;
// return 0;
// }

#include <iostream>
#include<map>
using namespace std;

int main() {
map <int ,char> meraMap ;

meraMap[0] = 'a';
meraMap[1] = 'b';
meraMap[25] = 'z';

cout << " ans is " << meraMap[1] ;
return 0;
}
