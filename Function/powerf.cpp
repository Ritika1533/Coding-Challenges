#include <iostream>
using namespace std;
int power()
{
    int num1, num2;
    cout << "enter num1 and num2 :";
    cin >> num1 >> num2;
    int ans = 1, i;
    for (i = 1; i <= num2; i++)
    {
        ans = ans * num1;
    }
    return ans;
}
int main()
{
    int answer = power();
    cout << "answer is :" << answer;
}
// enter num1 and num2 :6 3
// answer is :216