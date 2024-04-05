#include<iostream>
using namespace std;
int main(){
	string s="KBVTYnouGYTf5";
	//to upper to lower;
	for(char &ch : s){
		if(ch>='A' && ch<='Z')
		ch=ch+('a'-'A');
	}
	cout<<s;
}
//kbvtynougytf5