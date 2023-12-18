#include <iostream>
using namespace std;
bool LinearSearch(int a[][4], int target)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (target == a[i][j])
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    //  int a[3][4]={1,2,3,4,67,98,66,9,89,45,11,23};
    int a[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};
    // cout<<"enter element of 2-D Array:"<<endl;
    // ROW WISE INPUT
    /*
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cin>>a[row][col];
        }
    }
    */
    cout << "array is:" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << a[row][col] << "\t";
        }
        cout << "\n";
    }
    /*
    cout<<"enter element of 2-D Array:"<<endl;
    //COLUMN-WISE INPUT
    for(int col=0;col<4;col++){
        for(int row=0;row<3;row++){
            cin>>a[row][col];
        }
    }
    cout<<"array is:"<<endl;
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<a[row][col]<<"\t";
        }
        cout<<"\n";
    }
    */
    cout << "enter the target element to search:";
    int target;
    cin >> target;
    bool found = LinearSearch(a, target);
    if (found == 1)
        cout << "found " << target << " in array" << endl;
    else
        cout << "not found " << target << " in array" << endl;
    return 0;
}
/*
//row wise
1       2       3       4
5       6       7       8
9      10      11       12

//col wise
1       4       7       10
2       5       8       11
3       6       9       12

//usser input
1       2       3       4
67      98      66      9
89      45      11      23

//usser input
1       11      111     1111
2       22      222     2222
3       33      333     3333

enter the target element to search:55
not found 55 in array
enter the target element to search:33
found 33 in array
*/