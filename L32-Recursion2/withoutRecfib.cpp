#include<iostream>
using namespace std;
void fibonacci(int n) {
    int a = 0, b = 1;
    cout<<a<< " "<<b<<" ";
    for (int i = 2; i < n; i++) {
        int sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }
}
int main(){
	int n;
	cout<<"enter n: "<<endl;
	cin>>n;
	fibonacci(n);

}