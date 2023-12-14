// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
   vector<int> moveZeroes(vector<int> nums) {
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
        }
        return nums;
    }
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(13);
    v.push_back(12);
    cout<<"array is : ";
    for(auto i: v){
        cout<<i<<"  ";
    }
    cout<<endl<<"moving ZEROS : ";
    vector<int> ans=moveZeroes(v);
     for(auto i: ans){
        cout<<i<<"  ";
    }
}
//array is : 0  1  0  13  12  
//moving ZEROS : 1  13  12  0  0  