#include <iostream>
using namespace std;

int main()
{
    int amount = 1330, notes, numOfNotes;
    cout << "enter he notes you want to check :";
    cin >> notes;
    switch (notes)
    {
    case 500:
        numOfNotes = amount / 500;
        cout << numOfNotes << " 500 notes are there in 1330 ";
        break;
    case 100:
        numOfNotes = amount / 100;
        cout << numOfNotes << " 100 notes are there in 1330 ";
        break;
    case 20:
        numOfNotes = amount / 20;
        cout << numOfNotes << " 20 notes are there in 1330 ";
        break;
    case 10:
        numOfNotes = amount / 10;
        cout << numOfNotes << " 10 notes are there in 1330 ";
        break;
    default:
        cout << "invalid choice";
    }
}
// enter he notes you want to check :100
// 13 100 notes are there in 1330