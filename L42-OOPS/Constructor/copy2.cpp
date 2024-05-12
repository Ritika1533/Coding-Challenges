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
    Hero h1(80, 'A');
    h1.print();
    Hero h2(h1);
    h2.print();
}
/*health : 80
level : A
health : 80
level : A*/
/*parametrised constructor called
health : 80
level : A
copy constructor called
health : 80
level : A*/
