#include <iostream>
using namespace std;
int main()
{
    int num = 60;
    cout << "num=" << num << endl;
    cout << "address of num " << &num << endl;
    // pointers concept
    int *p = &num;
    cout << "value at num" << (*p) << endl;
    cout << "address of ch " << p << endl;
    char ch = 'a';
    char *p1 = &ch;
    cout << "charcter at ch " << (*p1) << endl;
    cout << "address of ch78888 " << p1 << endl;
    cout << "size of interger" << sizeof(num) << endl;
    cout << "size of integer pointer " << sizeof(p) << endl;
    cout << "size of character pointer " << sizeof(p1) << endl;
    return 0;
}
/*
num=60
address of num 0x6ffdfc
value at p60
address of num 0x6ffdfc
charcter at ch a
address of num a<
size of interger4
size of integer pointer 8
size of character pointer 8
*/