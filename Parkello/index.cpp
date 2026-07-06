#include <iostream>
#include <fstream>
// #include<string.h>
// #include<process.h>
// #include<stdio.h>
// #include<conio.h>
using namespace std;

void menu() // main menu
{
    cout << "\n\t\t\t=====================================================================";
    cout << "\n\t\t\t                         WELCOME TO PARKELLO";
    cout << "\n\t\t\t=====================================================================";
    cout << "\n\n\t\t\t  1. Arrival of a Bike\t\t\t  6. Departure of Bike";
    cout << "\n\n\t\t\t  2. Arrival of a Car\t\t\t  7. Departure of Car";
    cout << "\n\n\t\t\t  3. Arrival of a Bus\t\t\t  8. Departure of Bus";
    cout << "\n\n\t\t\t  4. Arrival of a Rishkaw\t\t  9. Departure of Rishkaw";
    cout << "\n\n\t\t\t  5. Arrival of a Bicycle\t\t  10. Departure of Bicycle";
    cout << "\n\n\t\t\t\t\t      ========================";
    cout << "\n\n\t\t\t\t\t      ========================";
    cout << "\n\n\t\t\t\t\t\t11. Show the record";
    cout << "\n\n\t\t\t\t\t\t12. Edit the record";
    cout << "\n\n\t\t\t\t\t\t13. Delete the record";
    cout << "\n\n\t\t\t\t\t\t14. Exit Program";
    cout << "\n\n\t\t\t====================================================================" << endl;
}

int main()
{
    int choice; // main menu choice

    int totalAmount = 0;   // total cash
    int totalVahicles = 0; // total number of Vahicles

    // Vahicles counts
    int bikeCount = 0;    // bike fee 20
    int carCount = 0;     // car fee 50
    int busCount = 0;     // bus fee 100
    int rishkawCount = 0; // rishkaw fee 50
    int bicycleCount = 0; // bicycle fee 10

    while (true) // main loop
    {
        menu();

        cout << "\n\n\t\t\t Enter your choice from menu: ";
        cin >> choice;

        // ==========Arrivals==========
        if (choice == 1)
        {
            cout << "\n\t\tBike arrived" << endl;
            bikeCount = bikeCount + 1;
            totalVahicles = totalAmount + 1;
            totalAmount = totalAmount + 20;
        }
        else if (choice == 2)
        {
            cout << "\n\t\tCar arrived" << endl;
            carCount = carCount + 1;
            totalVahicles = totalVahicles + 1;
            totalAmount = totalAmount + 50;
        }
        else if (choice == 3)
        {
            cout << "\n\t\tBus arrived" << endl;
            busCount = busCount + 1;
            totalVahicles = totalVahicles + 1;
            totalAmount = totalAmount + 100;
        }
        else if (choice == 4)
        {
            cout << "\n\t\tRishkaw arrived" << endl;
            rishkawCount = rishkawCount + 1;
            totalVahicles = totalVahicles + 1;
            totalAmount = totalAmount + 50;
        }
        else if (choice == 5)
        {
            cout << "\n\t\tBicycle arrived" << endl;
            bicycleCount = bicycleCount + 1;
            totalVahicles = totalVahicles + 1;
            totalAmount = totalAmount + 10;
        }

        //==========Departures==========

        else if (choice == 6)
        {
            if (bikeCount > 0)
            {
                cout << "\n\t\tBike departure" << endl;
                bikeCount = bikeCount - 1;
                totalVahicles = totalVahicles - 1;
                totalAmount = totalAmount - 20;
            }
            else
            {
                cout << "Error: No Bikes currently parked. " << endl;
            }
        }
        else if (choice == 7)
        {
            if (carCount > 0)
            {
                cout << "\n\t\tCar departure" << endl;
                carCount = carCount - 1;
                totalVahicles = totalVahicles - 1;
                totalAmount = totalAmount - 50;
            }
            else
            {
                cout << "Error: No Cars currently parked. " << endl;
            }
        }
        else if (choice == 8)
        {
            if (busCount > 0)
            {
                cout << "\n\t\tBus departure" << endl;
                busCount = busCount - 1;
                totalVahicles = totalVahicles - 1;
                totalAmount = totalAmount - 100;
            }
            else
            {
                cout << "\n\t\tError: No Buses currently parked. " << endl;
            }
        }
        else if (choice == 9)
        {
            if (rishkawCount > 0)
            {
                cout << "\n\t\tRishkaw departure" << endl;
                rishkawCount = rishkawCount - 1;
                totalAmount = totalAmount - 50;
            }
            else
            {
                cout << "Error: No rishkaws curretly parked. " << endl;
            }
        }
        else if (choice == 10)
        {
            if (bicycleCount > 0)
            {
                cout << "\n\t\tBicyce departure" << endl;
                bicycleCount = bicycleCount - 1;
                totalAmount = totalAmount - 10;
            }
            else
            {
                cout << "Error: No Bicycles currently parked. " << endl;
            }
        }

        //========Show Record============
        else if (choice == 11)
        {
            cout << "\n\t\t===========================" << endl;
            cout << "\n\t\t===========================" << endl;
            cout << "\n\t\tShowing record!!!" << endl;
            cout << "\n\t\t===========================" << endl;
            cout << "\n\t\t===========================" << endl;
            cout << "\n\t\tRecord:" << endl;
            cout << "\n\t\t=====================================================" << endl;
            cout << "\n\t\tThe current number of Cars parked is:" << carCount << endl;
            cout << "\n\t\tThe current number of Bikes parked is:" << bikeCount << endl;
            cout << "\n\t\tThe current number of Buses parked is:" << busCount << endl;
            cout << "\n\t\tThe current number of Bicycles parked is:" << bicycleCount << endl;
            cout << "\n\t\t-------------------------------------------------------" << endl;
            cout << "\n\t\tTotal current Vahicles parked is:" << totalVahicles << endl;
            cout << "\n\t\tTotal current cash ledger is:" << totalAmount << endl;
            cout << "\n\t\t=====================================================" << endl;
        }

        //===========Editing=============
        else if (choice == 12)
        {
            cout << "\n\t\tEdit record!!!" << endl;

            int edit = 0;

            cout << "Select what do you want to edit:";
            cout << "\n\n\t\t\t  1. Cars \t\t\t  2. Bikes ";
            cout << "\n\n\t\t\t  3. Buses \t\t\t  4. Rishkaws ";
            cout << "\n\n\t\t\t  5. Bicycles \t\t\t  6. EXIT ";
            cout<<"";
            cout<<"\n\n\t\t\t Enter option:"<<endl;
            cin >> edit;
            if (edit == 1)
            {
                cout << "\n\n\t\t\tEditing Cars" << endl;
                cout << "Current Parked Cars are: " << carCount << endl;
                cout << "Enter new amount:" << endl;
                cin >> carCount;
            }
            else if (edit == 2)
            {
                cout << "\n\n\t\t\tEditing Bikes" << endl;
                cout << "Current Parked Bikes are: " << bikeCount << endl;
                cout << "Enter new amount:";
                cin >> bikeCount;
            }
            else if (edit == 3)
            {
                cout << "\n\n\t\t\tEditing Buses" << endl;
                cout << "Current Parked Buses are: " << busCount << endl;
                cout << "Enter new amount:";
                cin >> busCount;
            }
            else if (edit == 4)
            {
                cout << "\n\n\t\t\tEditing Rishkaws" << endl;
                cout << "Current Parked Rishkaws are: " << rishkawCount << endl;
                cout << "Enter new amount:";
                cin >> rishkawCount;
            }
            else if (edit == 5)
            {
                cout << "\n\n\t\t\tEditing Bicycles" << endl;
                cout << "Current Parked Bicycles are: " << bicycleCount << endl;
                cin >> bicycleCount;
            }
            else if (edit == 6)
            {
                cout << "\n\n\t\t\tExiting Editing" << endl;
            }
            else
            {
                cout << "\n\n\t\t\tPlease only select from given options" << endl;
            }
        }
        else if (choice == 13)
        {
            cout << "\n\t\tDelete record!!!" << endl;
            cout << "\n\t\tAre you sure? (Y=1/N=0):";

            int sure;
            cin >> sure;

            if (sure == 1)
            {
                cout << "All record is deleted" << endl;

                totalAmount = 0;
                totalVahicles = 0;
                carCount = 0;
                bikeCount = 0;
                busCount = 0;
                rishkawCount = 0;
                bicycleCount = 0;
            }
            else if (sure == 0)
            {
                cout << "Action reverted";
            }
            else
            {
                cout << "Please only select 1 or 0" << endl;
            }
        }
        else if (choice == 14)
        {
            cout << "\n\t\tEXIT PROGRAM!!!" << endl;
            return 0;
        }
        else
        {
            cout << "\n\t\tInvalid choice - Chose from given options only!!!" << endl;
        }
    }
    return 0;
}