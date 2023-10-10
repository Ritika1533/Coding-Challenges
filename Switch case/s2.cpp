
// how to come out of loop if switch case is inside a while ininite loop

#include <iostream>
using namespace std;

int main()
{
    while (1)
    { // Infinite loop
        int choice;
        cout << "Enter your choice (1 to exit): " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Exiting the program...\n";
            exit(0); // Exit the program
            break;
        default:
            cout << "Invalid choice. Try again.\n"
                 << endl;
        }
    }

    return 0;
}
/*
Enter your choice (1 to exit): 7
Invalid choice. Try again.
Enter your choice (1 to exit): 6
Invalid choice. Try again.
Enter your choice (1 to exit): 8
Invalid choice. Try again.
Enter your choice (1 to exit): 1
Exiting the program...*/