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
class Germansafered : public Dog
{
public:
    void smart()
    {
        cout << "i am smart" << endl;
    }
};
int main()
{
    Germansafered gs;
    cout << gs.leg << endl;
    gs.voice();
    gs.smart();
}
/*4
 i bark
i am smart*/