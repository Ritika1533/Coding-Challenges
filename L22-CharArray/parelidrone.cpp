#include<iostream>
using namespace std;
int getLength(char a[]){
	int count=0;
	for(int i=0;a[i]!='\0';i++){
		count++;
	}
	return count;
}

char lowerCase(char ch){
	if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
	return ch;
	}
	else{
		char temp=ch-'A'+'a';
		return temp;
	}
}
bool checkPalindrone(char a[],int n){
 int s = 0;
    int e = n - 1;
    while (s <= e) {
        if (((a[s] >= 'a' && a[s] <= 'z') || (a[s] >= '0' && a[s] <= '9')) &&
            ((a[e] >= 'a' && a[e] <= 'z') || (a[e] >= '0' && a[e] <= '9'))) {

            if (lowerCase(a[s]) != lowerCase(a[e])) {
                return false;
            } else {
                s++;
                e--;
            }
        } else {
            s++;
            e--;
        }
    }
    return true;

}
int main()
{
   char str[40];
   cout<<"enter a string to check palindrome"<<endl;
   cin>>str;
   int length=getLength(str);
   bool yesNo=checkPalindrone(str,length);
   if(yesNo==1){
   cout<<"palindrone"<<endl;
       }
   else{
		cout<<"not a palindrone"<<endl;
      }
}