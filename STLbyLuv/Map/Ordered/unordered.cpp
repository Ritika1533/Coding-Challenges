#include<iostream>
#include<unordered_map>
using namespace std;

void printMap(unordered_map<int, string> &m){
    for(auto it = m.begin(); it != m.end(); it++){  //o(1)
        cout << (*it).first << " " << (it->second) << endl;
    }
}

int main(){
    unordered_map<int, string> m;
    m[1] = "abc";
    m[5] = "fca";
    m[3] = "rfca";
    m.insert({7, "png"});  //o(1)
    m.insert(make_pair(2, "opi"));
    // m[9]; // This line adds a default-constructed string for key 9
    // To check for the existence of key 9, you can use the find function:
    if(m.find(9) == m.end()){
        cout << "Key 9 not found." << endl;
    }
    
    printMap(m);
    cout << endl;

    auto it = m.find(0);
    if(it == m.end()){
        cout << "No value" << endl;
    } else {
        cout << (*it).first << (*it).second;
    }

    return 0;
}
/*Key 9 not found.
2 opi
7 png
3 rfca
5 fca
1 abc

No value*/