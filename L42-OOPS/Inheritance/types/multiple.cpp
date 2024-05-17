#include <iostream>
using namespace std;
class Son
{
public:
    void nature()
    {
        cout << "i am a good son" << endl;
    }
};
class Husband
{
public:
    void personality()
    {
        cout << " iam a good husband" << endl;
    }
};
class Boy : public Husband, public Son
{
public:
    void character()
    {
        cout << "i am good boy" << endl;
    }
};
int main()
{
    Boy bb;
    bb.nature();
    bb.personality();
    bb.character();
}
/*i am a good son
 iam a good husband
i am good boy*/