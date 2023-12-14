#include<iostream>
#include<vector>
using namespace std;
void mergeArray(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
//copying rest element in array 1
    while(i<n){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
//copying rest element in array 2
    while(j<m){
        arr3[k]=arr2[j];
        k++;
        j++;
    }
}
void printMergedArray(int arr3[],int s){
    for(int i=0;i<s;i++){
        cout<<arr3[i]<<" ";
    }
}
int main(){
    int arr1[5]={1,2,5,10,15};
    int arr2[3]={3,4,6};
    int arr3[8]={0};
    mergeArray(arr1,5,arr2,3,arr3);
    printMergedArray(arr3,8);
}