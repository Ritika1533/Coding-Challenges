#include <iostream>
using namespace std;
class Hero
{
public:
    static int timeTocomplete;
    static int completeTime()
    {
        return timeTocomplete;
    }
};
int Hero ::timeTocomplete = 20;
int main()
{
    cout << Hero ::timeTocomplete << endl;
    Hero h1;
    cout << Hero ::timeTocomplete << endl;
    cout << Hero ::completeTime();
}
/*20
20
20*/