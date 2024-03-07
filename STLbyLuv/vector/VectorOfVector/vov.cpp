#include <iostream>
#include <vector>
using namespace std;
void printVector(const vector<int> &v)
{
    //	cout<<"size: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    cout << endl;
}
int main()
{
    int N;
    cout << "enter size of vector:" << endl;
    cin >> N;
    vector<vector<int>> v;
    for (int i = 0; i < N; i++)
    {
        int n;
        cout << "enter the size of inner vector:" << endl;
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); i++)
    {
        printVector(v[i]);
    }
}