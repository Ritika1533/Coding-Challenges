#include<iostream>
using namespace std;
int getLength(char a[]){
	int count=0;
	for(int i=0;a[i]!='\0';i++){
		count++;
	}
	return count;
}
char getMaxOccCharacter(char s[],int length){
    int a[26]={0};
    for(int i=0;i<length;i++){
    int number=0;
    number=s[i]-'a';
    a[number]++;
    }
    //maxm occuring character
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<a[i]){
            maxi=a[i];
            ans=i;
        }
    }
    return ans+'a';
}
int main(){
    char s[100];
    cout<<"enrter a string : ";
    cin.getline(s,100);
    int length=getLength(s);
    char ch=getMaxOccCharacter(s,length);
    cout<<ch;
    return 0;
}
//enrter a string : output
//maxm occuring character is : t
//enrter a string : zezozenzo
//maxm occuring character is : z