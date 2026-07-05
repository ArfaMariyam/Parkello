#include <iostream>
#include <fstream>
// #include<string.h>
// #include<process.h>
// #include<stdio.h>
// #include<conio.h>
using namespace std;

void menu()
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
    int choice;

    int totalAmount = 0;
    int totalVahicles = 0;

    int bikeCount = 0;
    int carCount = 0;
    int busCount = 0;
    int rishkawCount = 0;
    int bicycleCount = 0;

    while (true)
    {
        menu();

        cout << "\n\n\t\t\t Enter your choice from menu: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "\n\t\tBike arrived" << endl;
            bikeCount = bikeCount + 1;
            totalAmount = totalAmount + 20;
        }
        else if (choice == 2)
        {
            cout << "\n\t\tCar arrived" << endl;
            carCount = carCount + 1;
            totalAmount = totalAmount + 30;
        }
        else if (choice == 3)
        {
            cout << "\n\t\tBus arrived" << endl;
            busCount = busCount + 1;
            totalAmount = totalAmount + 50;
        }
        else if (choice == 4)
        {
            cout << "\n\t\tRishkaw arrived" << endl;
            rishkawCount = rishkawCount + 1;
            totalAmount = totalAmount + 30;
        }
        else if (choice == 5)
        {
            cout << "\n\t\tBicycle arrived" << endl;
            bicycleCount = bicycleCount + 1;
            totalAmount = totalAmount + 10;
        }
        else if (choice == 6)
        {
            cout << "\n\t\tBike departure" << endl;
            bikeCount = bikeCount - 1;
            totalAmount = totalAmount - 20;
        }
        else if (choice == 7)
        {
            cout << "\n\t\tCar departure" << endl;
            carCount = carCount - 1;
            totalAmount = totalAmount - 30;
        }
        else if (choice == 8)
        {
            cout << "\n\t\tBus departure" << endl;
            busCount = busCount - 1;
            totalAmount = totalAmount - 50;
        }
        else if (choice == 9)
        {
            cout << "\n\t\tRishkaw departure" << endl;
            rishkawCount = rishkawCount - 1;
            totalAmount = totalAmount - 30;
        }
        else if (choice == 10)
        {
            cout << "\n\t\tBicyce departure" << endl;
            bicycleCount = bicycleCount - 1;
            totalAmount = totalAmount - 10;
        }
        else if (choice == 11)
        {
            cout << "\n\t\tShow record!!!" << endl;
            cout << "\n\t\tRecord:" << endl;
            cout << "\n\t\tThe current number of Cars parked is:" << carCount << endl;
            cout << "\n\t\tThe current number of Bikes parked is:" << bikeCount << endl;
            cout << "\n\t\tThe current number of Buses parked is:" << busCount << endl;
            cout << "\n\t\tThe current number of Bicycles parked is:" << bicycleCount << endl;
            cout << "\n\t\tTotal current cash is:" << totalAmount << endl;
        }
        else if (choice == 12)
        {
            cout << "\n\t\tEdit record!!!" << endl;
            
            int edit = 0;
            
            cout << "Select what do you want to edit:";
            cout<<"\n\n\t\t\t  1. Cars \t\t\t  2. Bikes ";
            cout<<"\n\n\t\t\t  3. Buses \t\t\t  4. Rishkaws ";
            cout<<"\n\n\t\t\t  5. Bicycles \t\t\t  6. EXIT ";
            cin>>edit;
            if(edit == 1)
            {
                cout<<"\n\n\t\t\tEditing Cars"<<endl;
            }
            else if(edit == 2)
            {
                cout<<"\n\n\t\t\tEditing Bikes"<<endl;
            }
            else if(edit == 3)
            {
                cout<<"\n\n\t\t\tEditing Buses"<<endl;
            }
            else if(edit == 4)
            {
                cout<<"\n\n\t\t\tEditing Rishkaws"<<endl;
            }
            else if(edit == 5)
            {
                cout<<"\n\n\t\t\tEditing Bicycles"<<endl;
            }
            else if(edit == 6)
            {
                cout<<"\n\n\t\t\tExiting Editing"<<endl;
            }
            else
            {
                cout<<"\n\n\t\t\tPlease only select from given options"<<endl;
            }
        }
        else if (choice == 13)
        {
            cout << "\n\t\tDelete record!!!" << endl;
            cout << "\n\t\tAre you sure? (Y=1/N=0):";
        
            int sure;
            cin>>sure;
        
            if(sure == 1)
            {
                cout<<"All record is deleted"<<endl;

                totalAmount = 0;
                totalVahicles =0;
                carCount=0;
                bikeCount=0;
                busCount=0;
                rishkawCount=0;
                bicycleCount=0;
            
            }
            else if(sure ==0)
            {
                cout<<"Action reverted";
            }
            else
            {
                cout<<"Please only select 1 or 0"<<endl;
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