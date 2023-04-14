#include <iostream>
using namespace std;
int main()
{
    int i;

    // for (i=0 ;i<5 ;i=i+1)
    // cout<< "values of i is" <<endl ;
    for (i = 1; i <= 10; i = i + 3)
    {
        cout << i << endl;
    }
    for (i = 100; i >= 1; i = i / 2)
    {
        cout << i;
    }
    i = 1;
    for (;;)
    {
        if (i <= 10)
        {
            cout << i << endl;
            i = i + 1;
        }
    }

    int n;
    if (cin >> n)
        cout << "babbar";
}
