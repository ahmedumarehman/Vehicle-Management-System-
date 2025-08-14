#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class abstract // parent class
{
private:
public:
    virtual void viewvehicle() = 0;
    virtual void viewauction()=0;
    virtual void viewcontact()=0;
    virtual void inspectionreport() = 0;
};




//..... using inheritance

class vehicle : public abstract // child class
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


    void viewcontact()
    {   
        cout<<"\t\tContact Information\n\n";
        cout<<"Seller Name : "<<sellername<<endl;
        cout<<"Contact     : "<<contact<<endl;
        cout<<"\n\nCall Connecting . . . \n\n";
        cout<<"Connected. Speak now . . . \n\n\n";
        //Sleep(5);
        

        
    }



    void inspectionreport()
    {
        cout<<"Exterior & Body -------------------------------- "<<rand()%100<<"%"<<endl;
        cout<<"AC/Heater -------------------------------------- "<<rand()%100<<"%"<<endl;
        cout<<"Suspension/Steering ---------------------------- "<<rand()%100<<"%"<<endl;
        cout<<"Interior --------------------------------------- "<<rand()%100<<"%"<<endl;
        cout<<"Engine/Clutch ---------------------------------- "<<rand()%100<<"%"<<endl;
    }



};

class used_cars : public abstract
{
private:
    vehicle BMW;
    vehicle Suzuki;
    vehicle Toyota;

public:
    //used_cars()
        //: BMW("Car", "Good", "Babar", "BMW", "M83", 19.54, 220000, 219710, "Petrol", "7PO6", 7.5, 2015, "Rawalpindi", "Red"),
         // Suzuki("Car", "Excellent", "Imam", "Suzuki", "Alto", 21.54, 270000, 211097, "Diesel", "8LK9", 8.5, 2019, "Islamabad", "White"),
          //Toyota("Car", "Good", "Rizwan", "Toyota", "Altis", 25.83, 320000, 214459, "Petrol", "9SX2", 7.5, 2014, "Sarghoda", "Grey")
    //{
    //}
    used_cars() // default constructor
    {

    }

    used_cars(string name, string descript, string seller, string comp, string m, double mile, int p, int c, string fuel, string e, double r, int year, string available, string col):
    BMW(name,descript,seller,comp,m,mile,p,c,fuel,e,r,year,available,col),
    Suzuki(name,descript,seller,comp,m,mile,p,c,fuel,e,r,year,available,col),
    Toyota(name,descript,seller,comp,m,mile,p,c,fuel,e,r,year,available,col)

    {

    }

    void viewvehicle()
    {
        BMW.viewvehicle();
        //Suzuki.viewvehicle();
        //Toyota.viewvehicle();
    }


    void viewauction()
    {
        BMW.viewauction();
        //Suzuki.viewauction();
        //Toyota.viewauction();
    }

    void viewcontact()
    {
        BMW.viewcontact();
        //Suzuki.viewcontact();
        //Toyota.viewcontact();
    }

void inspectionreport()
{
    BMW.inspectionreport();
}
    
    
    friend ostream &operator<<(ostream &print, used_cars &other)
    {
        print << other.BMW << endl;
        //print << other.Suzuki << endl;
        //print << other.Toyota << endl;

        return print;
    }
};

class new_cars : public abstract
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
        : GMC(name,descript,seller,comp,m,mile,p,c,fuel,e,r,year,available,col),
          Ford(name,descript,seller,comp,m,mile,p,c,fuel,e,r,year,available,col),
          Ferrari(name,descript,seller,comp,m,mile,p,c,fuel,e,r,year,available,col)
    {
    }

    void viewvehicle()
    {
        GMC.viewvehicle();
        //Ford.viewvehicle();
        //Ferrari.viewvehicle();
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
    
    
    
    
    
    
    
    friend ostream &operator<<(ostream&print,new_cars&other)
    {
        print<<other.GMC<<endl;
        //print<<other.Ford<<endl;
        //print<<other.Ferrari<<endl;

        return print;
    }
};

class bikes : public abstract
{
private:
    vehicle Honda;
    vehicle Yamaha;

public:
    
    
    bikes() // default constructor
    {

    }
    
    
    
    bikes(string name, string descript, string seller, string comp, string m, double mile, int p, int c, string fuel, string e, double r, int year, string available, string col)
        : Honda(name,descript,seller,comp,m,mile,p,c,fuel,e,r,year,available,col),
          Yamaha(name,descript,seller,comp,m,mile,p,c,fuel,e,r,year,available,col)
    {
    }

    void viewvehicle()
    {
        Honda.viewvehicle();
        //Yamaha.viewvehicle();
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

    friend ostream& operator<<(ostream&print,bikes&other)
    {
        print<<other.Honda<<endl;
        //print<<other.Yamaha<<endl;

        return print;
    }


};

int main()
{
    
    char opt;

    cout << "Login Successfully\n\n" << endl;

    cout<<"Want To View Vehicles ? (y/n) : ";
    cin>>opt;



    if(opt=='y' || opt=='Y')
    {
    int options_to_view_vehicles;
    cout << "\t\tVIEW VEHICLES\n\n"
         << endl;
    cout << "[1]. Used Cars\n";
    cout << "[2]. New Cars\n";
    cout << "[3]. Bikes\n";
    cout << "Choose Option Wisely (1-3) : ";
    cin >> options_to_view_vehicles;

    while(options_to_view_vehicles<1 || options_to_view_vehicles>3)
    {
        cout<<"ERROR ! |  Enter Again (1-3) : ";
        cin>>options_to_view_vehicles;
    }

    if (options_to_view_vehicles == 1)   // used car
    {
        int usedcar_options;
        used_cars bmw("Car","Excellent","Babar","BMW","M83",19.15,320000,654321,"Petrol","P98J",7.5,2017,"Rawalpindi","White");
        used_cars suzuki("Car", "Excellent", "Imam", "Suzuki", "Alto", 21.54, 270000, 211097, "Diesel", "8LK9", 8.5, 2019, "Islamabad", "White");
        used_cars toyota("Car", "Good", "Rizwan", "Toyota", "Altis", 25.83, 320000, 214459, "Petrol", "9SX2", 7.5, 2014, "Sarghoda", "Grey");
        
        bmw.viewvehicle();
        suzuki.viewvehicle();
        toyota.viewvehicle();


        cout << "[1]. BMW\n";
        cout << "[2]. Suzuki\n";
        cout << "[3]. Toyota\n";

        cout << "Which Car Do You Want To Buy ? (1-3) : ";
        cin >> usedcar_options;

        while(usedcar_options<1   ||   usedcar_options>3)
        {
            cout<<"ERROR ! ! ! | Enter Again (1-3) : ";
            cin>>usedcar_options;
        }

        if (usedcar_options == 1) // condition for selecting BMW Vehicle it will stor in a file
        {
            fstream usedcarfile_BMW;
            usedcarfile_BMW.open("usedcarinformation.txt",ios::out);
            usedcarfile_BMW << bmw;
            cout<<"Your Information Of BMW is Stored Successfully ! ! ! "<<endl;
            usedcarfile_BMW.close();
            char option_for_contact_BMW;
            cout<<"Do You Want Contact Of BMW Seller ?(y/n) : ";
            cin>>option_for_contact_BMW;

            if(option_for_contact_BMW=='y' ||  option_for_contact_BMW=='Y')
            {
                bmw.viewcontact();
            }

            else 
            {
           
            }

            char option_for_inspection_report_BMW;
            cout<<"Want To Get Inspection Report For BMW ? (y/n) : ";
            cin>>option_for_inspection_report_BMW;

                if(option_for_inspection_report_BMW=='y' || option_for_inspection_report_BMW=='Y')
                {
                    cout<<"\n\n\tOverall Rating\t7.5/10\n\n";
                    bmw.inspectionreport();
                }
        }

        else if (usedcar_options == 2)  // condition for selecting Suzuki Vehicle it will stor in a file
        {
            fstream usedcarfile_SUZUKI;
            usedcarfile_SUZUKI.open("usedcarinformation.txt",ios::out);
            usedcarfile_SUZUKI <<suzuki;
            cout<<"Your Information Of Suzuki is Stored Successfully ! ! ! "<<endl;
            usedcarfile_SUZUKI.close();
            char option_for_contact_suzuki;
            cout<<"Do You Want Contact Of Suzuki Seller ?(y/n) : ";
            cin>>option_for_contact_suzuki;

            if(option_for_contact_suzuki=='y' ||  option_for_contact_suzuki=='Y')
            {
                suzuki.viewcontact();
            }

            else 
            {

            }

            char option_for_inspection_report_suzuki;
            cout<<"Want To Get Inspection Report For Suzuki ? (y/n) : ";
            cin>>option_for_inspection_report_suzuki;

                if(option_for_inspection_report_suzuki=='y' || option_for_inspection_report_suzuki=='Y')
                {
                    cout<<"\n\n\tOverall Rating\t8.5/10\n\n";
                    suzuki.inspectionreport();
                }

        }

        else if(usedcar_options == 3) // condition for selecting toyota vehicle it will sotre in a file
        {
            fstream usedcarfile_TOYOTA;
            usedcarfile_TOYOTA.open("usedcarinformation.txt",ios::out);
            usedcarfile_TOYOTA <<toyota;
            cout<<"Your Information Of Toyota is Stored Successfully ! ! ! "<<endl;
            usedcarfile_TOYOTA.close();
            char option_for_contact_toyota;
            cout<<"Do You Want Contact Of Toyota Seller ?(y/n) : ";
            cin>>option_for_contact_toyota;

            if(option_for_contact_toyota=='y' ||  option_for_contact_toyota=='Y')
            {
                toyota.viewcontact();
            }

             else 
            {

            }

            char option_for_inspection_report_toyota;
            cout<<"Want To Get Inspection Report For Toyota ? (y/n) : ";
            cin>>option_for_inspection_report_toyota;

                if(option_for_inspection_report_toyota=='y' || option_for_inspection_report_toyota=='Y')
                {
                    cout<<"\n\n\tOverall Rating\t7.5/10\n\n";
                    toyota.inspectionreport();
                }
        }



    }


    else if (options_to_view_vehicles == 2) // if user selects new car options
    {   
        int newcar_option;
        new_cars GMC("Car","Good","Wasim","GMC","Canyon",22.92,410000,852645,"Petrol","7LK2",8,2018,"Karachi","Grey");
        new_cars FORD("Sports","Excellent","Sohaib","Ford","Mustang",25.23,470000,452256,"Diesel","9OO5",9.5,2020,"Multan","White");
        new_cars FERRARI("Sports","Superb","Imran","Ferrari","458",27.95,530000,114477,"Diesel","P11M",10,2021,"Lahore","Red");
        GMC.viewvehicle();
        FORD.viewvehicle();
        FERRARI.viewvehicle();

        cout<<"[1]. GMC\n";
        cout<<"[2]. Ford\n";
        cout<<"[3]. Ferrari\n";

        cout<<"Which Car Do You Want To Buy ? (1-3) : ";
        cin>>newcar_option;

        while(newcar_option<1   ||  newcar_option>3)
        {
            cout<<"ERROR ! ! ! | Enter Again (1-3) : ";
            cin>>newcar_option;
        }  

        if(newcar_option==1) // condition if user selects GMC vehicle
        {
            fstream newcarfile_GMC;
            newcarfile_GMC.open("newcarinformation.txt",ios::out);
            newcarfile_GMC<<GMC;
            cout<<"Information Of GMC Vehicle Is Stored Successfully ! ! ! "<<endl;
            newcarfile_GMC.close();
            char option_for_contact_GMC;
            cout<<"Do You Want Contact Of GMC Seller ?(y/n) : ";
            cin>>option_for_contact_GMC;

            if(option_for_contact_GMC=='y' ||  option_for_contact_GMC=='Y')
            {
                GMC.viewcontact();
            }

             else 
            {

            }

            char option_for_inspection_report_GMC;
            cout<<"Want To Get Inspection Report For Suzuki ? (y/n) : ";
            cin>>option_for_inspection_report_GMC;

                if(option_for_inspection_report_GMC=='y' || option_for_inspection_report_GMC=='Y')
                {
                    cout<<"\n\n\tOverall Rating\t8/10\n\n";
                    GMC.inspectionreport();
                }
        }

        else if(newcar_option==2) // condition if user selects FORD vehicle
        {
            fstream newcarfile_FORD;
            newcarfile_FORD.open("newcarinformation.txt",ios::out);
            newcarfile_FORD<<FORD;
            cout<<"Information Of Ford Vehicle Is Stored Successfully ! ! ! "<<endl;
            newcarfile_FORD.close();
            char option_for_contact_FORD;
            cout<<"Do You Want Contact Of Ford Seller ?(y/n) : ";
            cin>>option_for_contact_FORD;

            if(option_for_contact_FORD=='y' ||  option_for_contact_FORD=='Y')
            {
                FORD.viewcontact();
            }

            else 
            {

            }

            char option_for_inspection_report_FORD;
            cout<<"Want To Get Inspection Report For Suzuki ? (y/n) : ";
            cin>>option_for_inspection_report_FORD;

                if(option_for_inspection_report_FORD=='y' || option_for_inspection_report_FORD=='Y')
                {
                    cout<<"\n\n\tOverall Rating\t8.5/10\n\n";
                    FORD.inspectionreport();
                }

            
        }

        if(newcar_option==3) // condition if user selects FERRARI vehicle
        {
            fstream newcarfile_FERRARI;
            newcarfile_FERRARI.open("newcarinformation.txt",ios::out);
            newcarfile_FERRARI<<FERRARI;
            cout<<"Information Of Ferrari Vehicle Is Stored Successfully ! ! ! "<<endl;
            newcarfile_FERRARI.close();
            char option_for_contact_FERRARI;
            cout<<"Do You Want Contact Of Ferrari Seller ?(y/n) : ";
            cin>>option_for_contact_FERRARI;

            if(option_for_contact_FERRARI=='y' ||  option_for_contact_FERRARI=='Y')
            {
                FERRARI.viewcontact();
            }

             else 
            {

            }

            char option_for_inspection_report_FERRARI;
            cout<<"Want To Get Inspection Report For Suzuki ? (y/n) : ";
            cin>>option_for_inspection_report_FERRARI;

                if(option_for_inspection_report_FERRARI=='y' || option_for_inspection_report_FERRARI=='Y')
                {
                    cout<<"\n\n\tOverall Rating\t10/10\n\n";
                    FERRARI.inspectionreport();
                }
        }


    }

    else
    {   
        int bikes_option;
        bikes HONDA("Bike","Good","Shan","Honda","CD70",45.54,220000,745265,"Petrol","I77M",8,2016,"Rawalpindi","Red");
        bikes YAMAHA("Bike","Excellent","Sarfaraz","Yamaha","CD125",64.21,390000,852963,"Petrol","X69X",9.5,2022,"Islamabad","Black");
        
        HONDA.viewvehicle();
        YAMAHA.viewvehicle();


        cout<<"[1]. Honda\n";
        cout<<"[2]. Yamaha\n";
        cout<<"Select The Option Wisely (1-2) : ";
        cin>>bikes_option;

    while(bikes_option<1    ||  bikes_option>2)
    {
        cout<<"ERROR ! ! ! | Enter Again (1-2) : ";
        cin>>bikes_option;
    }

        if(bikes_option==1) // condition if user selects HONDA and then stores in a file
        {
            fstream bikefile_HONDA;
            bikefile_HONDA.open("bikeinformation.txt",ios::out);
            bikefile_HONDA<<HONDA;
            cout<<"Information Of Honda Vehicle Is Stored Successfully ! ! ! ! "<<endl;
            bikefile_HONDA.close();
            char option_for_contact_honda;
            cout<<"Do You Want Contact Of Honda Seller ?(y/n) : ";
            cin>>option_for_contact_honda;

            if(option_for_contact_honda=='y' ||  option_for_contact_honda=='Y')
            {
                HONDA.viewcontact();
            }

             else 
            {

            }

            char option_for_inspection_report_HONDA;
            cout<<"Want To Get Inspection Report For Suzuki ? (y/n) : ";
            cin>>option_for_inspection_report_HONDA;

                if(option_for_inspection_report_HONDA=='y' || option_for_inspection_report_HONDA=='Y')
                {
                    cout<<"\n\n\tOverall Rating\t8/10\n\n";
                    HONDA.inspectionreport();
                }

        }

         else // condition if user selects Yamaha and then stores in a file
        {
            fstream bikefile_YAMAHA;
            bikefile_YAMAHA.open("bikeinformation.txt",ios::out);
            bikefile_YAMAHA<<YAMAHA;
            cout<<"Information Of Yamaha Vehicle Is Stored Successfully ! ! ! ! "<<endl;
            bikefile_YAMAHA.close();
            char option_for_contact_yamaha;
            cout<<"Do You Want Contact Of Suzuki Seller ?(y/n) : ";
            cin>>option_for_contact_yamaha;

            if(option_for_contact_yamaha=='y' ||  option_for_contact_yamaha=='Y')
            {
                YAMAHA.viewcontact();
            }

            else 
            {

            }

            char option_for_inspection_report_YAMAHA;
            cout<<"Want To Get Inspection Report For Suzuki ? (y/n) : ";
            cin>>option_for_inspection_report_YAMAHA;

                if(option_for_inspection_report_YAMAHA=='y' || option_for_inspection_report_YAMAHA=='Y')
                {
                    cout<<"\n\n\tOverall Rating\t9.5/10\n\n";
                    YAMAHA.inspectionreport();
                }


        }

    }

    }// end of condition of yes to view vehicle

    else if(opt=='n'||opt=='N')
    {
    char option_for_view_auction;
    

    cout<<"Want To View Auction ? : ";
    cin>>option_for_view_auction;

    if(option_for_view_auction=='y'||option_for_view_auction=='Y')
    {   
        int option_auction;
        cout<<"\t\tVIEW AUCTION\n\n";
        cout<<"\n\n[1]. Used Cars\n";
        cout<<"[2]. New Cars\n";
        cout<<"[3]. Bikes\n";
        cout<<"Select the Option Wisely (1-3) : ";
        cin>>option_auction;

        while(option_auction<1  ||  option_auction>3)
        {
            cout<<"ERROR ! ! ! | Enter Again(1-3) : ";
            cin>>option_auction;
        }

        if(option_auction==1) // condition of usedcars if user selected
        {   
            int usedcars_auction_option;
            used_cars HONDA("Car","Pathetic","Ammar","Honda","City",9.32,120000,236547,"Petrol","2HF1",4,2004,"Sarghoda","White");
            used_cars KIA("Car","Normal","Jawad","KIA","Sportage",15.16,280000,632569,"Petrol","6MM0",7,2021,"Islamabad","Black");
            HONDA.viewauction();
            KIA.viewauction();
            cout<<"\n\n[1]. HONDA\n";
            cout<<"[2]. KIA\n";
            cout<<"Select The Options Wisely(1-3) : ";
            cin>>usedcars_auction_option;

            while(usedcars_auction_option<1     ||      usedcars_auction_option>2)
            {
                cout<<"ERROR ! ! ! | Enter Again(1-2) : ";
                cin>>usedcars_auction_option;
            }

            if(usedcars_auction_option==1) // condition of user selecting a HONDA and then stores in a file
            {
                fstream myauctionfile_HONDA;
                myauctionfile_HONDA.open("auctioninformation.txt",ios::out);
                myauctionfile_HONDA<<HONDA;
                cout<<"Information Of HONDA is stored in a file successfully ! ! ! "<<endl;
                myauctionfile_HONDA.close();
                char options_HONDA_contact;
                cout<<"Do You Want Contact Of Suzuki Seller ?(y/n) : ";
                cin>>options_HONDA_contact;

                if(options_HONDA_contact=='y' ||  options_HONDA_contact=='Y')
                {
                     HONDA.viewcontact();
                }

                else 
            {

            }

            char option_for_inspection_report_HONDA;
            cout<<"Want To Get Inspection Report For Honda ? (y/n) : ";
            cin>>option_for_inspection_report_HONDA;

                if(option_for_inspection_report_HONDA=='y' || option_for_inspection_report_HONDA=='Y')
                {
                    cout<<"\n\n\tOverall Rating\t9.5/10\n\n";
                    HONDA.inspectionreport();
                }

            }

            else  // condition of user selecting a KIA and then stores in a file
            {
                fstream myauctionfile_KIA;
                myauctionfile_KIA.open("auctioninformation.txt",ios::out);
                myauctionfile_KIA<<KIA;
                cout<<"Information Of KIA is stored in a file successfully ! ! ! "<<endl;
                myauctionfile_KIA.close();
                char options_KIA_contact;
                cout<<"Do You Want Contact Of KIA Seller ?(y/n) : ";
                cin>>options_KIA_contact;

            if(options_KIA_contact=='y' ||  options_KIA_contact=='Y')
            {
                KIA.viewcontact();
            }

            else 
            {

            }

            char option_for_inspection_report_KIA;
            cout<<"Want To Get Inspection Report For KIA ? (y/n) : ";
            cin>>option_for_inspection_report_KIA;

                if(option_for_inspection_report_KIA=='y' || option_for_inspection_report_KIA=='Y')
                {
                    cout<<"\n\n\tOverall Rating\t9.5/10\n\n";
                    KIA.inspectionreport();
                }




            }

        } //end of used car condition

        else if(option_auction==2) // condition of new cars if user selected
        {
            int newcar_auction_option;
            new_cars PORSCHE("Sports","Excellent","Ahmed","Porsche","911",35.36,750000,365214,"Diesel","H65H",9.5,2022,"Islamabad","Blue");
            new_cars MERCEDES("Sports","Superb","Malik","Mercedes","IC63",45.33,1000000,985632,"Diesel","X69X",10,2022,"Lahore","White");
            PORSCHE.viewauction();
            MERCEDES.viewauction();

            cout<<"\n\n[1]. Porsche \n";
            cout<<"[2]. Mercedes\n";
            cout<<"Select The Option Wisely (1-2) : ";
            cin>>newcar_auction_option;

            while(newcar_auction_option<1       ||      newcar_auction_option>2)
            {
                cout<<"ERROR ! ! ! | Enter Again : ";
                cin>>newcar_auction_option;
            }

            if(newcar_auction_option==1) // if user selects Porsche and then stored in a file
            {
                fstream myauctionfile_PORSCHE;
                myauctionfile_PORSCHE.open("auctioninfomation.txt",ios::out);
                myauctionfile_PORSCHE<<PORSCHE;
                cout<<"Information Of Porsche Is Stored Successfully"<<endl;
                myauctionfile_PORSCHE.close();
                char options_for_contact_porsche;
                cout<<"Do You Want Contact Of Porsche Seller ?(y/n) : ";
                cin>>options_for_contact_porsche;

            if(options_for_contact_porsche=='y' ||  options_for_contact_porsche=='Y')
            {
                PORSCHE.viewcontact();
            }

    else 
            {

            }

            char option_for_inspection_report_PORSCHE;
            cout<<"Want To Get Inspection Report For Porsche ? (y/n) : ";
            cin>>option_for_inspection_report_PORSCHE;

                if(option_for_inspection_report_PORSCHE=='y' || option_for_inspection_report_PORSCHE=='Y')
                {
                    cout<<"\n\n\tOverall Rating\t9.5/10\n\n";
                    PORSCHE.inspectionreport();
                }




            }

            else // the option will automatically goes to the Mercedes
            {
                fstream myauctionfile_MERCEDES;
                myauctionfile_MERCEDES.open("auctioninformation.txt",ios::out);
                myauctionfile_MERCEDES<<MERCEDES;
                cout<<"Information Of Mercedes Is Stored Successfully"<<endl;
                myauctionfile_MERCEDES.close();
                char options_for_contact_mercedes;
                cout<<"Do You Want Contact Of Mercedes Seller ?(y/n) : ";
                cin>>options_for_contact_mercedes;

            if(options_for_contact_mercedes=='y' ||  options_for_contact_mercedes=='Y')
            {
                MERCEDES.viewcontact();
            }


             else 
            {

            }

            char option_for_inspection_report_MERCEDES;
            cout<<"Want To Get Inspection Report For Mercedes ? (y/n) : ";
            cin>>option_for_inspection_report_MERCEDES;

                if(option_for_inspection_report_MERCEDES=='y' || option_for_inspection_report_MERCEDES=='Y')
                {
                    cout<<"\n\n\tOverall Rating\t10/10\n\n";
                    MERCEDES.inspectionreport();
                }
            
            }

        }


        else // for auction of bikes
        {   
            int KAWASAKI_option;
            bikes KAWASAKI("Sports","Good","Khan","Kawasaki","Ninja",30.06,250000,742853,"Diesel","G87N",8.5,2018,"Islamabad","Red");
            bikes TESLA("Sports","Good","Umar","Tesla","FAST",32.56,270000,258142,"Diesel","M44M",8.5,2019,"Islamabad","Black");
            
            KAWASAKI.viewauction();
            TESLA.viewauction();


            cout<<"\n\n[1]. Kawasaki\n";
            cout<<"[2].Honda\n ";
            cout<<"Select The Option Wisely(1-2) : ";
            cin>>KAWASAKI_option;

            while(KAWASAKI_option<1     ||      KAWASAKI_option>2)
            {
                cout<<"ERROR ! ! ! | Enter Again(1-2) : ";
                cin>>KAWASAKI_option;
            }

            if(KAWASAKI_option==1) // if user selects KAWASAKI option and then stored in a file 
            {
                fstream myauctionfile_KAWASAKI;
                myauctionfile_KAWASAKI.open("auctioninformation.txt",ios::out);
                myauctionfile_KAWASAKI<<KAWASAKI;
                cout<<"Inforamtion Of Kawasaki is Stored Successfully ! ! ! "<<endl;
                myauctionfile_KAWASAKI.close();
                char options;
                cout<<"Do You Want Contact Of Kawasaki Seller ?(y/n) : ";
                cin>>options;

            if(options=='y' ||  options=='Y')
            {
                KAWASAKI.viewcontact();
            }

             else 
            {

            }

            char option_for_inspection_report_KAWASAKI;
            cout<<"Want To Get Inspection Report For Kawasaki ? (y/n) : ";
            cin>>option_for_inspection_report_KAWASAKI;

                if(option_for_inspection_report_KAWASAKI=='y' || option_for_inspection_report_KAWASAKI=='Y')
                {
                    cout<<"\n\n\tOverall Rating\t8.5/10\n\n";
                    KAWASAKI.inspectionreport();
                }



            }

            else
            {
                fstream myauctionfile_TESLA;
                myauctionfile_TESLA.open("auctioninformation.txt",ios::out);
                myauctionfile_TESLA<<TESLA;
                cout<<"Inforamtion Of Tesla is Stored Successfully ! ! ! "<<endl;
                myauctionfile_TESLA.close();
                char options;
                cout<<"Do You Want Contact Of Tesla Seller ?(y/n) : ";
                cin>>options;

            if(options=='y' ||  options=='Y')
            {
                TESLA.viewcontact();
            }


             else 
            {

            }

            char option_for_inspection_report_TESLA;
            cout<<"Want To Get Inspection Report For Tesla ? (y/n) : ";
            cin>>option_for_inspection_report_TESLA;

                if(option_for_inspection_report_TESLA=='y' || option_for_inspection_report_TESLA=='Y')
                {
                    cout<<"\n\n\tOverall Rating\t8.5/10\n\n";
                    TESLA.inspectionreport();
                }
            }


        }


    }
    //} // end of yes condition of view vehicle
    }
   
      
    return 0;
}