#include <iostream>
#include <set>
using namespace std;
void printSet(set<string> &s)
{
    for (string value : s)
    {
        cout << value << " ";
    }
    cout << endl;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << " ";
    }
}
int main()
{
    set<string> s;
    s.insert("abv");
    s.insert("nmg");
    s.insert("avt");
    s.insert("olh");
    auto it = s.find("avt");
    if (it != s.end())
    {
        s.erase(it);
    }
    printSet(s);
    s.erase("nmg");
    printSet(s);
} /*
 abv nmg olh
 abv nmg olh abv olh
 abv olh*/