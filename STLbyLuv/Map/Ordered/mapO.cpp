#include <iostream>
#include <map>
using namespace std;
void printMap(map<int, string> &m)
{
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " " << (it->second) << endl;
    }
}
int main()
{
    map<int, string> m;
    m[1] = "abc";
    m[5] = "fca";
    m[3] = "rfca";
    m.insert({7, "png"});
    m.insert(make_pair(2, "opi"));
    m[9];
    //	map<int,string> :: iterator it;
    //	for(it=m.begin();it!=m.end();it++){
    //		cout<<(*it).first<<" "<<(it->second)<<endl;
    //	}
    printMap(m);
}
/*
1 abc
2 opi
3 rfca
5 fca
7 png
9
*/