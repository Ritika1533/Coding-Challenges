#include <vector>
using namespace std;
void printVectorPair(vector<pair<int, int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second;
        cout << endl;
    }
}
int main()
{

    // vector<pair<int,int>> v={{6,7},{9,10},{15,16}};
    vector<pair<int, int>> v;
    int n;
    cin >> n;
    int x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        // v.push_back({x,y});
        v.push_back(make_pair(x, y));
    }
    printVectorPair(v);
}