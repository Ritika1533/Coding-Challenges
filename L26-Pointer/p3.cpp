#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {23, 122, 41, 67};
    int *p = &arr[0];
    cout << arr << endl;
    cout << p << endl;
    char ch[4] = "abc";
    char *c = &ch[0];
    cout << ch << endl;
    cout << c << endl;
    char ph = 'z';
    char *h = &ph;
    cout << h << endl;
    char tn = 'r';
    char *n = &tn;
    cout << n << endl;
}
/*0x6ffdc0
0x6ffdc0
abc
abc
zabc
rzabc*/