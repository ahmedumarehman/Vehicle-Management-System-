

#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <cstdlib>
#include <conio.h>
using namespace std;

void menu()
{

    cout << "                  ___________________________\n";
    cout << "		 |			     | \n";
    cout << "      		 |			     |\n";
    cout << "    ____________ | __________________________|________________\n";
    cout << "   |							     |\n";
    cout << "   |							     |\n";
    cout << "   |_________ _______________________________________________|\n";
    cout << "		 |     |		|     |        \n";
    cout << "		 |_____|		|_____|\n";
    cout << "\n\n";
    cout << "       	                    ___        ___   ___   _____   ___	\n";
    cout << "                  |     |  |     |    |     |   | |  |  | |\n";
    cout << "                  |     |  |___  |    |     |   | |  |  | |___    \n";
    cout << "                  |  |  |  |     |    |     |   | |     | |\n";
    cout << "                  |__|__|  |___  |___ |___  |___| |     | |___\n";
    cout << "\n";
    cout << "\n";
    cout << "		                  _____   ____\n";
    cout << "			            |    |    |	\n";
    cout << "			            |    |    |\n";
    cout << "			            |    |    |\n";
    cout << "			            |    |____|\n";
    cout << "\n";
    cout << "\n";
    cout << "	 _____   _____   ______ _______                     ____  ____ 		_____\n";
    cout << "	|	|     | |   	   |	    |     |  |   | |	 |      |      |	\n";
    cout << "	|_____  |_____| |_____     |        |     |  |   | |____ |____  |      |_____\n";
    cout << "	| 	|     |	      |    |        |     |  |___| |     |      |           |\n";
    cout << "	|	|     |       |    |        |  |  |  |   | |  	 |      |           |\n";
    cout << "	|	|     | ______|    |        |__|__|  |   | |____ |____  |____  _____|\n";
    cout << "\n";
}
void displaywholemenu()
{
    cout << " _________________________________   	_________________________________      _________________________________\n";
    cout << "|_____________BUYER_______________|    |_____________SELLER______________|    |_____________ADMIN_______________|      \n";
    cout << "| 		                  |    | 		                 |    |                                 |  				   \n";
    cout << "|  [1]. View Vehicles             |    |  [1]. View Vehicles             |    |  [1]. Add Vehicle               |						\n";
    cout << "|  [2]. View Auction              |    |  [2]. Add Vehicle               |    |  [2]. Remove Vehicle            |					    \n";
    cout << "|  [3]. Request Inspection Report |    |  [3]. Remove Vehicle            |    |  [3]. Manage Inspection Report  |				\n";
    cout << "|  [4]. Contact Seller 		  |    |  [4]. Register In Auction       |    |  [4]. Add Notification          |							\n";
    cout << "|  [5]. View Notification         |    |  [5]. View Notification         |    |  [5]. Rate A Vehicle            |								\n";
    cout << "|  [6]. Add Comment               |    |  [6]. Logout                    |    |  [6]. Logout                    |\n";
    cout << "|  [7]. Logout                    |    |                                 |    |                                 |\n";
    cout << "-----------------------------------     ---------------------------------      ---------------------------------									\n";
    // cout<<"\n";
    // cout<<"\n";
    // cout<<"\n";
}

class abstract_buyer
{
private:
public:
    virtual void viewvehicle() = 0;
    virtual void viewauction() = 0;
    virtual void viewcontact() = 0;
    virtual void inspectionreport() = 0;
    virtual void notification() = 0;
    // virtual void viewnotification()=0;
    // virtual void contact_notification()=0;
};

class abstract_seller // parent class
{
private:
public:
    virtual void viewvehicle() = 0;
    virtual void viewcontact() = 0;
    virtual void viewnotification() = 0;
    virtual void contact_notification() = 0;
};

class vehicle : public abstract_buyer, public abstract_seller // child class
{
private:
    string vehiclename;
    string company;
    string model;
    double mileage;
    int price;
    string description;
    string sellername;
    int contact;
    string fueltype;
    string engine;
    double rating;
    int makeyear;
    string availableincity;
    string color;

public:
    vehicle() //..... default constructor
        : vehiclename(""), company(""), model(""), mileage(0.0), price(0), description(""), sellername(""), contact(0),
          fueltype(""), engine(""), rating(0.0), makeyear(0), availableincity(""), color("")
    {
    }

    vehicle(string name, string descript, string seller, string comp, string m, double mile, int p, int c, string fuel, string e, double r, int year, string available, string col)
        : vehiclename(name), description(descript), sellername(seller), company(comp), model(m), mileage(mile), price(p), contact(c),
          fueltype(fuel), engine(e), rating(r), makeyear(year), availableincity(available), color(col)
    {
    }

    void viewvehicle()
    {
        cout << "Vehicle Type      : " << vehiclename << endl;
        cout << "Company           : " << company << endl;
        cout << "Model             : " << model << endl;
        cout << "Mileage           : " << mileage << " KM/per Litre" << endl;
        cout << "Price             : " << price << " Rupees " << endl;
        cout << "Description       : " << description << " Condition " << endl;
        cout << "Seller Name       : " << sellername << endl;
        cout << "Contact           : " << contact << endl;
        cout << "Fuel Type         : " << fueltype << endl;
        cout << "Engine            : " << engine << endl;
        cout << "Rating            : " << rating << "/10" << endl;
        cout << "Year              : " << makeyear << endl;
        cout << "Available in City : " << availableincity << endl;
        cout << "Color             : " << color << endl;

        cout << "\n\n\n";
    }

    void viewauction()
    {
        cout << "Vehicle Type      : " << vehiclename << endl;
        cout << "Company           : " << company << endl;
        cout << "Model             : " << model << endl;
        cout << "Mileage           : " << mileage << " KM/per Litre" << endl;
        cout << "Price             : " << price << " Rupees " << endl;
        cout << "Description       : " << description << " Condition " << endl;
        cout << "Seller Name       : " << sellername << endl;
        cout << "Contact           : " << contact << endl;
        cout << "Fuel Type         : " << fueltype << endl;
        cout << "Engine            : " << engine << endl;
        cout << "Rating            : " << rating << "/10" << endl;
        cout << "Year              : " << makeyear << endl;
        cout << "Available in City : " << availableincity << endl;
        cout << "Color             : " << color << endl;

        cout << "\n\n\n";
    }

    friend ostream &operator<<(ostream &print, vehicle &other)
    {
        print << other.vehiclename << endl;
        print << other.company << endl;
        print << other.model << endl;
        print << other.mileage << endl;
        print << other.price << endl;
        print << other.description << endl;
        print << other.sellername << endl;
        print << other.contact << endl;
        print << other.fueltype << endl;
        print << other.engine << endl;
        print << other.rating << endl;
        print << other.makeyear << endl;
        print << other.availableincity << endl;
        print << other.color << endl;

        return print;
    }

    friend istream &operator>>(istream &ask, vehicle &other)
    {
        cout << "Vehicle      : ";
        ask >> other.vehiclename;
        cout << "Company      : ";
        ask >> other.company;
        cout << "Model        : ";
        ask >> other.model;
        cout << "Mileage      : ";
        ask >> other.mileage;
        while (other.mileage < 0)
        {
            cout << "Enter Again      : ";
            ask >> other.mileage;
        }
        cout << "Price        : ";
        ask >> other.price;
        while (other.price < 0)
        {
            cout << "Enter Again      : ";
            ask >> other.price;
        }
        cout << "Description  : ";
        ask >> other.description;
        cout << "Seller Name  : ";
        ask >> other.sellername;
        cout << "Contact      : ";
        ask >> other.contact;
        cout << "Fuel Type    : ";
        ask >> other.fueltype;
        cout << "Engine       : ";
        ask >> other.engine;
        cout << "Rating(10)   : ";
        ask >> other.rating;
        while (other.rating > 10)
        {
            cout << "Enter Again  : ";
            ask >> other.rating;
        }
        cout << "Make Year    : ";
        ask >> other.makeyear;
        cout << "Available In City : ";
        ask >> other.availableincity;
        cout << "Color        : ";
        ask >> other.color;

        return ask;
    }
    void viewcontact()
    {
        cout << "\t\tContact Information\n\n";
        cout << "Seller Name : " << sellername << endl;
        cout << "Contact     : " << contact << endl;
        cout << "\n\nCall Connecting . . . \n\n";
        cout << "Connected. Speak now . . . \n\n\n";
        // Sleep(5);
    }

    void inspectionreport()
    {
        cout << "Exterior & Body -------------------------------- " << rand() % 100 << "%" << endl;
        cout << "AC/Heater -------------------------------------- " << rand() % 100 << "%" << endl;
        cout << "Suspension/Steering ---------------------------- " << rand() % 100 << "%" << endl;
        cout << "Interior --------------------------------------- " << rand() % 100 << "%" << endl;
        cout << "Engine/Clutch ---------------------------------- " << rand() % 100 << "%" << endl;
    }

    void notification()
    {
        cout << "Here's All The Detail Of Vehicle. Take A Look ! ! ! \n\n";
    }

    void contact_notification()
    {
        cout << "Contact Information\n\n";
        cout << "Seller's Name    : " << sellername << endl;
        cout << "Seller's Contact : " << contact << endl;
    }

    void viewnotification()
    {
        cout << "\n\n\nHere's Your Notification Of Your Vehicle !\n";
        cout << "Correct Where's wrong. Here's our information\n";
        cout << "Address    : House#456, Street 4D, FAST Road, Lahore\n";
        cout << "Contact No : +923305869710\n ";
    }
};

class used_cars : public abstract_buyer, public abstract_seller
{
private:
    vehicle BMW;
    vehicle Suzuki;
    vehicle Toyota;

public:
    // used_cars()
    //: BMW("Car", "Good", "Babar", "BMW", "M83", 19.54, 220000, 219710, "Petrol", "7PO6", 7.5, 2015, "Rawalpindi", "Red"),
    // Suzuki("Car", "Excellent", "Imam", "Suzuki", "Alto", 21.54, 270000, 211097, "Diesel", "8LK9", 8.5, 2019, "Islamabad", "White"),
    // Toyota("Car", "Good", "Rizwan", "Toyota", "Altis", 25.83, 320000, 214459, "Petrol", "9SX2", 7.5, 2014, "Sarghoda", "Grey")
    //{
    //}
    used_cars() // default constructor
    {
    }

    used_cars(string name, string descript, string seller, string comp, string m, double mile, int p, int c, string fuel, string e, double r, int year, string available, string col) : BMW(name, descript, seller, comp, m, mile, p, c, fuel, e, r, year, available, col),
                                                                                                                                                                                        Suzuki(name, descript, seller, comp, m, mile, p, c, fuel, e, r, year, available, col),
                                                                                                                                                                                        Toyota(name, descript, seller, comp, m, mile, p, c, fuel, e, r, year, available, col)

    {
    }

    void viewvehicle()
    {
        BMW.viewvehicle();
        // Suzuki.viewvehicle();
        // Toyota.viewvehicle();
    }

    void viewauction()
    {
        BMW.viewauction();
        // Suzuki.viewauction();
        // Toyota.viewauction();
    }

    void viewcontact()
    {
        BMW.viewcontact();
        // Suzuki.viewcontact();
        // Toyota.viewcontact();
    }

    void inspectionreport()
    {
        BMW.inspectionreport();
    }

    void notification()
    {
        cout << "Here's Your Notification Of Your Vehicle !\n";
        cout << "Correct Where's wrong. Here's our information\n";
        cout << "Address    : House#456, Street 4D, FAST Road,Lahore\n";
        cout << "Contact No : +923305869710\n ";
        BMW.viewvehicle();
        BMW.viewcontact();
        BMW.inspectionreport();
    }

    void viewnotification()
    {
        cout << "Here's Your Notification Of Your Vehicle !\n";
        cout << "Correct Where's wrong. Here's our information\n";
        cout << "Address    : House#456, Street 4D, FAST Road,Lahore\n";
        cout << "Contact No : +923305869710\n ";
        BMW.viewvehicle();
        BMW.contact_notification();
    }

    void contact_notification()
    {
        BMW.viewvehicle();
        BMW.contact_notification();
    }

    friend ostream &operator<<(ostream &print, used_cars &other)
    {
        print << other.BMW << endl;
        // print << other.Suzuki << endl;
        // print << other.Toyota << endl;

        return print;
    }
};

class new_cars : public abstract_buyer, public abstract_seller
{
private:
    vehicle GMC;
    vehicle Ford;
    vehicle Ferrari;

public:
    new_cars() // default constructor
    {
    }

    new_cars(string name, string descript, string seller, string comp, string m, double mile, int p, int c, string fuel, string e, double r, int year, string available, string col)
        : GMC(name, descript, seller, comp, m, mile, p, c, fuel, e, r, year, available, col),
          Ford(name, descript, seller, comp, m, mile, p, c, fuel, e, r, year, available, col),
          Ferrari(name, descript, seller, comp, m, mile, p, c, fuel, e, r, year, available, col)
    {
    }

    void viewvehicle()
    {
        GMC.viewvehicle();
        // Ford.viewvehicle();
        // Ferrari.viewvehicle();
    }

    void viewauction()
    {
        GMC.viewauction();
    }

    void viewcontact()
    {
        GMC.viewcontact();
    }

    void inspectionreport()
    {
        GMC.inspectionreport();
    }

    void notification()
    {
        cout << "\n\n\nHere's Your Notification Of Your Vehicle !\n";
        cout << "Correct Where's wrong. Here's our information\n";
        cout << "Address    : House#456, Street 4D, FAST Road,Lahore\n";
        cout << "Contact No : +923305869710\n ";
        GMC.viewvehicle();
        GMC.viewcontact();
        GMC.inspectionreport();
    }

    void viewnotification()
    {
        cout << "\n\n\nHere's Your Notification Of Your Vehicle !\n";
        cout << "Correct Where's wrong. Here's our information\n";
        cout << "Address    : House#456, Street 4D, FAST Road,Lahore\n";
        cout << "Contact No : +923305869710\n ";
        GMC.viewvehicle();
        GMC.contact_notification();
    }

    void contact_notification()
    {
        GMC.viewvehicle();
        GMC.contact_notification();
    }

    friend ostream &operator<<(ostream &print, new_cars &other)
    {
        print << other.GMC << endl;
        // print<<other.Ford<<endl;
        // print<<other.Ferrari<<endl;

        return print;
    }
};

class bikes : public abstract_buyer, public abstract_seller
{
private:
    vehicle Honda;
    vehicle Yamaha;

public:
    bikes() // default constructor
    {
    }

    bikes(string name, string descript, string seller, string comp, string m, double mile, int p, int c, string fuel, string e, double r, int year, string available, string col)
        : Honda(name, descript, seller, comp, m, mile, p, c, fuel, e, r, year, available, col),
          Yamaha(name, descript, seller, comp, m, mile, p, c, fuel, e, r, year, available, col)
    {
    }

    void viewvehicle()
    {
        Honda.viewvehicle();
        // Yamaha.viewvehicle();
    }

    void viewauction()
    {
        Honda.viewauction();
    }

    void viewcontact()
    {
        Honda.viewcontact();
    }

    void inspectionreport()
    {
        Honda.inspectionreport();
    }

    void notification()
    {
        Honda.viewvehicle();
        Honda.viewcontact();
        Honda.inspectionreport();
    }

    void viewnotification()
    {
        cout << "\n\n\nHere's Your Notification Of Your Vehicle !\n";
        cout << "Correct Where's wrong. Here's our information\n";
        cout << "Address    : House#456, Street 4D, FAST Road,Lahore\n";
        cout << "Contact No : +923305869710\n ";
        Honda.viewvehicle();
        Honda.contact_notification();
    }

    void contact_notification()
    {
        Honda.viewvehicle();
        Honda.contact_notification();
    }

    friend ostream &operator<<(ostream &print, bikes &other)
    {
        print << other.Honda << endl;
        // print<<other.Yamaha<<endl;

        return print;
    }
};

// for sking basic information
class information
{
private:
    string name;
    string fathername;
    string DOB;
    int age;
    string CNIC;
    string nationality;
    string status;

public:
    information() // default constructor
    {
    }

    information(string naam, string fn, string dob, int a, string C, string nation, string stat) : name(naam), fathername(fn), DOB(dob), age(a), CNIC(C), nationality(nation), status(stat) // parameter constructor
    {
    }

    friend istream &operator>>(istream &ask, information &other)
    {
        cout << "Enter Name                      : ";
        ask >> other.name;

        cout << "Enter Father's Name             : ";
        ask >> other.fathername;

        cout << "Enter Date Of Birth(DDMMYY)     : ";
        ask >> other.DOB;

        cout << "Enter Age                       : ";
        ask >> other.age;

        cout << "Enter CNIC (xxxxx-xxxxxxx-x)    : ";
        ask >> other.CNIC;

        cout << "Enter Nationality               : ";
        ask >> other.nationality;

        cout << "Enter Status (Married,Single)   : ";
        ask >> other.status;

        return ask;
    }

    friend ostream &operator<<(ostream &print, information &other)
    {
        // other.detailinformation();
        print << "Name            : " << other.name << endl;
        print << "Father's Name   : " << other.fathername << endl;
        print << "Date Of Birth   : " << other.DOB << endl;
        print << "Age             : " << other.age << endl;
        print << "CNIC            : " << other.CNIC << endl;
        print << "Nationality     : " << other.nationality << endl;
        print << "Status          : " << other.status << endl;

        return print;
    }
};

//..... for login password which i have stored in a file
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

class Admin
{
private:
    string car_name;
    string car_model;
    int car_year;

    //..... for managing inspcection report
    char customername[20] = "Ahmed Umar";
    int enginecapacity = 1800;
    double mileage = 19.98;
    string transmissiontype = "V90";
    char inspectiondate[20] = "8th December 2016";
    string chassis = "S#@987";
    string enginenumber = "P98O";
    int registrationnumber = 159743;
    string fueltype = "Petrol";
    string registercity = "Karachi";
    string currentcity = "Islamabad";
    char carfeatures[100] = "This Car Has Good Features, It has Sun Roof";
    double rating = 8.5;

public:
    Admin()
    {
    }

    Admin(char n[20], char add[55], char C[20], char CITY[15], char features[100], char insspection[20],
          char customer[20], int capacity, double mile, string transmission, string chas, string engine,
          string fuel, string registerC, string currentC, double r, int registration, string car_n, string car_m, int makeyear) : enginecapacity(capacity), mileage(mile),
                                                                                                                                  transmissiontype(transmission), chassis(chas), enginenumber(engine), fueltype(fuel), registercity(registerC),
                                                                                                                                  currentcity(currentC), rating(r), registrationnumber(registration), car_name(car_n), car_model(car_m), car_year(makeyear)
    {

        customername[20] = customer[20];
        inspectiondate[20] = insspection[20];
        carfeatures[100] = features[100];
    }

    void manageinspection()
    {
        cout << "Seller Name          : ";
        for (int i = 0; i < 20; i++)
        {
            cout << customername[i];
        }
        cout << endl;
        cout << "Engine Capacity      : " << enginecapacity << endl;
        cout << "Mileage              : " << mileage << endl;
        cout << "Transmission Type    : " << transmissiontype << endl;
        cout << "Inspection Date      : " << inspectiondate << endl;
        cout << "Chassis No           : " << chassis << endl;
        cout << "Engine Number        : " << enginenumber << endl;
        cout << "Fuel Type            : " << fueltype << endl;
        cout << "Registered City      : " << registercity << endl;
        cout << "Current City         : " << currentcity << endl;
        cout << "Rating(Out Of 10)    : " << rating << endl;
        cout << "Car Features         : ";
        for (int i = 0; i < 100; i++)
        {
            cout << carfeatures[i];
        }

        cout << "\n\n";
    }
    friend istream &operator>>(istream &ask, Admin &other)
    {
        cout << "Enter Car Name       : ";
        ask >> other.car_name;

        cout << "Enter Car Model      : ";
        ask >> other.car_model;

        cout << "Enter Year           : ";
        ask >> other.car_year;
        return ask;
    }

    friend ostream &operator<<(ostream &print, Admin &other)
    {
        print << "\n\tBASIC INFORMATION OF CAR\n\n";
        print << "Car   : " << other.car_name << endl;
        print << "Model : " << other.car_model << endl;
        print << "Year  : " << other.car_year << endl;

        // other.notification();
        return print;
    }

    void notification()
    {
        // cout<<"\n\n\tCAR DETAIL INFORMATION\n\n";
        // cout<<"Car   : "<<this->car_name<<endl;
        // cout<<"Model : "<<this->car_model<<endl;
        // cout<<"Year  : "<<this->car_year<<endl;

        cout << "\tINSPECTION REPORT\n\n";
        cout << "Seller Name          : ";
        for (int i = 0; i < 20; i++)
        {
            cout << customername[i];
        }
        cout << endl;
        cout << "Engine Capacity      : " << enginecapacity << endl;
        cout << "Mileage              : " << mileage << endl;
        cout << "Transmission Type    : " << transmissiontype << endl;
        cout << "Inspection Date      : " << inspectiondate << endl;
        cout << "Chassis No           : " << chassis << endl;
        cout << "Engine Number        : " << enginenumber << endl;
        cout << "Fuel Type            : " << fueltype << endl;
        cout << "Registered City      : " << registercity << endl;
        cout << "Current City         : " << currentcity << endl;
        cout << "Rating(Out Of 10)    : " << rating << endl;
        cout << "Car Features         : ";
        for (int i = 0; i < 100; i++)
        {
            cout << carfeatures[i];
        }

        cout << "\n\n";
    }

    // void printinspection(ostream&os) const
    // {
    //    os<<rating;
    // }
};

int main()
{
    menu(); // displaying the whole car thing

    cout << "\n\n\nBefore Going To Main Thing, You Must Fill The Basic Information\n\n";

    cout << "Let's Get You Started ! ! ! " << endl
         << endl;

    information L1;
    char open;
    cin >> L1;

    fstream myfile;
    ;
    myfile.open("Basic_information.txt", ios::out);
    myfile << L1;
    cout << "Your Information Is Saved & Stored In A File Successfully ! " << endl;
    cout << "Your File Name is 'Basic_information.txt' " << endl;
    myfile.close();
    cout << "Do You Want To See Your Information ? (y/n) : ";
    cin >> open;
    if (open == 'y' || open == 'Y')
    {
        cout << L1;
    }

    else
    {
    }
    // cout<<L1;

    cout << "\n\n\n";
    displaywholemenu(); // for displaying admin,seller,buyer menu
    cout << "\n\n\n";

    int option;
    cout << "\n\n[1]. Buyer" << endl;
    cout << "[2]. Seller" << endl;
    cout << "[3]. Admin" << endl;
    cout << "Choose Option Wisely [1-3] : ";
    cin >> option;

    while (option < 0 || option > 3)
    {
        cout << "ERROR Enter From [1-3] : ";
        cin >> option;
    }

    /*I have used Switch for asking wether user wants to go to admin, seller or buyer*/

    switch (option)
    {
    case 1:

        int option;
        cout << "[1].Sign Up\n";
        cout << "[2].Sign In\n";
        cout << "Choose Option Wisely (1-2) : ";
        cin >> option;

        if (option == 1) // if user selects sign up option
        {
            login L1;
            string e;
            string p;
            string information_of_email_and_password;
            int ch;

            cin >> L1;

            ofstream myfile("SignUp_information.txt");
            myfile << L1; // writing into file
            myfile.close();

            cout << "\n\nYou Made Your Account ! ! !" << endl
                 << endl;

            cout << "Enter email      : ";
            cin >> e;

            cout << "Enter Password   : ";
            // cin>>p;
            ch = getch();

            while (ch != 13) // implentation of hiding password (bonus marks)
            {
                p.push_back(ch);
                cout << "*";
                ch = getch();
            }

            cout << "\n\n";

            ifstream readfile("SignUp_information.txt");

            /*the information of email and password is stored in a file
            and then for sign up it would again ask for email and password
            and it would read from file which is stored earlier wether if password and email are
            same or not */

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
                    cout << "Here's Your Email & Password\n\n";
                    cout << information_of_email_and_password << endl;
                }
            }

            readfile.close();
        }

        else // if user selects signin
        {
            string email_signin;
            string password_signin;
            int ch;

            cout << "Enter Email    : ";
            cin >> email_signin;
            cout << "Enter Password : ";
            // cin>>password_signin;

            ch = getch();

            while (ch != 13)
            {
                password_signin.push_back(ch);
                cout << "*";
                ch = getch();
            }

            cout << "\n\n";
        }

        char opt;

        // cout << "Login Successfully\n\n" << endl;

        cout << "Want To View Vehicles ? (y/n) : ";
        cin >> opt;

        if (opt == 'y' || opt == 'Y')
        {
            int options_to_view_vehicles;
            cout << "\t\tVIEW VEHICLES\n\n"
                 << endl;
            cout << "[1]. Used Cars\n";
            cout << "[2]. New Cars\n";
            cout << "[3]. Bikes\n";
            cout << "Choose Option Wisely (1-3) : ";
            cin >> options_to_view_vehicles;

            while (options_to_view_vehicles < 1 || options_to_view_vehicles > 3)
            {
                cout << "ERROR ! |  Enter Again (1-3) : ";
                cin >> options_to_view_vehicles;
            }

            if (options_to_view_vehicles == 1) // used car
            {
                int usedcar_options;
                used_cars bmw("Car", "Excellent", "Babar", "BMW", "M83", 19.15, 320000, 654321, "Petrol", "P98J", 7.5, 2017, "Rawalpindi", "White");
                used_cars suzuki("Car", "Excellent", "Imam", "Suzuki", "Alto", 21.54, 270000, 211097, "Diesel", "8LK9", 8.5, 2019, "Islamabad", "White");
                used_cars toyota("Car", "Good", "Rizwan", "Toyota", "Altis", 25.83, 320000, 214459, "Petrol", "9SX2", 7.5, 2014, "Sarghoda", "Grey");

                /*Polymorphic Behaviour*/

                bmw.viewvehicle();    // virtual void function
                suzuki.viewvehicle(); // virtual void function
                toyota.viewvehicle(); // virtual void function

                cout << "[1]. BMW\n";
                cout << "[2]. Suzuki\n";
                cout << "[3]. Toyota\n";

                cout << "Which Car Do You Want To Buy ? (1-3) : ";
                cin >> usedcar_options;

                // itentatino
                while (usedcar_options < 1 || usedcar_options > 3)
                {
                    cout << "ERROR ! ! ! | Enter Again (1-3) : ";
                    cin >> usedcar_options;
                }

                if (usedcar_options == 1) // condition for selecting BMW Vehicle it will store in a file
                {
                    fstream usedcarfile_BMW;
                    usedcarfile_BMW.open("usedcarinformation.txt", ios::out);
                    usedcarfile_BMW << bmw;
                    cout << "Your Information Of BMW is Stored Successfully ! ! ! " << endl;
                    usedcarfile_BMW.close();
                    char option_for_contact_BMW;
                    cout << "Do You Want Contact Of BMW Seller ?(y/n) : ";
                    cin >> option_for_contact_BMW;

                    if (option_for_contact_BMW == 'y' || option_for_contact_BMW == 'Y')
                    {
                        bmw.viewcontact();
                    }

                    else
                    {
                    }

                    char option_for_inspection_report_BMW;
                    cout << "Want To Get Inspection Report For BMW ? (y/n) : ";
                    cin >> option_for_inspection_report_BMW;

                    if (option_for_inspection_report_BMW == 'y' || option_for_inspection_report_BMW == 'Y')
                    {
                        cout << "\n\n\tOverall Rating\t7.5/10\n\n";
                        bmw.inspectionreport();
                    }

                    char add_comment_BMW_buyer;
                    char comment[150];

                    cin.ignore();
                    cout << "Add Comment On BMW : ";
                    cin.getline(comment, 150);

                    char option_to_view_notification_BMW_buyer;
                    cout << "Want To View Notification ? (y/n) : ";
                    cin >> option_to_view_notification_BMW_buyer;

                    if (option_to_view_notification_BMW_buyer == 'y' || option_to_view_notification_BMW_buyer == 'Y')
                    {
                        cout << "\n\n\t\tBMW INFORMATION\n\n";
                        bmw.notification();
                        cout << "\n\nComment On BMW : ";
                        for (int i = 0; i < 150; i++)
                        {
                            cout << comment[i];
                        }
                        cout << "\n\n";
                    }

                    else
                    {
                    }

                } // condition for selecting BMW Vehicle it will store in a file

                else if (usedcar_options == 2) // condition for selecting Suzuki Vehicle it will stor in a file
                {
                    fstream usedcarfile_SUZUKI;
                    usedcarfile_SUZUKI.open("usedcarinformation.txt", ios::out);
                    usedcarfile_SUZUKI << suzuki;
                    cout << "Your Information Of Suzuki is Stored Successfully ! ! ! " << endl;
                    usedcarfile_SUZUKI.close();
                    char option_for_contact_suzuki;
                    cout << "Do You Want Contact Of Suzuki Seller ?(y/n) : ";
                    cin >> option_for_contact_suzuki;

                    if (option_for_contact_suzuki == 'y' || option_for_contact_suzuki == 'Y')
                    {
                        suzuki.viewcontact();
                    }

                    else
                    {
                    }

                    char option_for_inspection_report_suzuki;
                    cout << "Want To Get Inspection Report For Suzuki ? (y/n) : ";
                    cin >> option_for_inspection_report_suzuki;

                    if (option_for_inspection_report_suzuki == 'y' || option_for_inspection_report_suzuki == 'Y')
                    {
                        cout << "\n\n\tOverall Rating\t8.5/10\n\n";
                        suzuki.inspectionreport();
                    }

                    char add_comment_suzuki_buyer;
                    char comment_suzuki[150];

                    cin.ignore();
                    cout << "Add Comment On Suzuki : ";
                    cin.getline(comment_suzuki, 150);

                    char option_to_view_notification_suzuki_buyer;
                    cout << "Want To View Notification ? (y/n) : ";
                    cin >> option_to_view_notification_suzuki_buyer;

                    if (option_to_view_notification_suzuki_buyer == 'y' || option_to_view_notification_suzuki_buyer == 'Y')
                    {
                        cout << "\n\n\t\tSUZUKI INFORMATION\n\n";
                        suzuki.notification();
                        cout << "\n\nComment On Suzuki : ";
                        for (int i = 0; i < 150; i++)
                        {
                            cout << comment_suzuki[i];
                        }
                        cout << "\n\n";
                    }

                    else
                    {
                    }
                }

                else if (usedcar_options == 3) // condition for selecting toyota vehicle it will sotre in a file
                {
                    fstream usedcarfile_TOYOTA;
                    usedcarfile_TOYOTA.open("usedcarinformation.txt", ios::out);
                    usedcarfile_TOYOTA << toyota;
                    cout << "Your Information Of Toyota is Stored Successfully ! ! ! " << endl;
                    usedcarfile_TOYOTA.close();
                    char option_for_contact_toyota;
                    cout << "Do You Want Contact Of Toyota Seller ?(y/n) : ";
                    cin >> option_for_contact_toyota;

                    if (option_for_contact_toyota == 'y' || option_for_contact_toyota == 'Y')
                    {
                        toyota.viewcontact();
                    }

                    else
                    {
                    }

                    char option_for_inspection_report_toyota;
                    cout << "Want To Get Inspection Report For Toyota ? (y/n) : ";
                    cin >> option_for_inspection_report_toyota;

                    if (option_for_inspection_report_toyota == 'y' || option_for_inspection_report_toyota == 'Y')
                    {
                        cout << "\n\n\tOverall Rating\t7.5/10\n\n";
                        toyota.inspectionreport();
                    }

                    char add_comment_toyota_buyer;
                    char comment_toyota[150];

                    cin.ignore();
                    cout << "Add Comment On toyota : ";
                    cin.getline(comment_toyota, 150);

                    char option_to_view_notification_toyota_buyer;
                    cout << "Want To View Notification ? (y/n) : ";
                    cin >> option_to_view_notification_toyota_buyer;

                    if (option_to_view_notification_toyota_buyer == 'y' || option_to_view_notification_toyota_buyer == 'Y')
                    {
                        cout << "\n\n\t\tTOYOTA INFORMATION\n\n";
                        toyota.notification();
                        cout << "\n\nComment On Toyota : ";
                        for (int i = 0; i < 150; i++)
                        {
                            cout << comment_toyota[i];
                        }
                        cout << "\n\n";
                    }

                    else
                    {
                    }
                }
            }

            else if (options_to_view_vehicles == 2) // if user selects new car options
            {
                int newcar_option;
                new_cars GMC("Car", "Good", "Wasim", "GMC", "Canyon", 22.92, 410000, 852645, "Petrol", "7LK2", 8, 2018, "Karachi", "Grey");
                new_cars FORD("Sports", "Excellent", "Sohaib", "Ford", "Mustang", 25.23, 470000, 452256, "Diesel", "9OO5", 9.5, 2020, "Multan", "White");
                new_cars FERRARI("Sports", "Superb", "Imran", "Ferrari", "458", 27.95, 530000, 114477, "Diesel", "P11M", 10, 2021, "Lahore", "Red");
                GMC.viewvehicle();
                FORD.viewvehicle();
                FERRARI.viewvehicle();

                cout << "[1]. GMC\n";
                cout << "[2]. Ford\n";
                cout << "[3]. Ferrari\n";

                cout << "Which Car Do You Want To Buy ? (1-3) : ";
                cin >> newcar_option;

                while (newcar_option < 1 || newcar_option > 3)
                {
                    cout << "ERROR ! ! ! | Enter Again (1-3) : ";
                    cin >> newcar_option;
                }

                if (newcar_option == 1) // condition if user selects GMC vehicle
                {
                    fstream newcarfile_GMC;
                    newcarfile_GMC.open("newcarinformation.txt", ios::out);
                    newcarfile_GMC << GMC;
                    cout << "Information Of GMC Vehicle Is Stored Successfully ! ! ! " << endl;
                    newcarfile_GMC.close();
                    char option_for_contact_GMC;
                    cout << "Do You Want Contact Of GMC Seller ?(y/n) : ";
                    cin >> option_for_contact_GMC;

                    if (option_for_contact_GMC == 'y' || option_for_contact_GMC == 'Y')
                    {
                        GMC.viewcontact();
                    }

                    else
                    {
                    }

                    char option_for_inspection_report_GMC;
                    cout << "Want To Get Inspection Report For GMC ? (y/n) : ";
                    cin >> option_for_inspection_report_GMC;

                    if (option_for_inspection_report_GMC == 'y' || option_for_inspection_report_GMC == 'Y')
                    {
                        cout << "\n\n\tOverall Rating\t8/10\n\n";
                        GMC.inspectionreport();
                    }

                    char add_comment_GMC_buyer;
                    char comment_GMC[150];

                    cin.ignore();
                    cout << "Add Comment On GMC : ";
                    cin.getline(comment_GMC, 150);

                    char option_to_view_notification_GMC_buyer;
                    cout << "Want To View Notification ? (y/n) : ";
                    cin >> option_to_view_notification_GMC_buyer;

                    if (option_to_view_notification_GMC_buyer == 'y' || option_to_view_notification_GMC_buyer == 'Y')
                    {
                        cout << "\n\n\t\tGMC INFORMATION\n\n";
                        GMC.notification();
                        cout << "\n\nComment On GMC : ";
                        for (int i = 0; i < 150; i++)
                        {
                            cout << comment_GMC[i];
                        }
                        cout << "\n\n";
                    }

                    else
                    {
                    }
                }

                else if (newcar_option == 2) // condition if user selects FORD vehicle
                {
                    fstream newcarfile_FORD;
                    newcarfile_FORD.open("newcarinformation.txt", ios::out);
                    newcarfile_FORD << FORD;
                    cout << "Information Of Ford Vehicle Is Stored Successfully ! ! ! " << endl;
                    newcarfile_FORD.close();
                    char option_for_contact_FORD;
                    cout << "Do You Want Contact Of Ford Seller ?(y/n) : ";
                    cin >> option_for_contact_FORD;

                    if (option_for_contact_FORD == 'y' || option_for_contact_FORD == 'Y')
                    {
                        FORD.viewcontact();
                    }

                    else
                    {
                    }

                    char option_for_inspection_report_FORD;
                    cout << "Want To Get Inspection Report For Ford ? (y/n) : ";
                    cin >> option_for_inspection_report_FORD;

                    if (option_for_inspection_report_FORD == 'y' || option_for_inspection_report_FORD == 'Y')
                    {
                        cout << "\n\n\tOverall Rating\t8.5/10\n\n";
                        FORD.inspectionreport();
                    }

                    char add_comment_FORD_buyer;
                    char comment_FORD[150];

                    cin.ignore();
                    cout << "Add Comment On Suzuki : ";
                    cin.getline(comment_FORD, 150);

                    char option_to_view_notification_FORD_buyer;
                    cout << "Want To View Notification ? (y/n) : ";
                    cin >> option_to_view_notification_FORD_buyer;

                    if (option_to_view_notification_FORD_buyer == 'y' || option_to_view_notification_FORD_buyer == 'Y')
                    {
                        cout << "\n\n\t\tFORD INFORMATION\n\n";
                        FORD.notification();
                        cout << "\n\nComment On Ford : ";
                        for (int i = 0; i < 150; i++)
                        {
                            cout << comment_FORD[i];
                        }
                        cout << "\n\n";
                    }

                    else
                    {
                    }
                }

                if (newcar_option == 3) // condition if user selects FERRARI vehicle
                {
                    fstream newcarfile_FERRARI;
                    newcarfile_FERRARI.open("newcarinformation.txt", ios::out);
                    newcarfile_FERRARI << FERRARI;
                    cout << "Information Of Ferrari Vehicle Is Stored Successfully ! ! ! " << endl;
                    newcarfile_FERRARI.close();
                    char option_for_contact_FERRARI;
                    cout << "Do You Want Contact Of Ferrari Seller ?(y/n) : ";
                    cin >> option_for_contact_FERRARI;

                    if (option_for_contact_FERRARI == 'y' || option_for_contact_FERRARI == 'Y')
                    {
                        FERRARI.viewcontact();
                    }

                    else
                    {
                    }

                    char option_for_inspection_report_FERRARI;
                    cout << "Want To Get Inspection Report For Ferrari ? (y/n) : ";
                    cin >> option_for_inspection_report_FERRARI;

                    if (option_for_inspection_report_FERRARI == 'y' || option_for_inspection_report_FERRARI == 'Y')
                    {
                        cout << "\n\n\tOverall Rating\t10/10\n\n";
                        FERRARI.inspectionreport();
                    }

                    char add_comment_ferrari_buyer;
                    char comment_ferrari[150];

                    cin.ignore();
                    cout << "Add Comment On Ferrari : ";
                    cin.getline(comment_ferrari, 150);

                    char option_to_view_notification_ferrari_buyer;
                    cout << "Want To View Notification ? (y/n) : ";
                    cin >> option_to_view_notification_ferrari_buyer;

                    if (option_to_view_notification_ferrari_buyer == 'y' || option_to_view_notification_ferrari_buyer == 'Y')
                    {
                        cout << "\n\n\t\tFERRARI INFORMATION\n\n";
                        FERRARI.notification();
                        cout << "\n\nComment On Ferrari : ";
                        for (int i = 0; i < 150; i++)
                        {
                            cout << comment_ferrari[i];
                        }
                        cout << "\n\n";
                    }

                    else
                    {
                    }
                }
            }

            else
            {
                int bikes_option;
                bikes HONDA("Bike", "Good", "Shan", "Honda", "CD70", 45.54, 220000, 745265, "Petrol", "I77M", 8, 2016, "Rawalpindi", "Red");
                bikes YAMAHA("Bike", "Excellent", "Sarfaraz", "Yamaha", "CD125", 64.21, 390000, 852963, "Petrol", "X69X", 9.5, 2022, "Islamabad", "Black");

                HONDA.viewvehicle();
                YAMAHA.viewvehicle();

                cout << "[1]. Honda\n";
                cout << "[2]. Yamaha\n";
                cout << "Select The Option Wisely (1-2) : ";
                cin >> bikes_option;

                while (bikes_option < 1 || bikes_option > 2)
                {
                    cout << "ERROR ! ! ! | Enter Again (1-2) : ";
                    cin >> bikes_option;
                }

                if (bikes_option == 1) // condition if user selects HONDA and then stores in a file
                {
                    fstream bikefile_HONDA;
                    bikefile_HONDA.open("bikeinformation.txt", ios::out);
                    bikefile_HONDA << HONDA;
                    cout << "Information Of Honda Vehicle Is Stored Successfully ! ! ! ! " << endl;
                    bikefile_HONDA.close();
                    char option_for_contact_honda;
                    cout << "Do You Want Contact Of Honda Seller ?(y/n) : ";
                    cin >> option_for_contact_honda;

                    if (option_for_contact_honda == 'y' || option_for_contact_honda == 'Y')
                    {
                        HONDA.viewcontact();
                    }

                    else
                    {
                    }

                    char option_for_inspection_report_HONDA;
                    cout << "Want To Get Inspection Report For Honda ? (y/n) : ";
                    cin >> option_for_inspection_report_HONDA;

                    if (option_for_inspection_report_HONDA == 'y' || option_for_inspection_report_HONDA == 'Y')
                    {
                        cout << "\n\n\tOverall Rating\t8/10\n\n";
                        HONDA.inspectionreport();
                    }

                    char add_comment_honda_buyer;
                    char comment_honda[150];

                    cin.ignore();
                    cout << "Add Comment On Suzuki : ";
                    cin.getline(comment_honda, 150);

                    char option_to_view_notification_honda_buyer;
                    cout << "Want To View Notification ? (y/n) : ";
                    cin >> option_to_view_notification_honda_buyer;

                    if (option_to_view_notification_honda_buyer == 'y' || option_to_view_notification_honda_buyer == 'Y')
                    {
                        cout << "\n\n\t\tSUZUKI INFORMATION\n\n";
                        HONDA.notification();
                        cout << "\n\nComment On Suzuki : ";
                        for (int i = 0; i < 150; i++)
                        {
                            cout << comment_honda[i];
                        }
                        cout << "\n\n";
                    }

                    else
                    {
                    }
                }

                else // condition if user selects Yamaha and then stores in a file
                {
                    fstream bikefile_YAMAHA;
                    bikefile_YAMAHA.open("bikeinformation.txt", ios::out);
                    bikefile_YAMAHA << YAMAHA;
                    cout << "Information Of Yamaha Vehicle Is Stored Successfully ! ! ! ! " << endl;
                    bikefile_YAMAHA.close();
                    char option_for_contact_yamaha;
                    cout << "Do You Want Contact Of Yamaha Seller ?(y/n) : ";
                    cin >> option_for_contact_yamaha;

                    if (option_for_contact_yamaha == 'y' || option_for_contact_yamaha == 'Y')
                    {
                        YAMAHA.viewcontact();
                    }

                    else
                    {
                    }

                    char option_for_inspection_report_YAMAHA;
                    cout << "Want To Get Inspection Report For Yamaha ? (y/n) : ";
                    cin >> option_for_inspection_report_YAMAHA;

                    if (option_for_inspection_report_YAMAHA == 'y' || option_for_inspection_report_YAMAHA == 'Y')
                    {
                        cout << "\n\n\tOverall Rating\t9.5/10\n\n";
                        YAMAHA.inspectionreport();
                    }

                    char add_comment_yamaha_buyer;
                    char comment_yamaha[150];

                    cin.ignore();
                    cout << "Add Comment On Yamaha : ";
                    cin.getline(comment_yamaha, 150);

                    char option_to_view_notification_yamaha_buyer;
                    cout << "Want To View Notification ? (y/n) : ";
                    cin >> option_to_view_notification_yamaha_buyer;

                    if (option_to_view_notification_yamaha_buyer == 'y' || option_to_view_notification_yamaha_buyer == 'Y')
                    {
                        cout << "\n\n\t\tYAMAHA INFORMATION\n\n";
                        YAMAHA.notification();
                        cout << "\n\nComment On Yamaha : ";
                        for (int i = 0; i < 150; i++)
                        {
                            cout << comment_yamaha[i];
                        }
                        cout << "\n\n";
                    }

                    else
                    {
                    }
                }
            }

        } // end of condition of yes to view vehicle

        else
        {
        }

        char option_for_view_auction;

        cout << "Want To View Auction ?(y/n) : ";
        cin >> option_for_view_auction;

        if (option_for_view_auction == 'y' || option_for_view_auction == 'Y')
        {
            int option_auction;
            cout << "\t\tVIEW AUCTION\n\n";
            cout << "\n\n[1]. Used Cars\n";
            cout << "[2]. New Cars\n";
            cout << "[3]. Bikes\n";
            cout << "Select the Option Wisely (1-3) : ";
            cin >> option_auction;

            while (option_auction < 1 || option_auction > 3)
            {
                cout << "ERROR ! ! ! | Enter Again(1-3) : ";
                cin >> option_auction;
            }

            if (option_auction == 1) // condition of usedcars if user selected
            {
                int usedcars_auction_option;
                used_cars HONDA("Car", "Pathetic", "Ammar", "Honda", "City", 9.32, 120000, 236547, "Petrol", "2HF1", 4, 2004, "Sarghoda", "White");
                used_cars KIA("Car", "Normal", "Jawad", "KIA", "Sportage", 15.16, 280000, 632569, "Petrol", "6MM0", 7, 2021, "Islamabad", "Black");
                HONDA.viewauction();
                KIA.viewauction();
                cout << "\n\n[1]. HONDA\n";
                cout << "[2]. KIA\n";
                cout << "Select The Options Wisely(1-3) : ";
                cin >> usedcars_auction_option;

                while (usedcars_auction_option < 1 || usedcars_auction_option > 2)
                {
                    cout << "ERROR ! ! ! | Enter Again(1-2) : ";
                    cin >> usedcars_auction_option;
                }

                if (usedcars_auction_option == 1) // condition of user selecting a HONDA and then stores in a file
                {
                    fstream myauctionfile_HONDA;
                    myauctionfile_HONDA.open("auctioninformation.txt", ios::out);
                    myauctionfile_HONDA << HONDA;
                    cout << "Information Of HONDA is stored in a file successfully ! ! ! " << endl;
                    myauctionfile_HONDA.close();
                    char options_HONDA_contact;
                    cout << "Do You Want Contact Of Suzuki Seller ?(y/n) : ";
                    cin >> options_HONDA_contact;

                    if (options_HONDA_contact == 'y' || options_HONDA_contact == 'Y')
                    {
                        HONDA.viewcontact();
                    }

                    else
                    {
                    }

                    char option_for_inspection_report_HONDA;
                    cout << "Want To Get Inspection Report For Honda ? (y/n) : ";
                    cin >> option_for_inspection_report_HONDA;

                    if (option_for_inspection_report_HONDA == 'y' || option_for_inspection_report_HONDA == 'Y')
                    {
                        cout << "\n\n\tOverall Rating\t9.5/10\n\n";
                        HONDA.inspectionreport();
                    }
                }

                else // condition of user selecting a KIA and then stores in a file
                {
                    fstream myauctionfile_KIA;
                    myauctionfile_KIA.open("auctioninformation.txt", ios::out);
                    myauctionfile_KIA << KIA;
                    cout << "Information Of KIA is stored in a file successfully ! ! ! " << endl;
                    myauctionfile_KIA.close();
                    char options_KIA_contact;
                    cout << "Do You Want Contact Of KIA Seller ?(y/n) : ";
                    cin >> options_KIA_contact;

                    if (options_KIA_contact == 'y' || options_KIA_contact == 'Y')
                    {
                        KIA.viewcontact();
                    }

                    else
                    {
                    }

                    char option_for_inspection_report_KIA;
                    cout << "Want To Get Inspection Report For KIA ? (y/n) : ";
                    cin >> option_for_inspection_report_KIA;

                    if (option_for_inspection_report_KIA == 'y' || option_for_inspection_report_KIA == 'Y')
                    {
                        cout << "\n\n\tOverall Rating\t9.5/10\n\n";
                        KIA.inspectionreport();
                    }
                }

            } // end of used car condition

            else if (option_auction == 2) // condition of new cars if user selected
            {
                int newcar_auction_option;
                new_cars PORSCHE("Sports", "Excellent", "Ahmed", "Porsche", "911", 35.36, 750000, 365214, "Diesel", "H65H", 9.5, 2022, "Islamabad", "Blue");
                new_cars MERCEDES("Sports", "Superb", "Malik", "Mercedes", "IC63", 45.33, 1000000, 985632, "Diesel", "X69X", 10, 2022, "Lahore", "White");
                PORSCHE.viewauction();
                MERCEDES.viewauction();

                cout << "\n\n[1]. Porsche \n";
                cout << "[2]. Mercedes\n";
                cout << "Select The Option Wisely (1-2) : ";
                cin >> newcar_auction_option;

                while (newcar_auction_option < 1 || newcar_auction_option > 2)
                {
                    cout << "ERROR ! ! ! | Enter Again : ";
                    cin >> newcar_auction_option;
                }

                if (newcar_auction_option == 1) // if user selects Porsche and then stored in a file
                {
                    fstream myauctionfile_PORSCHE;
                    myauctionfile_PORSCHE.open("auctioninfomation.txt", ios::out);
                    myauctionfile_PORSCHE << PORSCHE;
                    cout << "Information Of Porsche Is Stored Successfully" << endl;
                    myauctionfile_PORSCHE.close();
                    char options_for_contact_porsche;
                    cout << "Do You Want Contact Of Porsche Seller ?(y/n) : ";
                    cin >> options_for_contact_porsche;

                    if (options_for_contact_porsche == 'y' || options_for_contact_porsche == 'Y')
                    {
                        PORSCHE.viewcontact();
                    }

                    else
                    {
                    }

                    char option_for_inspection_report_PORSCHE;
                    cout << "Want To Get Inspection Report For Porsche ? (y/n) : ";
                    cin >> option_for_inspection_report_PORSCHE;

                    if (option_for_inspection_report_PORSCHE == 'y' || option_for_inspection_report_PORSCHE == 'Y')
                    {
                        cout << "\n\n\tOverall Rating\t9.5/10\n\n";
                        PORSCHE.inspectionreport();
                    }
                }

                else // the option will automatically goes to the Mercedes
                {
                    fstream myauctionfile_MERCEDES;
                    myauctionfile_MERCEDES.open("auctioninformation.txt", ios::out);
                    myauctionfile_MERCEDES << MERCEDES;
                    cout << "Information Of Mercedes Is Stored Successfully" << endl;
                    myauctionfile_MERCEDES.close();
                    char options_for_contact_mercedes;
                    cout << "Do You Want Contact Of Mercedes Seller ?(y/n) : ";
                    cin >> options_for_contact_mercedes;

                    if (options_for_contact_mercedes == 'y' || options_for_contact_mercedes == 'Y')
                    {
                        MERCEDES.viewcontact();
                    }

                    else
                    {
                    }

                    char option_for_inspection_report_MERCEDES;
                    cout << "Want To Get Inspection Report For Mercedes ? (y/n) : ";
                    cin >> option_for_inspection_report_MERCEDES;

                    if (option_for_inspection_report_MERCEDES == 'y' || option_for_inspection_report_MERCEDES == 'Y')
                    {
                        cout << "\n\n\tOverall Rating\t10/10\n\n";
                        MERCEDES.inspectionreport();
                    }
                }
            }

            else // for auction of bikes
            {
                int KAWASAKI_option;
                bikes KAWASAKI("Sports", "Good", "Khan", "Kawasaki", "Ninja", 30.06, 250000, 742853, "Diesel", "G87N", 8.5, 2018, "Islamabad", "Red");
                bikes TESLA("Sports", "Good", "Umar", "Tesla", "FAST", 32.56, 270000, 258142, "Diesel", "M44M", 8.5, 2019, "Islamabad", "Black");

                KAWASAKI.viewauction();
                TESLA.viewauction();

                cout << "\n\n[1]. Kawasaki\n";
                cout << "[2]. Honda\n ";
                cout << "Select The Option Wisely(1-2) : ";
                cin >> KAWASAKI_option;

                while (KAWASAKI_option < 1 || KAWASAKI_option > 2)
                {
                    cout << "ERROR ! ! ! | Enter Again(1-2) : ";
                    cin >> KAWASAKI_option;
                }

                if (KAWASAKI_option == 1) // if user selects KAWASAKI option and then stored in a file
                {
                    fstream myauctionfile_KAWASAKI;
                    myauctionfile_KAWASAKI.open("auctioninformation.txt", ios::out);
                    myauctionfile_KAWASAKI << KAWASAKI;
                    cout << "Inforamtion Of Kawasaki is Stored Successfully ! ! ! " << endl;
                    myauctionfile_KAWASAKI.close();
                    char options;
                    cout << "Do You Want Contact Of Kawasaki Seller ?(y/n) : ";
                    cin >> options;

                    if (options == 'y' || options == 'Y')
                    {
                        KAWASAKI.viewcontact();
                    }

                    else
                    {
                    }

                    char option_for_inspection_report_KAWASAKI;
                    cout << "Want To Get Inspection Report For Kawasaki ? (y/n) : ";
                    cin >> option_for_inspection_report_KAWASAKI;

                    if (option_for_inspection_report_KAWASAKI == 'y' || option_for_inspection_report_KAWASAKI == 'Y')
                    {
                        cout << "\n\n\tOverall Rating\t8.5/10\n\n";
                        KAWASAKI.inspectionreport();
                    }
                }

                else
                {
                    fstream myauctionfile_TESLA;
                    myauctionfile_TESLA.open("auctioninformation.txt", ios::out);
                    myauctionfile_TESLA << TESLA;
                    cout << "Inforamtion Of Tesla is Stored Successfully ! ! ! " << endl;
                    myauctionfile_TESLA.close();
                    char options;
                    cout << "Do You Want Contact Of Tesla Seller ?(y/n) : ";
                    cin >> options;

                    if (options == 'y' || options == 'Y')
                    {
                        TESLA.viewcontact();
                    }

                    else
                    {
                    }

                    char option_for_inspection_report_TESLA;
                    cout << "Want To Get Inspection Report For Tesla ? (y/n) : ";
                    cin >> option_for_inspection_report_TESLA;

                    if (option_for_inspection_report_TESLA == 'y' || option_for_inspection_report_TESLA == 'Y')
                    {
                        cout << "\n\n\tOverall Rating\t8.5/10\n\n";
                        TESLA.inspectionreport();
                    }
                }
            }
        }
        //} // end of yes condition of view vehicle

        char logout_buyer;
        cout << "Want To Logout ? (y/n) : ";
        cin >> logout_buyer;

        if (logout_buyer == 'y' || logout_buyer == 'Y')
        {
            cout << "\n\n\t\tTHANK YOU FOR VISITING OUR WEBSITE ! ! ! " << endl;
            cout << "\n\t\tCOME BACK SOON ! ! ! " << endl;
        }

        break; // end of case 1 or buyer section

    case 2:

        int option_for_seller;
        cout << "[1].Sign Up\n";
        cout << "[2].Sign In\n";
        cout << "Choose Option Wisely (1-2) : ";
        cin >> option_for_seller;

        if (option_for_seller == 1) // if user selects sign up option
        {
            login L1;
            string e;
            string p;
            string information_of_email_and_password;
            int ch;
            cin >> L1;

            ofstream myfile("SignUp_information.txt");
            myfile << L1; // writing into file
            myfile.close();

            cout << "\n\nYou Made Your Account ! ! !" << endl
                 << endl;
            cout << "Enter email      : ";
            cin >> e;

            cout << "Enter Password   : ";
            // cin>>p;

            ch = getch();

            while (ch != 13)
            {
                p.push_back(ch);
                cout << "*";
                ch = getch();
            }

            cout << "\n\n";

            ifstream readfile("SignUp_information.txt");

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
                    cout << "Here's Your Email & Password\n\n";
                    cout << information_of_email_and_password << endl;
                }
            }

            readfile.close();
        }

        else // if user selects signin
        {
            string email_signin;
            string password_signin;
            int ch;

            cout << "Enter Email    : ";
            cin >> email_signin;
            cout << "Enter Password : ";
            // cin>>password_signin;

            ch = getch();

            while (ch != 13)
            {
                password_signin.push_back(ch);
                cout << "*";
                ch = getch();
            }

            cout << "\n\n";
        }

        cout << "Want To View Vehicles ? (y/n) : ";
        cin >> opt;

        if (opt == 'y' || opt == 'Y')
        {

            int options_to_view_vehicles;
            cout << "\t\tVIEW VEHICLES\n\n"
                 << endl;
            cout << "[1]. Used Cars\n";
            cout << "[2]. New Cars\n";
            cout << "[3]. Bikes\n";
            cout << "Choose Option Wisely (1-3) : ";
            cin >> options_to_view_vehicles;

            while (options_to_view_vehicles < 1 || options_to_view_vehicles > 3)
            {
                cout << "ERROR ! |  Enter Again (1-3) : ";
                cin >> options_to_view_vehicles;
            }

            if (options_to_view_vehicles == 1) // used car
            {
                int usedcar_options;
                used_cars bmw("Car", "Good", "Saad", "BMW", "P98", 20.15, 250000, 745236, "Petrol", "M41O", 7, 2014, "Islamabad", "Black");
                used_cars suzuki("Car", "Bad", "Hunain", "Suzuki", "Mehran", 7.26, 70000, 111557, "Petrol", "M00N", 3.5, 2003, "Murree", "Black");
                used_cars toyota("Car", "Good", "Fassih", "Toyota", "MClass", 20.36, 210000, 321978, "Petrol", "M48U", 7, 2018, "Kohat", "Blue");

                //..................polymorphic behaviour
                bmw.viewvehicle();
                suzuki.viewvehicle();
                toyota.viewvehicle();

                // vehicle *V[3];
                // V[0]=new used_cars();

                cout << "[1]. BMW\n";
                cout << "[2]. Suzuki\n";
                cout << "[3]. Toyota\n";

                cout << "Which Car Do You Want To Buy ? (1-3) : ";
                cin >> usedcar_options;

                // itentation method
                while (usedcar_options < 1 || usedcar_options > 3)
                {
                    cout << "ERROR ! ! ! | Enter Again (1-3) : ";
                    cin >> usedcar_options;
                }

                if (usedcar_options == 1) // condition for selecting BMW Vehicle it will stor in a file
                {
                    fstream usedcarfile_BMW;
                    usedcarfile_BMW.open("usedcarinformation.txt", ios::out);
                    usedcarfile_BMW << bmw;
                    cout << "Your Information Of BMW is Stored Successfully ! ! ! " << endl;
                    usedcarfile_BMW.close();
                    char option_for_contact_BMW;
                    cout << "Do You Want Contact Of BMW Seller ?(y/n) : ";
                    cin >> option_for_contact_BMW;

                    if (option_for_contact_BMW == 'y' || option_for_contact_BMW == 'Y')
                    {
                        bmw.viewcontact();
                    }

                    else
                    {
                    }

                    char option_to_view_notification;
                    cout << "Want To Add Notification ? (y/n) : ";
                    cin >> option_to_view_notification;

                    if (option_to_view_notification == 'y' || option_to_view_notification == 'Y')
                    {
                        cout << "\n\t\tBMW INFORMATION\n\n";
                        bmw.viewnotification(); // virtual function to view notification
                    }

                } // condition for selecting BMW Vehicle it will store in a file

                else if (usedcar_options == 2) // condition for selecting Suzuki Vehicle it will stor in a file
                {
                    fstream usedcarfile_SUZUKI;
                    usedcarfile_SUZUKI.open("usedcarinformation.txt", ios::out);
                    usedcarfile_SUZUKI << suzuki;
                    cout << "Your Information Of Suzuki is Stored Successfully ! ! ! " << endl;
                    usedcarfile_SUZUKI.close();
                    char option_for_contact_suzuki;
                    cout << "Do You Want Contact Of Suzuki Seller ?(y/n) : ";
                    cin >> option_for_contact_suzuki;

                    if (option_for_contact_suzuki == 'y' || option_for_contact_suzuki == 'Y')
                    {
                        suzuki.viewcontact();
                    }

                    else
                    {
                    }

                    char option_to_view_notification;
                    cout << "Want To Add Notification ? (y/n) : ";
                    cin >> option_to_view_notification;

                    if (option_to_view_notification == 'y' || option_to_view_notification == 'Y')
                    {
                        cout << "\n\t\t SUZUKI INFORMATION\n\n";
                        suzuki.viewnotification(); // virtual function to view notification
                    }
                }

                else if (usedcar_options == 3) // condition for selecting toyota vehicle it will sotre in a file
                {
                    fstream usedcarfile_TOYOTA;
                    usedcarfile_TOYOTA.open("usedcarinformation.txt", ios::out);
                    usedcarfile_TOYOTA << toyota;
                    cout << "Your Information Of Toyota is Stored Successfully ! ! ! " << endl;
                    usedcarfile_TOYOTA.close();
                    char option_for_contact_toyota;
                    cout << "Do You Want Contact Of Toyota Seller ?(y/n) : ";
                    cin >> option_for_contact_toyota;

                    if (option_for_contact_toyota == 'y' || option_for_contact_toyota == 'Y')
                    {
                        toyota.viewcontact();
                    }

                    else
                    {
                    }

                    char option_to_view_notification;
                    cout << "Want To Add Notification ? (y/n) : ";
                    cin >> option_to_view_notification;

                    if (option_to_view_notification == 'y' || option_to_view_notification == 'Y')
                    {
                        cout << "\n\t\t TOYOTA INFORMATION\n\n";
                        toyota.viewnotification(); // virtual function to view notification
                    }
                }
            }

            else if (options_to_view_vehicles == 2) // if user selects new car options
            {
                int newcar_option;
                new_cars GMC("Car", "Excellent", "Munim", "GMC", "952", 26.32, 475000, 159375, "Petrol", "L98N", 9, 2019, "Islamabad", "Red");
                new_cars FORD("Sports", "Excellent", "Sajer", "Ford", "Focus", 26.21, 500000, 148257, "Diesel", "9ML5", 9.5, 2021, "Quetta", "Blue");
                new_cars FERRARI("Sports", "Superb", "Nawal", "Ferrari", "S8", 32.69, 750000, 222223, "Diesel", "M98H", 10, 2022, "Islamabad", "Red");
                GMC.viewvehicle();
                FORD.viewvehicle();
                FERRARI.viewvehicle();

                cout << "[1]. GMC\n";
                cout << "[2]. Ford\n";
                cout << "[3]. Ferrari\n";

                cout << "Which Car Do You Want To Buy ? (1-3) : ";
                cin >> newcar_option;

                while (newcar_option < 1 || newcar_option > 3)
                {
                    cout << "ERROR ! ! ! | Enter Again (1-3) : ";
                    cin >> newcar_option;
                }

                if (newcar_option == 1) // condition if user selects GMC vehicle
                {
                    fstream newcarfile_GMC;
                    newcarfile_GMC.open("newcarinformation.txt", ios::out);
                    newcarfile_GMC << GMC;
                    cout << "Information Of GMC Vehicle Is Stored Successfully ! ! ! " << endl;
                    newcarfile_GMC.close();
                    char option_for_contact_GMC;
                    cout << "Do You Want Contact Of GMC Seller ?(y/n) : ";
                    cin >> option_for_contact_GMC;

                    if (option_for_contact_GMC == 'y' || option_for_contact_GMC == 'Y')
                    {
                        GMC.viewcontact();
                    }

                    else
                    {
                    }

                    char option_to_view_notification;
                    cout << "Want To Add Notification ? (y/n) : ";
                    cin >> option_to_view_notification;

                    if (option_to_view_notification == 'y' || option_to_view_notification == 'Y')
                    {
                        cout << "\n\t\tGMCFERRARI INFORMATION\n\n";
                        GMC.viewnotification(); // virtual function to view notification
                    }
                }

                else if (newcar_option == 2) // condition if user selects FORD vehicle
                {
                    fstream newcarfile_FORD;
                    newcarfile_FORD.open("newcarinformation.txt", ios::out);
                    newcarfile_FORD << FORD;
                    cout << "Information Of Ford Vehicle Is Stored Successfully ! ! ! " << endl;
                    newcarfile_FORD.close();
                    char option_for_contact_FORD;
                    cout << "Do You Want Contact Of Ford Seller ?(y/n) : ";
                    cin >> option_for_contact_FORD;

                    if (option_for_contact_FORD == 'y' || option_for_contact_FORD == 'Y')
                    {
                        FORD.viewcontact();
                    }

                    else
                    {
                    }

                    char option_to_view_notification;
                    cout << "Want To Add Notification ? (y/n) : ";
                    cin >> option_to_view_notification;

                    if (option_to_view_notification == 'y' || option_to_view_notification == 'Y')
                    {
                        cout << "\n\t\t FORD INFORMATION\n\n";
                        FORD.viewnotification(); // virtual function to view notification
                    }
                }

                if (newcar_option == 3) // condition if user selects FERRARI vehicle
                {
                    fstream newcarfile_FERRARI;
                    newcarfile_FERRARI.open("newcarinformation.txt", ios::out);
                    newcarfile_FERRARI << FERRARI;
                    cout << "Information Of Ferrari Vehicle Is Stored Successfully ! ! ! " << endl;
                    newcarfile_FERRARI.close();
                    char option_for_contact_FERRARI;
                    cout << "Do You Want Contact Of Ferrari Seller ?(y/n) : ";
                    cin >> option_for_contact_FERRARI;

                    if (option_for_contact_FERRARI == 'y' || option_for_contact_FERRARI == 'Y')
                    {
                        FERRARI.viewcontact();
                    }

                    else
                    {
                    }

                    char option_to_view_notification;
                    cout << "Want To Add Notification ? (y/n) : ";
                    cin >> option_to_view_notification;

                    if (option_to_view_notification == 'y' || option_to_view_notification == 'Y')
                    {
                        cout << "\n\t\tFERRARI INFORMATION\n\n";
                        FERRARI.viewnotification(); // virtual function to view notification
                    }
                }
            }

            else
            {
                int bikes_option;
                bikes HONDA("Bike", "Good", "Mani", "Honda", "CD125", 75.25, 280000, 654987, "Petrol", "I98M", 8.5, 2019, "Rawalpindi", "Blue");
                bikes YAMAHA("Bike", "Excellent", "Neelum", "Yamaha", "Supra", 80.25, 300000, 132654, "Petrol", "X96X", 9, 2021, "Islamabad", "Black");

                HONDA.viewvehicle();
                YAMAHA.viewvehicle();

                cout << "[1]. Honda\n";
                cout << "[2]. Yamaha\n";
                cout << "Select The Option Wisely (1-2) : ";
                cin >> bikes_option;

                while (bikes_option < 1 || bikes_option > 2)
                {
                    cout << "ERROR ! ! ! | Enter Again (1-2) : ";
                    cin >> bikes_option;
                }

                if (bikes_option == 1) // condition if user selects HONDA and then stores in a file
                {
                    fstream bikefile_HONDA;
                    bikefile_HONDA.open("bikeinformation.txt", ios::out);
                    bikefile_HONDA << HONDA;
                    cout << "Information Of Honda Vehicle Is Stored Successfully ! ! ! ! " << endl;
                    bikefile_HONDA.close();
                    char option_for_contact_honda;
                    cout << "Do You Want Contact Of Honda Seller ?(y/n) : ";
                    cin >> option_for_contact_honda;

                    if (option_for_contact_honda == 'y' || option_for_contact_honda == 'Y')
                    {
                        HONDA.viewcontact();
                    }

                    else
                    {
                    }

                    char option_to_view_notification;
                    cout << "Want To Add Notification ? (y/n) : ";
                    cin >> option_to_view_notification;

                    if (option_to_view_notification == 'y' || option_to_view_notification == 'Y')
                    {
                        cout << "\n\t\tHONDA INFORMATION\n\n";
                        HONDA.viewnotification(); // virtual function to view notification
                    }
                }

                else // condition if user selects Yamaha and then stores in a file
                {
                    fstream bikefile_YAMAHA;
                    bikefile_YAMAHA.open("bikeinformation.txt", ios::out);
                    bikefile_YAMAHA << YAMAHA;
                    cout << "Information Of Yamaha Vehicle Is Stored Successfully ! ! ! ! " << endl;
                    bikefile_YAMAHA.close();
                    char option_for_contact_yamaha;
                    cout << "Do You Want Contact Of Suzuki Seller ?(y/n) : ";
                    cin >> option_for_contact_yamaha;

                    if (option_for_contact_yamaha == 'y' || option_for_contact_yamaha == 'Y')
                    {
                        YAMAHA.viewcontact();
                    }

                    else
                    {
                    }

                    char option_to_view_notification;
                    cout << "Want To Add Notification ? (y/n) : ";
                    cin >> option_to_view_notification;

                    if (option_to_view_notification == 'y' || option_to_view_notification == 'Y')
                    {
                        cout << "\n\t\tYAMAHA INFORMATION\n\n";
                        YAMAHA.viewnotification(); // virtual function to view notification
                    }
                }
            }

        } // end of condition of yes to view vehicle

        // else

        //...................................       Now going for adding new vehicle .....................

        char option_to_chose_addvehicle;
        cout << "Want To Add Vehicle ? (y/n) : ";
        cin >> option_to_chose_addvehicle;

        if (option_to_chose_addvehicle == 'y' || option_to_chose_addvehicle == 'Y')
        {
            int number;

            ofstream myaddfile;
            cout << "How Many Vehicles Do You Want To Enter ? : ";
            cin >> number;

            vehicle A[number];

            for (int i = 0; i < number; i++)
            {
                cout << "\t\tFor Vehicle # " << i + 1 << endl
                     << endl;
                cin >> A[i];
            }

            myaddfile.open("AddVehicle.txt", ios::app);
            if (myaddfile.is_open())
            {
                cout << "Information Of Vehicle is stored in a file" << std::endl
                     << std::endl;
                for (int i = 0; i < number; i++)
                {
                    myaddfile << A[i];
                }

                myaddfile.close();
            }

            else
            {
                cout << "Error opening the file!" << std::endl;
            }
            // cout<<"Information Of Vehicle is stored in a file "<<endl<<endl;
            // for(int i=0;i<number;i++)
            //{
            //    myaddfile<<A[i];
            // }
            // myaddfile.close();
        }

        else
        {
        }
        //...................................       Now going for adding new vehicle .....................

        char option_to_delete_vehicle;
        cout << "Want To Delete Vehicle ? (y/n) : ";
        cin >> option_to_delete_vehicle;

        if (option_to_delete_vehicle == 'y' || option_to_delete_vehicle == 'Y')
        {
            ifstream deletefile;
            deletefile.open("Addvehicle.txt", ios::out);

            if (deletefile.is_open())
            {
                deletefile.close();
                if (remove("Addvehicle.txt") == 0)
                {
                    cout << "Your File Has Been Deleted Successfully ! ! ! " << endl
                         << endl;
                }
                else
                {
                    cout << "Error Deleting The File ! ! ! " << endl
                         << endl;
                }
            }

            else
            {
                cout << "Error Opening The File For Deletion ! ! ! " << endl;
            }

            // remove("Addvehicle.txt");
            // deletefile.close();
            // cout<<"Your File Has Been Deleted Successfully ! ! ! "<<endl<<endl;
        }

        else
        {
        }

        char option_to_register_auction;
        cout << "Want To Register For Auction ? (y/n) : ";
        cin >> option_to_register_auction;

        if (option_to_register_auction == 'y' || option_to_register_auction == 'Y')
        {
            cout << "\n\nYou Have To Fill Information Of Vehicle Below\n\n";
            vehicle auction;
            cin >> auction;

            char c;
            cout << "Do You Want To Store Inofrmation Of Auction Vehicle In A File ? (y/n) : ";
            cin >> c;

            if (c == 'y' || c == 'Y')
            {
                fstream auctionfile;
                auctionfile.open("Auction_File.txt", ios::out);
                if (auctionfile.is_open())
                {
                    auctionfile << auction << endl;
                    cout << "Information Of Auction Is Stored In a File Successfully ! ! ! " << endl
                         << endl;
                }
                else
                {
                    cout << "ERROR in storing In A File" << endl;
                }
            }
        }

        char logout_seller;
        cout << "Want To Logout ? (y/n) : ";
        cin >> logout_seller;

        if (logout_seller == 'y' || logout_seller == 'Y')
        {
            cout << "\n\n\t\tTHANK YOU FOR VISITING OUR WEBSITE ! ! ! " << endl;
            cout << "\n\t\tCOME BACK SOON ! ! ! " << endl;
        }

        break;

    case 3: // for Admin

        Admin Basic_information_Of_Car;
        char option_add_vehicle_admin;
        cout << "Want To Add Vehicle ? (y/n) : ";
        cin >> option_add_vehicle_admin;

        if (option_add_vehicle_admin == 'y' || option_add_vehicle_admin == 'Y')
        {
            ofstream myfile;
            cin >> Basic_information_Of_Car;
            myfile.open("Add_Vehicle_Admin.txt");
            cout << "\nInformation Of Vehicle Is Stored In A File Successfully ! " << endl
                 << endl;
            myfile << Basic_information_Of_Car;

            // cout<<Basic_information_Of_Car;
        }

        else
        {
        }

        char option_manage_inspection_report;
        cout << "Want To Manage Inspection Report Of That Vehicle ? (y/n) : ";
        cin >> option_manage_inspection_report;

        if (option_manage_inspection_report == 'y' || option_manage_inspection_report == 'Y')
        {
            Admin inspe;
            inspe.manageinspection();
            cout << endl;
        }

        else
        {
        }

        char option_to_add_notification;
        cout << "Want To Add Notification ? (y/n) : ";
        cin >> option_to_add_notification;

        cout << endl
             << endl;

        if (option_to_add_notification == 'y' || option_to_add_notification == 'Y')
        {
            Admin noti;

            cout << "\n\n\t\tNOTIFICATION OF VEHICLE\n\n";
            cout << Basic_information_Of_Car << endl;
            noti.notification();
        }

        else
        {
        }

        char option_to_delete_notification;
        cout << "Want To Remove Information Of Vehicle ? (y/n) : ";
        cin >> option_to_delete_notification;

        if (option_to_delete_notification == 'y' || option_to_delete_notification == 'Y')
        {
            ifstream deletefile;
            deletefile.open("Add_Vehicle_Admin.txt", ios::out);
            if (deletefile.is_open())
            {
                deletefile.close();
                if (remove("Add_Vehicle_Admin.txt") == 0)
                {
                    cout << "Your File Has Been Deleted Sucessfully ! " << endl;
                }
                else
                {
                    cout << "ERROR ! Deleting the file ! " << endl;
                }
            }
            else
            {
                cout << "ERROR Opening the File For Deletion! " << endl;
            }
        }

        else
        {
        }

        double rate;

        cout << "How Would You Rate Your Vehicle (Out Of 10) : ";
        cin >> rate;

        while (rate < 0 || rate > 10)
        {
            cout << "Enter Again : ";
            cin >> rate;
        }

        cout << "\nSo You Rate Your Car " << rate << " Out Of 10. Look Down Below Which Category is Your Car\n\n";
        cout << "[1]. (1-4) Normal " << endl;
        cout << "[2]. (5-8) Good " << endl;
        cout << "[3]. (9-10) Excellent " << endl;
        cout << "\n\n";

        if (rate >= 1 && rate <= 4)
        {
            cout << "Your Car Is Normal. Better Luck Next Time" << endl;
        }
        else if (rate > 4 && rate <= 8)
        {
            cout << "Your Car Is Good. Nice Choice" << endl;
        }
        else if (rate > 8 && rate <= 10)
        {
            cout << "Your Car Is Excellent. Superb Choice" << endl;
        }

        return 0;

        char logout_admin;
        cout << "Want To Logout ? (y/n) : ";
        cin >> logout_admin;

        if (logout_admin == 'y' || logout_admin == 'Y')
        {
            cout << "\n\n\t\tTHANK YOU FOR VISITING OUR WEBSITE ! ! ! " << endl;
            cout << "\n\t\tCOME BACK SOON ! ! ! " << endl;
        }

        break;
    } // end of switch case
}
