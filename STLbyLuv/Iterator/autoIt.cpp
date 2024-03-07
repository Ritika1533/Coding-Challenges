#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {5, 8, 9, 0, 4};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    vector<int>::iterator it;
    //	cout<<endl<<*it<<endl;  5
    //	cout<<endl<<*(it+3)<<endl;  0
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << endl
             << *(it) << endl;
    }

    // REFERENCE LOOP  ->> here copy of element of v is created
    cout << "auto iterator" << endl;
    for (int value : v)
    {
        cout << value << " ";
    }
    for (int &value : v)
    {
        value++;
    }
    cout << endl
         << "auto iterator" << endl;
    for (int value : v)
    {
        cout << value << endl;
    }
}