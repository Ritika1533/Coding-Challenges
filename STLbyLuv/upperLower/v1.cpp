#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/// @brief 
/// @param v 
void printVector(vector<int>& v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){
	vector<int> v={4,40,5,6,47,91,12};
	sort(v.begin(),v.end());
	printVector(v);
	int x=91;
	cout<<endl<<"target: "<<x;
	auto it=lower_bound(v.begin(),v.end(),x);
	cout<<endl<<"lower bound: "<<*it;
	if(it==v.end()){
		cout<<"not found";
	}
   auto it2=upper_bound(v.begin(),v.end(),x);
	cout<<endl<<"upper bound: "<<*it2;

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

4 5 6 12 40 47 91

target: 91
lower bound: 91
upper bound: 0
*/