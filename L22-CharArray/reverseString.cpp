#include <iostream>
#include<vector>
using namespace std;
 void reverseString(vector<char>& s) {
        int l=0;
	    int r=s.size()-1;
	    while(l<=r){
		swap(s[l++],s[r--]);
	     }
    }
int getLength(char a[]){
	int count=0;
	for(int i=0;a[i]!='\0';i++){
		count++;
	}
	return count;
}
void reverse(char a[],int n){
	int s=0;
	int e=n-1;
	while(s<=e){
		swap(a[s++],a[e--]);
	}
}
int main() {
 char name[30];
 cout<<"enter your name : "<<endl;
 cin>>name;
 cout<<"your name is :"<<name<<endl;
 int length=getLength(name);
 cout<<"length of string: "<<length<<endl;
 reverse(name,length);
 cout<<"your name after reversing :"<<name<<endl;
 
 return 0;
}

//enter your name :
//ritika keshri
//your name is :ritika
//length of string: 6
//your name after reversing :akitir