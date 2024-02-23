#include <iostream>
using namespace std;
bool checkPalindrome(string str, int start, int end)
{
    if (start > end)
        return 0;
    if (str[start] != str[end])
        return 0;
    else
    {
        start++;
        end--;
        return checkPalindrome(str, start, end);
    }
}
int main()
{
    string str = "abba";
    int size = 8;
    bool ans = checkPalindrome(str, 0, str.length() - 1);
    cout << ans;
}