#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="bheem";
    m[5]="chutki";
    m[13]="raju";
    m.insert({7,"kalia"});
    cout<<"before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"finding 13 :"<<m.count(13)<<endl;
    cout<<"after erase"<<endl;
    m.erase(13);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    auto it=m.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
    cout<<m.empty()<<endl;
    cout<<m.size()<<endl;
}