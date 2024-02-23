#include <iostream>
using namespace std;
void reverseString(string &str, int start, int end)
{
    cout << "string is: " << str << endl;
    if (start > end)
        return;
    swap(str[start], str[end]);
    start++;
    end--;
    reverseString(str, start, end);
}
int main()
{
    string str = "abcdef";
    int size = 6;
    reverseString(str, 0, str.length() - 1);
    cout << str;
} /*string is: abcdef
 string is: fbcdea
 string is: fecdba
 string is: fedcba
 fedcba*/