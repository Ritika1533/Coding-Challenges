// print name five times
#include <iostream>
using namespace std;
void printName(int count)
{
    if (count == 5)
    {
        return;
    }
    count++;
    cout << "Ritika Keshri " << endl;
    printName(count);
}
int main()
{
    int count = 0;
    printName(count);
}
/*Ritika Keshri
Ritika Keshri
Ritika Keshri
Ritika Keshri
Ritika Keshri*/