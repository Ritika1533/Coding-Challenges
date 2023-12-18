#include <iostream>
using namespace std;
int getLength(char a[]){
	int count=0;
	for(int i=0;a[i]!='\0';i++){
		count++;
	}
	return count;
}
int main() {
 char name[30];
 cout<<"enter your name : "<<endl;
 cin>>name;
 cout<<"your name is :"<<name<<endl;
 int length=getLength(name);
 cout<<"length of string: "<<length;
 return 0;
}

//enter your name :
//ritika keshri
//your name is :ritika
//length of string: 6