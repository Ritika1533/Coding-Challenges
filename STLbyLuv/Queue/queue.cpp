#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("a");
    q.push("b");
    q.push("c");
    q.push("d");
    q.push("e");
    while(!q.empty()){
    	cout<<q.front()<<endl;
    	q.pop();
	}
}
/*
a
b
c
d
e
*/