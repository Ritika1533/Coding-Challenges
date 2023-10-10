#include <iostream>
using namespace std;

int main()
{
    int amount = 1330, notes, numOfNotes;
    switch (500)
    {
    case 500:
        numOfNotes = amount / 500;
        cout << numOfNotes << " 500 notes are there in 1330 ";
        amount = amount - 500 * numOfNotes;
        cout << endl;

    case 100:
        numOfNotes = amount / 100;
        cout << numOfNotes << " 100 notes are there in 1330 ";
        amount = amount - 100 * numOfNotes;
        cout << endl;

    case 20:
        numOfNotes = amount / 20;
        cout << numOfNotes << " 20 notes are there in 1330 ";
        amount = amount - 20 * numOfNotes;
        cout << endl;

    case 10:
        numOfNotes = amount / 10;
        cout << numOfNotes << " 10 notes are there in 1330 ";
        amount = amount - 10 * numOfNotes;
        break;
    default:
        cout << "invalid choice";
    }
}
/*
2 500 notes are there in 1330
3 100 notes are there in 1330
1 20 notes are there in 1330
1 10 notes are there in 1330*/