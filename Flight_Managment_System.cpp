#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
//DOING CHANGES IN LIBRARIES

using namespace std;

class Details
{

protected:
    static string gender;
    string name, address;
    int age;
    string phoneNum;
    static string customerId;
    char arr[50];

public:
    void info()
    {
        cout << "\nEnter Customer id: " << endl;
        cin >> customerId;

        cout << "\nEnter your full name: " << endl;
        cin >> name;
        getline(cin, name);

        cout << "\nEnter your gender(male/female): " << endl;
        cin >> gender;

        do
        {
            cout << "\nEnter your age: " << endl;
            cin >> age;

        } while (age < 18);

        cout
            << "\nEnter your address: " << endl;
        cin >> address;
        getline(cin, address);

        do
        {
            cout << "\nEnter your phone number: (11-characters)" << endl;
            cin >> phoneNum;

        } while (phoneNum.length() != 11);

        cout << "Your details are saved :)" << endl;
    }
};

void mainMenu();

class Managment
{
public:
    Managment()
    {
        mainMenu();
    }
};

string Details ::customerId;
string Details ::gender;

class Registration
{

protected:
    static int choice;
    int choice1;
    char back;
    static float charges;

public:
    void flights()
    {
        string flightNames[] = {"France", "Brazil", "Germany", "Italy", "Argentina"};
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << ".flight to"
                 << " " << flightNames[i] << endl;
        }
        cout << "\nWelcome to qatar airlines!" << endl;
        cout << "Press the number of country you want to book the flight" << endl;
        cin >> choice;

        if (choice == 1)
        {
            cout << "____FOllOWING ARE THE FLIGHTS____" << endl;
            cout << "1. FRA-999" << endl;
            cout << "\t6/5/2023 10:00AM 2hrs Rs 40,000" << endl;

            cout << "2. FRA-998" << endl;
            cout << "\t6/8/2023 9:00AM 2hrs Rs 35,000" << endl;

            cout << "3. FRA-997" << endl;
            cout << "\t6/10/2023 7:00AM 2hrs Rs 37,000" << endl;

            cout << "Select your flight" << endl;
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 40000;
                cout << "\n flight FRA-99 successfully booked" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 35000;
                cout << "\n flight FRA-98 successfully booked" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 37000;
                cout << "\n flight FRA-97 successfully booked" << endl;
            }
            else
            {
                cout << "Invalid input" << endl;
                flights();
            }
            cout << "press 1 to go back to main menu: " << endl;
            while (true)
            {
                cin >> back;
                if (back == '1')
                {
                    mainMenu();
                    break;
                }
            }
        }

        else if (choice == 2)
        {
            cout << "____FOllOWING ARE THE FLIGHTS____" << endl;
            cout << "1. BRA-220" << endl;
            cout << "\t6/5/2023 10:00AM 2hrs Rs 60,000" << endl;

            cout << "2. BRA-221" << endl;
            cout << "\t6/8/2023 2:00AM 2hrs Rs 65,000" << endl;

            cout << "3. BRA-222" << endl;
            cout << "\t6/10/2023 7:00AM 2hrs Rs 55,000" << endl;

            cout << "Select your flight" << endl;
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 60000;
                cout << "\n flight BRA-220 successfully booked" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 65000;
                cout << "\n flight BRA-221 successfully booked" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 55000;
                cout << "\n flight BRA-222 successfully booked" << endl;
            }
            else
            {
                cout << "Invalid input" << endl;
                flights();
            }
            cout << "press 1 to go back to main menu: " << endl;
            while (true)
            {
                cin >> back;
                if (back == '1')
                {
                    mainMenu();
                    break;
                }
            }
        }
        else if (choice == 3)
        {
            cout << "____FOllOWING ARE THE FLIGHTS____" << endl;
            cout << "1. GER-320" << endl;
            cout << "\t6/5/2023 11:00AM 2hrs Rs 40,000" << endl;

            cout << "2. GER-321" << endl;
            cout << "\t6/8/2023 2:00AM 2hrs Rs 45,000" << endl;

            cout << "3. GER-322" << endl;
            cout << "\t6/10/2023 7:00AM 2hrs Rs 50,000" << endl;

            cout << "Select your flight" << endl;
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 60000;
                cout << "\n flight GER-320 successfully booked" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 65000;
                cout << "\n flight GER-321 successfully booked" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 55000;
                cout << "\n flight GER-322 successfully booked" << endl;
            }
            else
            {
                cout << "Invalid input" << endl;
                flights();
            }
            cout << "press 1 to go back to main menu: " << endl;
            while (true)
            {
                cin >> back;
                if (back == '1')
                {
                    mainMenu();
                    break;
                }
            }
        }

        else if (choice = 4)
        {
            cout << "____FOllOWING ARE THE FLIGHTS____" << endl;
            cout << "1. ITA-320" << endl;
            cout << "\t6/5/2023 11:00AM 2hrs Rs 70,000" << endl;

            cout << "2. ITA-321" << endl;
            cout << "\t6/8/2023 2:00AM 2hrs Rs 75,000" << endl;

            cout << "3. ITA-322" << endl;
            cout << "\t6/10/2023 7:00AM 2hrs Rs 70,000" << endl;

            cout << "Select your flight" << endl;
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 70000;
                cout << "\n flight ITA-320 successfully booked" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 75000;
                cout << "\n flight ITA-321 successfully booked" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 75000;
                cout << "\n flight ITA-322 successfully booked" << endl;
            }
            else
            {
                cout << "Invalid input" << endl;
                flights();
            }
            cout << "press 1 to go back to main menu: " << endl;
            while (true)
            {
                cin >> back;
                if (back == '1')
                {
                    mainMenu();
                    break;
                }
            }
        }

        else if (choice = 5)
        {
            cout << "____FOllOWING ARE THE FLIGHTS____" << endl;
            cout << "1. ARG-520" << endl;
            cout << "\t6/5/2023 11:00AM 2hrs Rs 90,000" << endl;

            cout << "2. ARG-521" << endl;
            cout << "\t6/8/2023 2:00AM 2hrs Rs 95,000" << endl;

            cout << "3. ARG-522" << endl;
            cout << "\t6/10/2023 7:00AM 2hrs Rs 90,000" << endl;

            cout << "Select your flight" << endl;
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 90000;
                cout << "\n flight ARG-520 successfully booked" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 95000;
                cout << "\n flight ARG-521 successfully booked" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 950005;
                cout << "\n flight ARG-522 successfully booked" << endl;
            }
            else
            {
                cout << "Invalid input" << endl;
                flights();
            }
            cout << "press 1 to go back to main menu: " << endl;
            while (true)
            {
                cin >> back;
                if (back == '1')
                {
                    mainMenu();
                    break;
                }
            }
        }
    }
};

float Registration ::charges;
int Registration ::choice;

class Tickets : public Registration, public Details
{
public:
    void bill()
    {
        string destination = " ";
        ofstream obj("Flight_Records.txt");
        {
            obj << " _____QATAR AIRWAYS___" << endl;
            obj << "______Tickets______" << endl;
            obj << "__________________________" << endl;
            obj << "Customer Id: " << customerId << endl;
            obj << "Customer Name: " << name << endl;
            obj << "Customer Gender: " << gender << endl;
            if (Registration ::choice == 1)
            {
                destination = "France";
            }
            else if (Registration ::choice == 2)
            {
                destination = "Brazil";
            }
            else if (Registration ::choice == 3)
            {
                destination = "Germany";
            }
            else if (Registration ::choice == 4)
            {
                destination = "Italy";
            }
            else if (Registration ::choice == 5)
            {
                destination = "Argentina";
            }
            obj << "Customer destination: " << destination << endl;
            obj << "Flight Cost"
                << " " << Registration::charges << endl;
        }
        obj.close();
    }

    void display()
    {
        ifstream readObj("Flight_Records.txt");
        if (!readObj)
        {
            cout << "File Error!!!" << endl;
        }
        while (readObj)
        {
            readObj.getline(arr, 50);
            cout << arr << endl;
        }
        readObj.close();
    }
};

void mainMenu()
{
    int lchoice, schoice;
    char back;

    cout << "\t      QATAR AIRWAYS\n"
         << endl;
    cout << "\t_________MAIN MENU_________\n"
         << endl;
    cout << "press 1 to add customer details" << endl;
    cout << "press 2 to register flight" << endl;
    cout << "press 3 for ticket and charges" << endl;
    cout << "press 4 to exit" << endl;
    cout << "______________________________" << endl;
    cout << "Enter your coice: " << endl;
    cin >> lchoice;

    Details d;
    Registration r;
    Tickets t;

    if (lchoice == 1)
    {
        cout << "_____CUSTOMERS_____" << endl;
        d.info();

        cout << "press 1 to go back to main menu: " << endl;
        while (true)
        {
            cin >> back;
            if (back == '1')
            {
                mainMenu();
                break;
            }
        }
    }

    else if (lchoice == 2)
    {
        cout << "____BOOK A FLIGHT___\n"
             << endl;
        r.flights();
    }
    else if (lchoice == 3)
    {
        cout << "____GET YOUR TICKET___" << endl;
        t.bill();

        cout << "your ticket is booked" << endl;
        cout << "press 1 to display your ticket and 0 to go back to main menu: " << endl;
        cin >> back;
        if (back == '1')
        {
            t.display();
        }
        else if (back == '0')
        {
            mainMenu();
        }
    }
    else if (lchoice == 4)
    {
        cout << "\n_____THANK YOU____" << endl;
    }
    else
    {
        cout << "Invalid Input" << endl;
    }
}

int main()
{
    Managment man_obj;
    return 0;
}