#include <iostream>
#include <set>
using namespace std;
void printSet(multiset<string> &s)
{
    for (string value : s)
    {
        cout << value << " ";
    }
    cout << endl;
}
int main()
{
    multiset<string> s;
    s.insert("abv");
    s.insert("nmg");
    s.insert("avt");
    s.insert("olh");
    s.insert("olh");
    s.insert("olh");
    s.insert("olh");
    s.insert("olh");
    s.insert("olh");
    printSet(s);
    auto it = s.find("olh");
    if (it != s.end())
    {
        s.erase(it);
    }

    s.erase("olh");
    printSet(s);
} /*abv nmg olh olh olh
 abv olh olh olh*/

/*abv avt nmg olh olh olh olh olh olh
abv avt nmg*/