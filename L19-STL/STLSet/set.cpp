#include<iostream>
#include<set>
using namespace std;
int main(){
    set <int> s;
    s.insert(7);
    s.insert(3);
    s.insert(7);
    s.insert(5);
    s.insert(3);
    s.insert(0);
    s.insert(7);
    s.insert(3);
    s.insert(30);
    for(int i:s){
        cout<<i<<"\t";
    }
    cout<<endl<<"size:"<<s.size()<<endl;
    cout<<"is empty?? : "<<s.empty()<<endl;
    cout<<"erasing 2nd element:"<<endl;
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    for(int i:s){
        cout<<i<<"\t";
    }
    cout<<endl<<"is 10 present?? : "<<s.count(10);
}