#include<iostream>
using namespace std;
void printArray(int *arr,int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void bubbleSort(int *arr,int size){
	printArray(arr,size);
	//base case
	if(size==0 || size==1)
	return;
	//processing part
	for(int i=0;i<size-1;i++){
		if(arr[i]>arr[i+1])
		swap(arr[i],arr[i+1]);
	}
	//recursive part
	bubbleSort(arr,size-1);
}
int main(){
	int arr[]={55,3,87,0,12};
	bubbleSort(arr,5);
}
/*55 3 87 0 12
3 55 0 12
3 0 12
0 3
0*/