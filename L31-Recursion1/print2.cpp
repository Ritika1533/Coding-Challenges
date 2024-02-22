#include<iostream>
using namespace std;
void print(int n){
   if(n==0)
   return;
   print(n-1);
   cout<<n<<endl;	
}

int main(){
	int n;
	cout<<"enter terms"<<endl;
	cin>>n;
	cout<<endl;
	print(n);
}