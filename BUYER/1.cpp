/*#include<iostream>
#include<cstring>
#include<fstream>
#include<conio.h>

using namespace std;

class buyer
{
private:
    string firstname;
    string lastname;
    string fathername;
    string DOB; // Changed to string to store date in the format DD/MM/YY
    int age;
    string nationality;
    string status;
    char username[20];
    char password[20];

public:
    void Register()
    {
        cout << "First Name              : ";
        cin >> firstname;
        cout << "Last Name               : ";
        cin >> lastname;
        cout << "Father's Name           : ";
        cin >> fathername;
        cout << "Date Of Birth(DD/MM/YY) : ";
        cin >> DOB;
        cout << "Age                     : ";
        cin >> age;
        cout << "Nationality             : ";
        cin >> nationality;
        cout << "Status                  : ";
        cin >> status;
        cout << "Email                   : ";
        cin >> username;
        cout << "Password                : ";

        int i = 0;
        while (i < 20) // Changed loop condition
        {
            password[i] = _getch(); // Use _getch() instead of getch() for compatibility
            if (password[i] == 13) // Enter key
            {
                password[i] = '\0';
                break;
            }
            cout << "*";
            i++;
        }
    }

    // Friend functions
    friend istream& operator>>(istream& ask, buyer& other)
    {
        other.Register();
        return ask;
    }

    friend ostream& operator<<(ostream& print, buyer& other)
    {
        print << "First Name              : " << other.firstname << endl;
        print << "Last Name               : " << other.lastname << endl;
        print << "Father's Name           : " << other.fathername << endl;
        print << "Date Of Birth(DD/MM/YY) : " << other.DOB << endl;
        print << "Age                     : " << other.age << endl;
        print << "Nationality             : " << other.nationality << endl;
        print << "Status                  : " << other.status << endl;
        print << "Email                   : " << other.username << endl;
        print << "Password                : " << other.password << endl;

        return print;
    }

    bool operator==(const buyer& other)
    {
        return (strcmp(username, other.username) == 0) && (strcmp(password, other.password) == 0);
    }
};

class login
{
private:
    string  checkemail;
    string  checkpassword;

public:

    login() {} // Default constructor

    login(string email, string password) // Parameter constructor
    {
        checkemail = email;
        checkpassword = password;
    }

    friend istream& operator>>(istream& ask, login& other)
    {
        cout << "Enter Email    : ";
        ask >> other.checkemail;
        cout << "Enter Password : ";
        ask >> other.checkpassword;

        return ask;
    }

    friend ostream& operator<<(ostream& print,login& other)
    {
        print << "Email       : "<< other.checkemail << endl;
        print << "Password    : "<< other.checkpassword << endl;

        return print;
    }

    bool operator==( buyer& other)
    {
        return (checkemail == other.checkemail) && (checkpassword == other.checkpassword);
    }
};

int main()
{
    int options;
    string password;
    string email;
    buyer Register;

    cout << "\t\tLet's Get You Started ! ! ! \n\n" << endl;
    cin >> Register;

    fstream Registerinformationfile; //.... write mode
    Registerinformationfile.open("Register_information.txt", ios::out);
    Registerinformationfile << Register;
    Registerinformationfile.close(); // close the file

    cout << "Registration Completed Successfully ! ! ! \n\n\n" << endl;

    cout << "\t\tWELCOME TO FASTWHEELS WEBSITE !!!\n\n" << endl << endl;

    cout << "\n\nSo we have 3 Options For You ! " << endl << endl;
    cout << "[1].Buyer Menu " << endl;
    cout << "[2].Seller Menu " << endl;
    cout << "[3].Admin Menu\n\n " << endl;
    cout << "Choose Options Wisely (1-3) : ";
    cin >> options;

    //cout << "\nEnter Email    : ";
    //cin.ignore();
    //getline(cin, email);

    //cout << "\nEnter Password : ";
    //int ch = 0;
    //while (ch != 13)
    //{
      //  password.push_back(ch);
       // cout << "*";
       // ch = _getch();
   // }

    // reads the file word by word
    ifstream checkfile("Register_information.txt");

    if (checkfile.is_open())
    {
        login checkBuyer;
        checkfile >> checkBuyer;

        if (checkBuyer == Register)
        {
            cout << "Login successfully ! " << endl;
        }
        else
        {
            cout << "Doesn't Login ! " << endl;
        }

        checkfile.close();
    }
    else
    {
        cout << "ERROR Opening the file for reading." << endl;
        return 1;
    }

    return 0;
}*/


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class buyer
{
private:
    string firstname;
    string lastname;
    string fathername;
    string DOB;
    int age;
    string nationality;
    string status;
    string username; // Use string instead of char array for username
    string password;

public:
    void Register()
    {
        cout << "First Name              : ";
        cin >> firstname;
        cout << "Last Name               : ";
        cin >> lastname;
        cout << "Father's Name           : ";
        cin >> fathername;
        cout << "Date Of Birth(DD/MM/YY) : ";
        cin >> DOB;
        cout << "Age                     : ";
        cin >> age;
        cout << "Nationality             : ";
        cin >> nationality;
        cout << "Status                  : ";
        cin >> status;
        cout << "Email                   : ";
        cin >> username;
        cout << "Password                : ";
        cin >> password;
    }

    // Friend functions
    friend istream &operator>>(istream &ask, buyer &other)
    {
        other.Register();
        return ask;
    }

    friend ostream &operator<<(ostream &print, const buyer &other)
    {
        print << "First Name              : " << other.firstname << endl;
        print << "Last Name               : " << other.lastname << endl;
        print << "Father's Name           : " << other.fathername << endl;
        print << "Date Of Birth(DD/MM/YY) : " << other.DOB << endl;
        print << "Age                     : " << other.age << endl;
        print << "Nationality             : " << other.nationality << endl;
        print << "Status                  : " << other.status << endl;
        print << "Email                   : " << other.username << endl;
        print << "Password                : " << other.password << endl;

        return print;
    }

    bool operator==(const buyer &other)
    {
        return (username == other.username) && (password == other.password);
    }
};

int main()
{
    int options;
    string password;
    string email;
    buyer Register;

    cout << "\t\tLet's Get You Started ! ! ! \n\n" << endl;
    cin >> Register;

    // Open the file in append mode to store multiple user entries
    ofstream Registerinformationfile("Register_information.txt", ios::app);

    if (!Registerinformationfile.is_open())
    {
        cout << "ERROR Opening the file for writing." << endl;
        return 1;
    }

    Registerinformationfile << Register;
    Registerinformationfile.close(); // Close the file

    cout << "Registration Completed Successfully ! ! ! \n\n\n" << endl;

    cout << "\t\tWELCOME TO FASTWHEELS WEBSITE !!!\n\n"
         << endl
         << endl;

    cout << "\n\nSo we have 3 Options For You ! " << endl
         << endl;
    cout << "[1].Buyer Menu " << endl;
    cout << "[2].Seller Menu " << endl;
    cout << "[3].Admin Menu\n\n "
         << endl;
    cout << "Choose Options Wisely (1-3) : ";
    cin >> options;

    cout << "\nEnter Email    : ";
    cin.ignore();
    getline(cin, email);

    cout << "\nEnter Password : ";
    cin >> password;

    // Read the file line by line
    ifstream checkfile("Register_information.txt");

    if (checkfile.is_open())
    {
        buyer checkBuyer;
        while (checkfile >> checkBuyer)
        {
            if (checkBuyer == buyer(email, password))
            {
                cout << "Login successfully ! " << endl;
                checkfile.close();
                return 0; // Exit the program after successful login
            }
        }

        cout << "Incorrect password or email." << endl;
        checkfile.close();
    }
    else
    {
        cout << "ERROR Opening the file for reading." << endl;
        return 1;
    }

    return 0;
}
