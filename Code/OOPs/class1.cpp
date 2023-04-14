

#include <iostream>
using namespace std;

class Animal
{
    // state
    // properties 
private:
    int weight;

public:
    int age;
   
    string type;
    
    // behaviour 
    // function define kr diye 
    void eat()
    {
        cout << " eating ";
    }
    void sleep()
    {
        cout << " sleeping ";
    }

    int getweight()
    {
        return weight;
    }
    void setweight(int w)
    {

        weight = w;
    }
};

Animal ramesh;
int main()
{
    ramesh.age = 12;
    ramesh.type = "lion";
    cout << " age of ramesh is : " << ramesh.age;
    cout << endl;
    cout << " name  of ramesh is : " << ramesh.type;
    cout << endl;
    ramesh.eat(); cout << endl ;
    ramesh.sleep(); cout << endl ;

    ramesh.setweight(500); 
    cout << endl ;
    cout << " weight =" << ramesh.getweight() << endl ;

    return 0;
}
