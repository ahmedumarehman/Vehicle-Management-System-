#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class login
{
private:
    string email;
    string password;

public:
    login() {}

    login(string e, string p) : email(e), password(p) {}

    friend istream &operator>>(istream &ask, login &other)
    {
        cout << "Enter Email    : ";
        ask >> other.email;
        cout << "Enter Password : ";
        ask >> other.password;
        return ask;
    }

    friend ostream &operator<<(ostream &print, login &other)
    {
        print << other.email << "," << other.password;
        return print;
    }

    // Getter methods
    string getEmail() const
    {
        return email;
    }

    string getPassword() const
    {
        return password;
    }
};

int main()
{
    cout << "\t\tLet's Get You Started ! ! ! " << endl;
    string e;
    string p;
    string information_of_email_and_password;

    login L1;
    cin >> L1;

    ofstream myfile("filename.txt");
    myfile << L1;
    myfile.close();

    cout << "Enter email: ";
    cin >> e;

    cout << "Enter password: ";
    cin >> p;

    ifstream readfile("filename.txt");

    while (getline(readfile, information_of_email_and_password))
    {
        size_t pos = information_of_email_and_password.find(",");
        string storedEmail = information_of_email_and_password.substr(0, pos);
        string storedPassword = information_of_email_and_password.substr(pos + 1);

        if (e == storedEmail && p == storedPassword)
        {
            cout << "Login successful!" << endl;
        }
        else
        {
            cout << "Invalid login credentials." << endl;
        }

        cout << "Here's information\n\n";
        cout << information_of_email_and_password << endl;
    }

    readfile.close();

    return 0;
}
