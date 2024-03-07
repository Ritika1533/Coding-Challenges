#include <iostream>
#include <vector>
using namespace std;
void printVector(const vector<int> &v)
{
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
        cout << endl;
    }
}
int main()
{
    int N;
    cout << "enter the size of vector array" << endl;
    cin >> N;
    vector<int> v[N];
    for (int i = 0; i < N; i++)
    {
        int n;
        cout << "enter the size of array in vector:" << endl;
        cin >> n;
        // taking user input of array element in vector
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for (int i = 0; i < N; i++)
    {
        printVector(v[i]);
    }
}