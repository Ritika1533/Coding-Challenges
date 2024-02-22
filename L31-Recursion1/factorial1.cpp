#include<iostream>
using namespace std;
int factorial(int n){

	/*
	int small=factorial(n-1);
	int big=n*small;
	return big;
	*/
	return n*factorial(n-1);
}
int main(){
	int n;
	cout<<"enter terms"<<endl;
	cin>>n;
	int ans=factorial(n);
	cout<<ans;
}