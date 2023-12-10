
#include<iostream>
#include<vector>
using namespace std;
int main(){
	
	vector<int> v;
	vector<char>ch;
    cout<<"vector size"<<v.capacity()<<endl;
    v.push_back(67);
    cout<<"vector size"<<v.capacity()<<endl;
    v.push_back(69);
    cout<<"vector size"<<v.capacity()<<endl;
    v.push_back(55);
    cout<<"vector size"<<v.capacity()<<endl;
    cout<<"no. of element in vector "<<v.size()<<endl;
    cout<<"element at index 2: "<<v.at(2)<<endl;
    cout<<"element at index 0: "<<v.at(0)<<endl;
    cout<<"first element: "<<v.front()<<endl;
    cout<<"first element: "<<v.back()<<endl;
    cout<<"before poping element"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i];
        cout<<"\t";
    }
    cout<<endl;
    v.pop_back();
    v.pop_back();
     cout<<"after poping element"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i];
        cout<<"\t";
    }
    cout<<endl;
    cout<<"before clear size: "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size: "<<v.size()<<endl;
    cout<<"after clear the capacity: "<<v.capacity()<<endl;
    
}
