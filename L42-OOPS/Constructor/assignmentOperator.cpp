#include <iostream>
using namespace std;
class Hero
{
private:
    int health;

public:
    char level;
    void print()
    {
        cout << "health : " << this->health << endl;
        cout << "level : " << this->level << endl;
    }
    char getLevel()
    {
        return level;
    }
    void setLevel(char level)
    {
        this->level = level;
    }
    int getHealth()
    {
        return health;
    }
    void setHealth(int health)
    {
        this->health = health;
    }
    // default
    Hero()
    {
        cout << "default constructor called" << endl;
    }
    // parametrised
    Hero(int health, char level)
    {
        cout << "parametrised constructor called" << endl;
        this->level = level;
        this->health = health;
    }
    // copy
    Hero(Hero &temp)
    {
        cout << "copy constructor called" << endl;
        this->level = temp.level;
        this->health = temp.health;
    }
};
int main()
{
    Hero h1(98, 'd');
    cout << "h1" << endl;
    h1.print();
    Hero h2(56, 'a');
    cout << "h2" << endl;
    h2.print();
    // copy assignment operator
    h1 = h2;
    cout << "h1" << endl;
    h1.print();
    cout << "h2" << endl;
    h2.print();
}
/*parametrised constructor called
h1
health : 98
level : d
parametrised constructor called
h2
health : 56
level : a
h1
health : 56
level : a
h2
health : 56
level : a*/