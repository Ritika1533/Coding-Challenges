#include <iostream>
using namespace std;
class Human
{
public:
    int height;
    int weight;
    int age;
    int getWeight()
    {
        return weight;
    }
    void setWeight(int weight)
    {
        this->weight = weight;
    }
    void work()
    {
        cout << "i can work" << endl;
    }
};
class Female : private Human
{
public:
    string color;
    void hobbie()
    {
        cout << "i can dance" << endl;
    }
    int getHeight()
    {
        return height;
    }
};
int main()
{
    Female ff;
    // cout<<ff.height<<endl;==> can't access directly use getter setter
    cout << ff.getHeight();
}