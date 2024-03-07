#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<pair<int, int>> v_p;
    v_p = {{2, 3}, {3, 4}, {4, 5}};
    vector<pair<int, int>>::iterator it;
    for (it = v_p.begin(); it != v_p.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    for (it = v_p.begin(); it != v_p.end(); it++)
    {
        cout << (it->first) << " " << (it->second) << endl;
    }
}