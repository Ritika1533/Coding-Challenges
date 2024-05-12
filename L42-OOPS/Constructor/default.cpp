#include <iostream>
using namespace std;
class Hero
{
private:
    char level;

public:
    int health;
    char getLevel()
    {
        return level;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
    // default constructor
    Hero()
    {
        int a;
        cout << "i am a default constructor" << endl;
        cin >> a;
        cout << a;
    }
};
int main()
{
    cout << "hi" << endl;
    Hero h1;
    cout << "hello" << endl;
    Hero *h2 = new Hero;
}
/*hi
i am a default constructor
hello
i am a default constructor*/