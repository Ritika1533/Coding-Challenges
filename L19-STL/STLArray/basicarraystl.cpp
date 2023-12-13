#include <iostream>
#include <array>
using namespace std;
int main()
{
    int marks[6] = {6, 7, 4, 9, 7};
    array<int, 10> newscore;
    array<int, 6> swappedArray = {7, 8};
    array<int, 6> score = {90, 89, 77, 67, 8, 55};
    for (int i = 0; i < 6; i++)
    {
        cout << score[i] << " ";
    }
    cout << "\n element at index " << score.at(2);
    cout << endl;
    cout << "\n front element :" << score.front();
    cout << "\n front element :" << score.back();
    cout << endl;
    newscore.fill(88);
    cout << "newscore";
    for (int i = 0; i < 6; i++)
    {
        cout << newscore[i] << " ";
    }
    swappedArray.swap(score);
    cout << "after swapping\n";
    cout << "score:";
    for (int i = 0; i < 6; i++)
    {
        cout << score[i] << " ";
    }
    cout << "\n newscore";
    for (int i = 0; i < 6; i++)
    {
        cout << swappedArray[i] << " ";
    }
}
/*90 89 77 67 8 55
 element at index 77
 cout<<"\n element at index "<<score.at(50);
 after this it will exit the program
terminate called after throwing an instance of 'std::out_of_range'

 front element :90
 front element :55

 88 88 88 88 88 88

 score:7 8 0 0 0 0
 swappedArray: 90 89 77 67 8 55*/