#include <iostream>
using namespace std;
void dummy(int n)
{
    n++;
    cout << "in dummy function value of n is : " << n << endl;
}
int main()
{
    int n;
    cout << "enter the value of n:";
    cin >> n;
    dummy(n);
    cout << "in main function n is : " << n << endl;
}
/*
enter the value of n:15
in dummy function value of n is : 16
in main function n is : 15*/