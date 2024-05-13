#include <iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "eating..." << endl;
    }
};
class Dog : public Animal
{
public:
    void eat()
    {
        cout << "eating bread..." << endl;
    }
};
class Cat : public Animal
{
public:
    void eat()
    {
        cout << "eating rat..." << endl;
    }
};
class Lion : public Animal
{
public:
    void eat()
    {
        cout << "eating meat..." << endl;
    }
};

void main()
{
    Animal aa;
    Dog dd;
    Cat cc;
    dd.eat();
    cc.eat();
}
