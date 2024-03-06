#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    cout << "capacity->" << v.capacity() << endl;
    v.push_back(78);
    cout << "capacity->" << v.capacity() << endl;
    v.push_back(99);
    cout << "capacity->" << v.capacity() << endl;
    v.push_back(908);
    cout << "capacity->" << v.capacity() << endl;
    cout << "size->" << v.size() << endl;
    v.clear();
    cout << "size->" << v.size() << endl;
    cout << "capacity->" << v.capacity() << endl;
}