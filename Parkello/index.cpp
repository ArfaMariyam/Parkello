#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

//========== File managment ==========
void saveData(int amount, int vahicles, int bike, int car, int bus, int rishkaw, int bicycle)
{
    ofstream outFile("parking_records.txt");
    if (outFile.is_open())
    {
        outFile << amount << "\n"
                << vahicles << "\n"
                << bike << "\n"
                << car << "\n"
                << bus << "\n"
                << rishkaw << "\n"
                << bicycle;
        outFile.close();
    }
}

void loadData(int &amount, int &vehicles, int &bike, int &car, int &bus, int &rishkaw, int &bicycl)
{
    ifstream inFile("parking_records.txt");
    if (inFile.is_open())
    {
        inFile >> amount >> vehicles >> bike >> car >> bus >> rishkaw >> bicycl;
        inFile.close();
    }
}

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
    //========== LOGIN CODE ==========
    string userName;
    string userPassword;
    int loginAttempt = 0;
    char ch;

    cout << "\n\t\t\t=====================================================";
    cout << "\n\t\t\t                SECURITY VERIFICATION                ";
    cout << "\n\t\t\t       YOU HAVE MAXIMUM OF 5 LOGIN ATTEMPTS          ";
    cout << "\n\t\t\t=====================================================";

    while (loginAttempt < 5)
    {
        userName = "";
        userPassword = "";
        cout << "\n\t\t\tEnter Username: ";
        cin >> userName;
        if (userName == "admin")
        {
            cout << "\n\t\t\tUsername Accepted.";
            cout << "\n\t\t\tPlease enter your PIN: ";
            for (int i = 0; i < 4; i++)
            {
                ch = getch();
                userPassword.push_back(ch);
                cout << 'X';
            }
            cout << endl;
        }
        else
        {
            cout << "\n\t\t\tERROR - Incorrect Username";
            cout << "\n\t\t\tPlease enter your PIN: ";
            for (int i = 0; i < 4; i++)
            {
                ch = getch();
            }
            cout << "\n\t\t\tXXXX" << endl;
        }
        if (userName == "admin" && userPassword == "1234")
        {
            cout << "\n\t\t\t=====================================================";
            cout << "\n\t\t\t       ACCESS GRANTED - CONGRATULATIONS!             ";
            cout << "\n\t\t\t=====================================================" << endl;
            break;
        }
        else
        {
            loginAttempt = loginAttempt + 1;
            cout << "\n\t\t\t=====================================================";
            cout << "\n\t\t\t           Invalid credential entered.";
            cout << "\n\t\t\t     ATTEMPT " << loginAttempt << " of 5 Completed";
            cout << "\n\t\t\t=====================================================" << endl;
        }
    }

    //==========MAIN CODE==========
    int choice; // main menu choice

    int totalAmount = 0;   // total cash
    int totalVahicles = 0; // total number of Vahicles

    // Vahicles counts
    int bikeCount = 0;    // bike fee 20
    int carCount = 0;     // car fee 50
    int busCount = 0;     // bus fee 100
    int rishkawCount = 0; // rishkaw fee 50
    int bicycleCount = 0; // bicycle fee 10

    // auto load records from local file, if exists
    loadData(totalAmount, totalVahicles, bikeCount, carCount, busCount, rishkawCount, bicycleCount);

    while (true) // main loop
    {
        menu();

        cout << "\n\n\t\t\tEnter your choice from menu: ";
        cin >> choice;

        //==========Arrivals==========
        if (choice == 1)
        {
            cout << "\n\t\t\tBike arrived" << endl;
            bikeCount = bikeCount + 1;
            totalVahicles = totalVahicles + 1;
            totalAmount = totalAmount + 20;
            saveData(totalAmount, totalVahicles, bikeCount, carCount, busCount, rishkawCount, bicycleCount);
        }
        else if (choice == 2)
        {
            cout << "\n\t\t\tCar arrived" << endl;
            carCount = carCount + 1;
            totalVahicles = totalVahicles + 1;
            totalAmount = totalAmount + 50;
            saveData(totalAmount, totalVahicles, bikeCount, carCount, busCount, rishkawCount, bicycleCount);
        }
        else if (choice == 3)
        {
            cout << "\n\t\t\tBus arrived" << endl;
            busCount = busCount + 1;
            totalVahicles = totalVahicles + 1;
            totalAmount = totalAmount + 100;
            saveData(totalAmount, totalVahicles, bikeCount, carCount, busCount, rishkawCount, bicycleCount);
        }
        else if (choice == 4)
        {
            cout << "\n\t\t\tRishkaw arrived" << endl;
            rishkawCount = rishkawCount + 1;
            totalVahicles = totalVahicles + 1;
            totalAmount = totalAmount + 50;
            saveData(totalAmount,totalVahicles, bikeCount, carCount, busCount, rishkawCount, bicycleCount);
        }
        else if (choice == 5)
        {
            cout << "\n\t\t\tBicycle arrived" << endl;
            bicycleCount = bicycleCount + 1;
            totalVahicles = totalVahicles + 1;
            totalAmount = totalAmount + 10;
            saveData(totalAmount, totalVahicles, bikeCount, carCount , busCount,rishkawCount, bicycleCount);
        }

        //==========Departures==========

        else if (choice == 6)
        {
            if (bikeCount > 0)
            {
                cout << "\n\t\t\tBike departure" << endl;
                bikeCount = bikeCount - 1;
                totalVahicles = totalVahicles - 1;
                totalAmount = totalAmount - 20;
                saveData(totalAmount, totalVahicles, bikeCount, carCount, busCount, rishkawCount, bicycleCount);
            }
            else
            {
                cout << "\t\t\tError: No Bikes currently parked. " << endl;
            }
        }
        else if (choice == 7)
        {
            if (carCount > 0)
            {
                cout << "\n\t\t\tCar departure" << endl;
                carCount = carCount - 1;
                totalVahicles = totalVahicles - 1;
                totalAmount = totalAmount - 50;
                saveData(totalAmount, totalVahicles, bikeCount, carCount, busCount, rishkawCount, bicycleCount);
            }
            else
            {
                cout << "\n\t\t\tError: No Cars currently parked. " << endl;
            }
        }
        else if (choice == 8)
        {
            if (busCount > 0)
            {
                cout << "\n\t\t\tBus departure" << endl;
                busCount = busCount - 1;
                totalVahicles = totalVahicles - 1;
                totalAmount = totalAmount - 100;
                saveData(totalAmount, totalVahicles, bikeCount, carCount, busCount, rishkawCount, bicycleCount);
            }
            else
            {
                cout << "\n\t\t\tError: No Buses currently parked. " << endl;
            }
        }
        else if (choice == 9)
        {
            if (rishkawCount > 0)
            {
                cout << "\n\t\t\tRishkaw departure" << endl;
                rishkawCount = rishkawCount - 1;
                totalVahicles = totalVahicles - 1;
                totalAmount = totalAmount - 50;
                saveData(totalAmount, totalVahicles, bikeCount, carCount,busCount, rishkawCount, bicycleCount);
            }
            else
            {
                cout << "\n\t\t\tError: No rishkaws curretly parked. " << endl;
            }
        }
        else if (choice == 10)
        {
            if (bicycleCount > 0)
            {
                cout << "\n\t\t\tBicyce departure. " << endl;
                bicycleCount = bicycleCount - 1;
                totalVahicles = totalVahicles - 1;
                totalAmount = totalAmount - 10;
                saveData();
            }
            else
            {
                cout << "\n\t\t\tError: No Bicycles currently parked. " << endl;
            }
        }

        //========Show Record============
        else if (choice == 11)
        {
            cout << "\n\t\t\t";
            cout << "\n\t\t\t=====================================================";
            cout << "\n\t\t\t                 CURRENT LIVE RECORD                 ";
            cout << "\n\t\t\t=====================================================";
            cout << "\n\t\t\t  Current Parked Cars      :" << carCount;
            cout << "\n\t\t\t  Current Parked Bikes     :" << bikeCount;
            cout << "\n\t\t\t  Current Parked Buses     :" << busCount;
            cout << "\n\t\t\t  Current Parked Rishkaws  :" << rishkawCount;
            cout << "\n\t\t\t  Current Parked Bicycles  :" << bicycleCount;
            cout << "\n\t\t\t-------------------------------------------------------" << endl;
            cout << "\n\t\t\t  Total Current Vahicles   :" << totalVahicles;
            cout << "\n\t\t\t  Total Current Cash       :" << totalAmount;
            cout << "\n\t\t\t=====================================================" << endl;
            cout << "\n\t\t\t";
        }

        //===========Editing=============
        else if (choice == 12)
        {
            int edit = 0;

            cout << "\n\t\t\t=====================================================";
            cout << "\n\t\t\t                    ADMIN EDITOR                     ";
            cout << "\n\t\t\t=====================================================";
            cout << "\n\t\t\t  1. Cars \t\t\t  2. Bikes ";
            cout << "\n\t\t\t  3. Buses \t\t\t  4. Rishkaws ";
            cout << "\n\t\t\t  5. Bicycles \t\t\t  6. Total Cash ";
            cout << "\n\t\t\t  7. Total Vahicles \t\t 8. CANCEL & EXIT ";
            cout << "\n\t\t\t=====================================================";
            cout << "\n\t\t\tSelect what do you want to edit:";
            cin >> edit;

            if (edit == 1)
            {
                cout << "\n\t\t\tCurrent Parked Cars:" << carCount;
                cout << "\n\t\t\tEnter new value:";
                cin >> carCount;
            }
            else if (edit == 2)
            {
                cout << "\n\t\t\tCurrent Parked Bikes: " << bikeCount;
                cout << "\n\t\t\tEnter new value:";
                cin >> bikeCount;
            }
            else if (edit == 3)
            {
                cout << "\n\t\t\tCurrent Parked Buses: " << busCount;
                cout << "\n\t\t\tEnter new value:";
                cin >> busCount;
            }
            else if (edit == 4)
            {
                cout << "\n\t\t\tCurrent Parked Rishkaws: " << rishkawCount;
                cout << "\n\t\t\tEnter new value:";
                cin >> rishkawCount;
            }
            else if (edit == 5)
            {
                cout << "\n\t\t\tCurrent Parked Bicycles: " << bicycleCount;
                cout << "\n\t\t\tEnter new value:";
                cin >> bicycleCount;
            }
            else if (edit == 6)
            {
                cout << "\n\t\t\tCurrent ladger Cash: " << totalAmount;
                cout << "\n\t\t\tEnter new ladger Cash amount:";
                cin >> totalAmount;
            }
            else if (edit == 7)
            {
                cout << "\n\t\t\tCurrent Total Vahicles count: " << totalVahicles;
                cout << "\n\t\t\tEnter new total vahicle amount: ";
                cin >> totalVahicles;
            }
            else if (edit == 8)
            {
                cout << "\n\t\t\tCanceled - Exiting Editing. " << endl;
            }
            else
            {
                cout << "\n\t\t\tPlease only select from given options. " << endl;
            }
        }

        //=========Delete record=============
        else if (choice == 13)
        {
            cout << "\n\t\t\t=====================================================";
            cout << "\n\t\t\tWARNING: Are you sure you want to delete everything?";
            cout << "\n\t\t\t           Press 1 for Yes (DELETE)";
            cout << "\n\t\t\t           Press 0 for No (Cancel)";
            cout << "\n\t\t\t=====================================================";

            int sure;
            cin >> sure;

            if (sure == 1)
            {
                cout << "\n\t\t\t-------------------------------------------";
                cout << "\n\t\t\tAll records have been successfully deleted!";
                cout << "\n\t\t\t-------------------------------------------";

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
                cout << "\n\t\t\tAction reverted. " << endl;
            }
            else
            {
                cout << "\n\t\t\tPlease only select 1 or 0 - Deletion Canceled. " << endl;
            }
        }
        else if (choice == 14)
        {
            cout << "\n\t\t\t=====================================================";
            cout << "\n\t\t\t           PROGRAM SHUTDOWN - GOOD BYE!";
            cout << "\n\t\t\t=====================================================\n"
                 << endl;
            return 0;
        }
        else
        {
            cout << "\n\t\t\t=========================================================" << endl;
            cout << "\n\t\t\tInvalid choice - Please chose from 1 to 14 options only. " << endl;
            cout << "\n\t\t\t=========================================================" << endl;
        }
    }
    return 0;
}