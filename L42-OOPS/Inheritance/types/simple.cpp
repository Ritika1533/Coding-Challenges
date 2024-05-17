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

int main()
{
    Dog dd;
    cout << dd.leg << endl;
    dd.voice();
}
/*4
 i bark*/