// reverse word
#include <iostream>
using namespace std;
int getLength(char a[])
{
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
void reverse(char ch[], int x, int y)
{
    int s = x;
    int e = y;
    while (s <= e)
    {
        swap(ch[s++], ch[e--]);
    }
}
int main()
{
    char ch[50];
    int x = 0, y = 0;
    cout << "enter a string:";
    cin.getline(ch, 50);
    int length = getLength(ch);
    for (int i = 0; i < length - 1; i++)
    {
        if (ch[i] == ' ')
        {
            y = i - 1;
            reverse(ch, x, y);
            x = i + 1;
        }
    }
    // last word
    reverse(ch, x, length - 1);
    cout << ch;

    return 0;
}
// enter a string:My name is Ritika
// reverse string:yM eman si  akitiR