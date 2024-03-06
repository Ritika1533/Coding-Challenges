#include <iostream>
using namespace std;
int main()
{
    pair<int, string> p; // decleration
    // p=make_pair(67,"ndr");  //initialization 1st way
    p = {67, "ndr"}; // initialization 2nd way
    pair<int, string> &p1 = p;
    p1.first = 7;
    // cout<<p.first<<p.second;
    // array pair
    int a[] = {4, 7, 9, 8};
    int b[] = {23, 89, 6};
    pair<int, int> p_array[3];
    p_array[0] = {4, 23};
    p_array[1] = {7, 89};
    p_array[2] = {9, 6};
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << "\t" << p_array[i].second << endl;
    }
    pair<int, int> p2;
    cin >> p2.first;
    cout << p2.first;
}