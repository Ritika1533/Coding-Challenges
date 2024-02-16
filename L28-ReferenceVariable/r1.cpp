#include <iostream>
using namespace std;
int main()
{
    int i = 4;
    int &j = i;
    cout << "i " << i << endl;
    cout << "j " << j << endl;
    ++j;
    cout << "i " << i << endl;
    cout << "j " << j << endl;
}
/*
i 4
j 4
i 5
j 5*/