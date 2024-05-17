#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>
using namespace std;
class Customers
{
public:
    string name, gender, address, all;
    int age, cusId, phone;
    void getDetails()
    {
        ofstream out("old-customers.txt", ios ::app);
        if (out.is_open())
        {
            // Collect customer details from the user
            cout << "Enter Customer ID : " << endl;
            cin >> cusId;
            cout << "Enter Customer Name : " << endl;
            cin >> name;
            cout << "Enter Customer Gender : " << endl;
            cin >> gender;
            cout << "Enter Customer Address : " << endl;
            cin >> address;
            cout << "Enter Customer Age : " << endl;
            cin >> age;
            cout << "Enter Customer Phone no.: " << endl;
            cin >> phone;

            // Step 2: Use 'out' to write the collected details to the file
            out << "\nCustomer ID : " << cusId << "\n Name : " << name << "\n Age" << age << "\nGender : " << gender << "\n Phone :" << phone << "\n Address " << address << endl;

            // Step 3: Close the file stream
            out.close();
            cout << "\n SAVED \n NOTE : we have saved your details records for future pusposes\n"
                 << endl;
        }
        else
        {
            // Handle the case where the file could not be opened
            cout << "Unable to open file." << endl;
        }
    }
    void showDetails()
    {
        ifstream in("old-customers.txt");
        if (!in)
        {
            cout << "File Error!!" << endl;
            return;
        }
        while (getline(in, all))
        {                        // Reads each line into 'all' and returns true if successful
            cout << all << endl; // Print the line to the console
        }

        in.close();
    }
};
class Cabs
{
public:
    int cabChoice;
    int kilometers;
    float cabCost;
    float lastCabCost;
    void cabDetails()
    {
        cout << "we collobrate with fastest, safest, and smartest cab service around the country" << endl;
        cout << "-----------------ABC Cabs----------------\n"
             << endl;
        cout << "1. Rent a standard cab - Rs.15 for 1KM" << endl;
        cout << "1. Rent a Luxury cab - Rs.25 for 1KM" << endl;

        cout << "\n To calculate the cost for your journey " << end;
        cout << "Enter which kind of cab you need : ";
        cin >> cabChoice;
        cout << "\nEnter the Kilometer you have to travel";
        cin >> kilometers;
        int hireCab;
        if (cabChoice == 1)
        {
            cabCost = kilometers * 15;
            cout << "\n your tour cost Rs." << cabCost << " for standard cab" << endl;
            cout << "press 1 to hire the cab : or ";
            cout << "press 2 to select another cab : ";
            cin >> hireCab;
            system("CLS");
            if (hireCab == 1)
            {
                lastCabCost = cabCost;
                cout << "\n You have successfully booked a standard cab" << endl;
                cout << "\n GOTO Menu and collect the recipt : " << endl;
            }
            else if (hireCab == 2)
            {
                carDetails();
            }
            else
            {
                cout << "Invalid Input ! Redirecting to previous menu\n";
                sleep(999);
                system("CLS");
                carDetails();
            }
        }
    }
};
class Booking
{
};
class Charges
{
};
int main()
{
    cout << "hello world" << endl;
    return 0;
}