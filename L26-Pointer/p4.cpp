#include <iostream>
using namespace std;
void print(int *p)
{
    cout << *p << endl;
}
void update(int *p)
{
    // p=p+1
    *p = *p + 1;
}
void getSum(int *arr, int n)
{
    cout << "size of array " << sizeof(arr) << endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "sum: " << sum << endl;
}
int main()
{
    int value = 12;
    int *p = &value;
    /*
    print(p);
    cout<<*p<<endl;
    update(p);
    cout<<*p<<endl;
    */
    int arr[5] = {4, 8, 5, 2, 1};
    getSum(arr + 2, 3);
}
/*12
12
13
size of array 8
sum: 8*/