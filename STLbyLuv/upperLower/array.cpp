#include<iostream>
#include<algorithm>
using namespace std;
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
	int arr[]={4,40,5,6,47,91,12};
	int size=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+size);
	printArray(arr,size);
	int x=91;
	cout<<endl<<"target: "<<x;
	int *ptr1=lower_bound(arr,arr+size,x);
	cout<<endl<<"lower bound: "<<*ptr1;
	int *ptr2=upper_bound(arr,arr+size,x);
	cout<<endl<<"upper bound: "<<*ptr2;
    if(ptr1==(arr+size)){
        cout<<"not found";
    }
    if(ptr2==(arr+size)){
        cout<<"not found";
    }
}
/*
4 5 6 12 40 47 91

target: 43
lower bound: 47
upper bound: 47

target: 5
lower bound: 5
upper bound: 6

target: 98
lower bound: 0
upper bound: 0
upper bound: 0x70fdd0
*/