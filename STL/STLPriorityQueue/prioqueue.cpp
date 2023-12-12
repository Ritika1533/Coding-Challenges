#include<iostream>
#include<queue>
using namespace std;
int main(){
    //maxm priority queue
    priority_queue<int> maxi;
    //minm priority queue
    priority_queue<int,vector<int>,greater<int> > mini;
    maxi.push(1);
    maxi.push(10);
    maxi.push(7);
    maxi.push(3);
    cout<<"size:"<<maxi.size()<<endl;
    int n=maxi.size();
    for(int i=0;i< n;i++){
    cout<<maxi.top()<<"\t";
    maxi.pop(); 
    }
    mini.push(78);
    mini.push(55);
    mini.push(675);
    mini.push(24);
    mini.push(-32);
    cout<<endl;
   cout<<"size:"<<mini.size()<<endl;
    int y=mini.size();
    for(int i=0;i< y;i++){
    cout<<mini.top()<<"\t";
    mini.pop(); 
    } 
cout<<endl<<"is empty?? : "<<mini.empty()<<endl;
}