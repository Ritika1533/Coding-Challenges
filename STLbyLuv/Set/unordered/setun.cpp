#include <iostream>
#include <unordered_set>
using namespace std;
void printSet(unordered_set<string> &s)
{
    for (string value : s)
    {
        cout << value << " ";
    }
    cout << endl;
}
int main()
{
    unordered_set<string> s;
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
} /*nmg olh abv
 olh abv*/