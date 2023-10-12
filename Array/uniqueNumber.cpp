#include<iostream>
using namespace std;
int uniqueElement(int array[],int size){
	int ans=0;
	for(int i=0;i<size;i++){
		ans=ans^array[i];
	}
	return ans;
}
int main(){
int m=4;
int size=(2*m+1);//9
int array[]={8,6,0,3,2,6,0,2,3};
cout<<"unique element in the array is:"<<uniqueElement(array,size);
}
//unique element in the array is:8