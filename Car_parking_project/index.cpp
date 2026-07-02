#include <iostream>
#include <fstream>
// #include<string.h>
// #include<process.h>
// #include<stdio.h>
// #include<conio.h>
using namespace std;
void menu()
{
    cout <<"\n\t\t\t====================================================================";
    cout <<"\n\t\t\t====================================================================";
    cout <<"\n\n\t\t\t  1. Arrival of a Bike\t\t\t  6. Departure of Bike";
    cout <<"\n\n\t\t\t  2. Arrival of a Car\t\t\t  7. Departure of Car";
    cout <<"\n\n\t\t\t  3. Arrival of a Bus\t\t\t  8. Departure of Bus";
    cout <<"\n\n\t\t\t  4. Arrival of a Rishkaw\t\t  9. Departure of Rishkaw";
    cout <<"\n\n\t\t\t  5. Arrival of a Bicycle\t\t  10. Departure of Bicycle";
    cout <<"\n\n\t\t\t\t\t      ========================";
    cout <<"\n\n\t\t\t\t\t      ========================";
    cout <<"\n\n\t\t\t\t\t\t11. Show the record";
    cout <<"\n\n\t\t\t\t\t\t12. Edit the record";
    cout <<"\n\n\t\t\t\t\t\t13. Delete the record";
    cout <<"\n\n\t\t\t\t\t\t14. Exit Program";
    cout << "\n\n\t\t\t===================================================================="<<endl; 
}

int main()
{
    int choice;

    int totalAmount = 0;
    int totalVahicles = 0;
    int bikeCount = 0;
    int carCount = 0;

    while (true)
    {
        menu();

        cout << "\n\n\t\t\t Enter your choice from menu: ";
        cin >> choice;

        if (choice == 1)
        {
            cout<<"\n\t\tBike arrive choosen"<<endl;
        }
        else if (choice == 2)
        {
            cout << "\n\t\tCar arrive choosen" << endl;
        }
        else if (choice == 3)
        {
            cout << "\n\t\tBus arrive choosen" << endl;
        }
        else if (choice == 4)
        {
            cout << "\n\t\tRishkaw arrive chosen" << endl;
        }
        else if (choice == 5)
        {
            cout << "\n\t\tBicycle is arrived" << endl;
        }
        else if (choice == 6)
        {
            cout << "\n\t\tBike is departure" << endl;
        }
        else if (choice == 7)
        {
            cout << "\n\t\tCar departure" << endl;
        }
        else if (choice == 8)
        {
            cout << "\n\t\tBus departure" << endl;
        }
        else if (choice == 9)
        {
            cout << "\n\t\tRishkaw departure" << endl;
        }
        else if (choice == 10)
        {
            cout << "\n\t\tBicyce departure" << endl;
        }
        else if (choice == 11)
        {
            cout << "\n\t\tShow record!!!" << endl;
        }
        else if (choice == 12)
        {
            cout << "\n\t\tEdit record!!!" << endl;
        }
        else if (choice == 13)
        {
            cout << "\n\t\tDelete record!!!" << endl;
        }
        else if (choice == 14)
        {
            cout << "\n\t\tEXIT PROGRAM!!" << endl;
            return 0;
        }
        else
        {
            cout << "\n\t\tChose from given options only" << endl;
        }
        cout<<"\n\t\t\t===================================================================="<<endl;
    }
    return 0;
}