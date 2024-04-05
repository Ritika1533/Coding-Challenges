#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string s="KBVTYnouGYTf5";
	//to upper to lower;
	for(char &ch : s){
		if(ch>='a' && ch<='z')
		ch=ch-32;
	}
	cout<<s<<endl;
	  for (int i = 0; i < s.length(); ++i) {
        cout << (char)toupper(s[i]);
    }
}
//KBVTYNOUGYTF5