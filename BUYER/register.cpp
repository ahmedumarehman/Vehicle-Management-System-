#include<iostream>
//#include<windows.h>
#include<cstring>
#include<fstream>
//#include<conio.h>
using namespace std;

class buyer
{
private:
    string firstname;
    string lastname;
    string fathername;
    double DOB; // Changed to string to store date in the format DD/MM/YY
    int age;
    string nationality;
    string status;
    string email;
    string password;

public:
    void Register()
    {
    cout << "First Name              : ";
    cin >> firstname;
    cout << "Last Name               : ";
    cin >> lastname;
    cout << "Father's Name           : ";
    cin>>fathername;
    cout << "Date Of Birth(DD/MM/YY) : ";
    cin >> DOB;
    cout << "Age                     : ";
    cin >> age;
    cout << "Nationality             : ";
    cin >> nationality;
    cout << "Status                  : ";
    cin >> status;
    cout << "Email                   : ";
    cin >> email;
    cout << "Password                : ";
    cin>>password;

    //int i = 0;
   // while (i < 20) // Changed loop condition
    //{
     //   password[i] = _getch(); // Use _getch() instead of getch() for compatibility
      //  if (password[i] == 13) // Enter key
       // {
        //    password[i] = '\0';
       //     break;
       // }
       // cout << "*";
        //i++;
    //}
    }
    

    // Friend functions
    friend istream& operator>>(istream &ask, buyer &other)
    {
        other.Register();
        return ask;
    }
    friend ostream& operator<<(ostream &print, buyer &other)
    {
    print << other.firstname<<","<<other.lastname<<","<<other.fathername
    <<other.DOB<<","<<other.age<<","<<other.nationality<<","<<other.status
    <<other.email<<","<<other.password;
    //print << other.lastname << endl;
    //print << other.fathername << endl;
    //print  << other.DOB << endl;
    //print  << other.age << endl;
    //print << other.nationality << endl;
    //print << other.status << endl;
    //cout <<endl<< endl;
    //print << other.username << endl;
    //print << other.password << endl;

    return print;
    }

    bool operator==(const buyer&other)
    {
        return (email==other.email) && (password==other.password);
    }



}; //............... end of register class


   
   
  
int main()
{
    int options;
    string password;
    string email;
    buyer Register;

    cout << "\t\tLet's Get You Started ! ! ! \n\n"<< endl;
    cin >> Register;

    fstream Registerinformationfile; //.... write mode
    Registerinformationfile.open("Register_information.txt", ios::out);
    {
        Registerinformationfile << Register;
    }

    Registerinformationfile.close(); // close the file
    

    cout << "Registration Completed Successfully ! ! ! \n\n\n"<< endl;

    cout << "\t\tWELCOME TO FASTWHEELS WEBSITE !!!\n\n"<< endl<< endl;

    cout << "\n\nSo we have 3 Options For You ! " << endl<< endl;
    cout << "[1].Buyer Menu " <<endl;
    cout << "[2].Seller Menu " <<endl;
    cout << "[3].Admin Menu\n\n "<<endl;
    cout << "Choose Options Wisely (1-3) : ";
    cin >> options;

    


    
    cout << "\nEnter Email    : ";
    cin.ignore();
    getline(cin,email);

    
    cout << "\nEnter Password : ";
    
    getline(cin, password);
   // int ch = 0;
   // while (ch != 13)
//    {
  //      password.push_back(ch);
    //    cout << "*";
      //  ch = _getch();
    //}

    // reads the file word by word

    
    ifstream checkfile("Register_information.txt");

  if (checkfile.is_open())
{
    string checkemail;
    string checkpassword;
    checkfile >> checkemail >> checkpassword; // Corrected file reading logic

    if (email == checkemail && password == checkpassword)
    {
        cout << "Login successfully! " << endl;
    }
    else
    {
        cout << "Doesn't login! " << endl;
    }

    checkfile.close();
}


    else
    {
        cout<<"ERROR Opening the file for reading ."<<endl;
        return 1;
    }

    
    return 0;

    }
    
