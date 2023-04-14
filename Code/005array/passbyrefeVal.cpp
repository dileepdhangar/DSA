
// #include <iostream>
// using namespace std;
// void printArr(int arr[], int size)
// {
//    for (int i=0;i<size; i++)
//    {
//     cout<< arr[i]<< " "  ;
//    }cout<< endl;
// }
// void incri(int brr[], int size)
// {
//     brr[0]=brr[0]+10 ;

//     cout<< " after incriment the arr is : "<< endl ;
//     printArr(brr,size) ;
// }


// int main()
// {
// int arr[2] = {2,5} ;
// int size = 2 ;
// incri(arr,size) ;
// cout<< " main arr given is :" << endl ;
// printArr(arr,size) ;
// return 0;
// }

// #include <iostream>
// using namespace std;
// void printArr(int arr[],int size)
// {   for(int i=0; i<size; i++)
// {
//     cout<<arr[i] << " ";
// }
// void changeArr(int arr[],int size)
// {
//     arr[0] = 10;
//     arr[1] = 35 ;
//     arr[2] = 67 ;
//     printArr(arr,size) ;
// }
// #include <iostream>
// using namespace std;

// void printArr(int arr[],int size)
// {   
//     for(int i=0; i<size; i++)
// {
//     cout<<arr[i] << " ";
// }  cout << endl ;
// }
// void changeArr(int arr[],int size)
// {
//     arr[0] = 10;
//     arr[1] = 35 ;
//     arr[2] = 67 ;
//     printArr(arr,size) ;
// }


// int main()
// {
// int arr[] = {1,2,3} ;
// int size = 3;
// changeArr(arr,size);

// printArr(arr,size) ;
// return 0;
// }
#include <iostream>
using namespace std;

void printArr(int arr[],int size)
{   
    for(int i=0; i<size; i++)
{
    cout<<arr[i] << " ";
}  cout << endl ;
}
void changeArr(int arr[],int size)
{
    arr[0] = 10;
    arr[1] = 35 ;
    arr[2] = 67 ;
    printArr(arr,size) ;
}


int main()
{
int arr[] = {1,2,3} ;
int size = 3;
changeArr(arr,size);

printArr(arr,size) ;
return 0;
}

