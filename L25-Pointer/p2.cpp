#include <iostream>
using namespace std;
int main()
{
    // int *p=0;
    //	cout<<"address of uminatialised pointer  "<<p;
    //	cout<<"value at this pointer  "<<*p;
    int *ptr = 0;
    int i = 10;
    ptr = &i;
    cout << "address of ptr " << ptr << endl;
    cout << "value at ptr " << *ptr << endl;
    int *qtr = &i;
    cout << "address of qtr " << qtr << endl;
    cout << "value at qtr " << *qtr << endl;
    return 0;
}