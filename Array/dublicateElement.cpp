#include<iostream>
using namespace std;
int dublicateElement(int array[],int size){
	int ans=0;
	for(int i=0;i<size;i++){
		ans=ans^array[i];
	}
	for(int i=1;i<size;i++){
		ans=ans^i;
	}
	return ans;
}
int main(){
	int arr[9]={8,7,2,5,4,7,1,3,6};
	int brr[7]={6,3,1,5,4,3,2};
	cout<<"dublicate element in array 8 7 2 5 4 7 1 3 6 : "<<dublicateElement(arr,9);
	cout<<endl;
	cout<<"dublicate element in array 6 3 1 5 4 3 2 is : "<<dublicateElement(brr,7);
}
/*
dublicate element in array 8 7 2 5 4 7 1 3 6 : 7
dublicate element in array 6 3 1 5 4 3 2 is : 3*/