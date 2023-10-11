#include <iostream>
using namespace std;
int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r)
{
    int nume = factorial(n);
    int deno = factorial(r) * factorial(n - r);
    return nume / deno;
}

int main()
{
    int n, r;
    cout << " enter n and r to find nCr :";
    cin >> n >> r;
    int answerOfnCr = nCr(n, r);
    cout << "nCr of your number is :" << answerOfnCr;
}
/*
 enter n and r to find nCr :8 2
nCr of your number is :28
*/