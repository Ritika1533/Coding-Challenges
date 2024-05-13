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
class Female : public Human
{
public:
    string color;
    void hobbie()
    {
        cout << "i can dance" << endl;
    }
};
int main()
{
    Female ff;
    ff.setWeight(60);
    cout << "female weight is : " << ff.getWeight() << endl;
    cout << "work : ";
    ff.work();
    cout << "hobbies : ";
    ff.hobbie();
}
/*female weight is : 60
work : i can work
hobbies : i can dance*/