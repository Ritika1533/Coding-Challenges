#include <iostream>
using namespace std;
class Animal
{
public:
    int leg;
    int tail;
    Animal()
    {
        leg = 4;
        tail = 1;
    }
};
class Dog : public Animal
{
public:
    void voice()
    {
        cout << " i bark" << endl;
    }
};

class Cat : public Animal
{
public:
    void food()
    {
        cout << " i eat fish" << endl;
    }
};
int main()
{
    Dog dd;
    Cat cc;
    cout << dd.leg << endl;
    cout << cc.leg << endl;
    dd.voice();
    cc.food();
}
/*4
4
 i bark
 i eat fish*/