#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;

class abstract // parent class
{
private:
public:
    virtual void viewvehicle() = 0;
    virtual void viewcontact()=0;
    virtual void viewnotification()=0;
    virtual void contact_notification()=0;

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
        cout<<"\n\n";
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

    friend istream &operator>>(istream &ask, vehicle &other)
    {   cout<<"Vehicle      : ";
        ask >> other.vehiclename;
        cout<<"Company      : ";
        ask >> other.company;
        cout<<"Model        : ";
        ask >> other.model;
        cout<<"Mileage      : ";
        ask >> other.mileage;
        while (other.mileage<0)
        {
            cout<<"Enter Again      : ";
            ask>>other.mileage;
        }
        cout<<"Price        : ";
        ask >> other.price;
        while (other.price<0)
        {
            cout<<"Enter Again      : ";
            ask>>other.price;
        }
        cout<<"Description  : ";
        ask >> other.description;
        cout<<"Seller Name  : ";
        ask >> other.sellername;
        cout<<"Contact      : ";
        ask >> other.contact;
        cout<<"Fuel Type    : ";
        ask >> other.fueltype;
        cout<<"Engine       : ";
        ask >> other.engine;
        cout<<"Rating(10)   : ";
        ask >> other.rating;
        while (other.rating>10)
        {
            cout<<"Enter Again  : ";
            ask>>other.rating;
        }
        cout<<"Make Year    : ";
        ask >> other.makeyear;
        cout<<"Available In City : ";
        ask >> other.availableincity;
        cout<<"Color        : ";
        ask >> other.color;

        return ask;
    }

    friend ostream &operator<<(ostream &print, vehicle &other)
    {   
        print<<"\t\tInformation Of Vehicle\n\n";
        print <<"Vehicle      : "<<other.vehiclename << endl;
        print <<"Company      : "<< other.company << endl;
        print <<"Model        : "<< other.model << endl;
        print <<"Mileage      : "<< other.mileage << endl;
        print <<"Price        : "<< other.price << endl;
        print <<"Description  : "<< other.description << endl;
        print <<"Seller Name  : "<< other.sellername << endl;
        print <<"Contact      : "<< other.contact << endl;
        print <<"Fuel Type    : "<< other.fueltype << endl;
        print <<"Engine       : "<< other.engine << endl;
        print <<"Rating       : "<< other.rating << endl;
        print <<"Make Year    : "<< other.makeyear << endl;
        print <<"Available In City  : "<< other.availableincity << endl;
        print <<"Color        : "<< other.color << endl;

        print<<"\n\n\n";

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

    void contact_notification()
    {
        cout<<"Contact Information\n\n";
        cout<<"Seller's Name    : "<<sellername<<endl;
        cout<<"Seller's Contact : "<<contact<<endl;
    }

    void viewnotification()
    {
        cout<<"\n\n\nHere's Your Notification Of Your Vehicle !\n";
        cout<<"Correct Where's wrong. Here's our information\n";
        cout<<"Address    : House#456, Street 4D, FAST Road, Lahore\n";
        cout<<"Contact No : +923305869710\n ";
    }
   


};

class used_cars : public abstract
{
private:
    vehicle BMW;
    vehicle Suzuki;
    vehicle Toyota;

public:
   
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


   
    void viewcontact()
    {
        BMW.viewcontact();
        //Suzuki.viewcontact();
        //Toyota.viewcontact();
    }

     void viewnotification()
     {  cout<<"Here's Your Notification Of Your Vehicle !\n";
        cout<<"Correct Where's wrong. Here's our information\n";
        cout<<"Address    : House#456, Street 4D, FAST Road,Lahore\n";
        cout<<"Contact No : +923305869710\n ";
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

   

    void viewcontact()
    {
        GMC.viewcontact();
    }
    
    
    
 
     void viewnotification()
     {  
        cout<<"\n\n\nHere's Your Notification Of Your Vehicle !\n";
        cout<<"Correct Where's wrong. Here's our information\n";
        cout<<"Address    : House#456, Street 4D, FAST Road,Lahore\n";
        cout<<"Contact No : +923305869710\n ";
        GMC.viewvehicle();
        GMC.contact_notification();
     }
    
    
     void contact_notification()
    {   
        GMC.viewvehicle();
        GMC.contact_notification();
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

   

    void viewcontact()
    {
        Honda.viewcontact();
    }


     void viewnotification()
     {  
        cout<<"\n\n\nHere's Your Notification Of Your Vehicle !\n";
        cout<<"Correct Where's wrong. Here's our information\n";
        cout<<"Address    : House#456, Street 4D, FAST Road,Lahore\n";
        cout<<"Contact No : +923305869710\n ";
        Honda.viewvehicle();
        Honda.contact_notification();
     }


     void contact_notification()
    {   
        Honda.viewvehicle();
        Honda.contact_notification();
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
        used_cars bmw("Car","Good","Saad","BMW","P98",20.15,250000,745236,"Petrol","M41O",7,2014,"Islamabad","Black");
        used_cars suzuki("Car", "Bad", "Hunain", "Suzuki", "Mehran", 7.26, 70000, 111557, "Petrol", "M00N", 3.5, 2003, "Murree", "Black");
        used_cars toyota("Car", "Good", "Fassih", "Toyota", "MClass", 20.36, 210000, 321978, "Petrol", "M48U", 7, 2018, "Kohat", "Blue");
        
        //..................polymorphic behaviour
        bmw.viewvehicle();
        suzuki.viewvehicle();
        toyota.viewvehicle();

        //vehicle *V[3];
        //V[0]=new used_cars();


        cout << "[1]. BMW\n";
        cout << "[2]. Suzuki\n";
        cout << "[3]. Toyota\n";

        cout << "Which Car Do You Want To Buy ? (1-3) : ";
        cin >> usedcar_options;

        //itentation method
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

            char option_to_view_notification;
            cout<<"Want To Add Notification ? (y/n) : ";
            cin>>option_to_view_notification;

            if(option_to_view_notification=='y' || option_to_view_notification=='Y')
            {   
                cout<<"\n\t\tBMW INFORMATION\n\n";
                bmw.viewnotification(); // virtual function to view notification
            }

            

                           
        }// condition for selecting BMW Vehicle it will store in a file

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

            char option_to_view_notification;
            cout<<"Want To Add Notification ? (y/n) : ";
            cin>>option_to_view_notification;

            if(option_to_view_notification=='y' || option_to_view_notification=='Y')
            {   cout<<"\n\t\t SUZUKI INFORMATION\n\n";
                suzuki.viewnotification(); // virtual function to view notification
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

            char option_to_view_notification;
            cout<<"Want To Add Notification ? (y/n) : ";
            cin>>option_to_view_notification;

            if(option_to_view_notification=='y' || option_to_view_notification=='Y')
            {   cout<<"\n\t\t TOYOTA INFORMATION\n\n";
                toyota.viewnotification(); // virtual function to view notification
            }

           
        }



    }


    else if (options_to_view_vehicles == 2) // if user selects new car options
    {   
        int newcar_option;
        new_cars GMC("Car","Excellent","Munim","GMC","952",26.32,475000,159375,"Petrol","L98N",9,2019,"Islamabad","Red");
        new_cars FORD("Sports","Excellent","Sajer","Ford","Focus",26.21,500000,148257,"Diesel","9ML5",9.5,2021,"Quetta","Blue");
        new_cars FERRARI("Sports","Superb","Nawal","Ferrari","S8",32.69,750000,222223,"Diesel","M98H",10,2022,"Islamabad","Red");
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

            char option_to_view_notification;
            cout<<"Want To Add Notification ? (y/n) : ";
            cin>>option_to_view_notification;

            if(option_to_view_notification=='y' || option_to_view_notification=='Y')
            {   cout<<"\n\t\tGMCFERRARI INFORMATION\n\n";
                GMC.viewnotification(); // virtual function to view notification
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

            char option_to_view_notification;
            cout<<"Want To Add Notification ? (y/n) : ";
            cin>>option_to_view_notification;

            if(option_to_view_notification=='y' || option_to_view_notification=='Y')
            {   cout<<"\n\t\t FORD INFORMATION\n\n";
                FORD.viewnotification(); // virtual function to view notification
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

            char option_to_view_notification;
            cout<<"Want To Add Notification ? (y/n) : ";
            cin>>option_to_view_notification;

            if(option_to_view_notification=='y' || option_to_view_notification=='Y')
            {   cout<<"\n\t\tFERRARI INFORMATION\n\n";
                FERRARI.viewnotification(); // virtual function to view notification
            }

           
        }


    }

    else
    {   
        int bikes_option;
        bikes HONDA("Bike","Good","Mani","Honda","CD125",75.25,280000,654987,"Petrol","I98M",8.5,2019,"Rawalpindi","Blue");
        bikes YAMAHA("Bike","Excellent","Neelum","Yamaha","Supra",80.25,300000,132654,"Petrol","X96X",9,2021,"Islamabad","Black");
        
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

            char option_to_view_notification;
            cout<<"Want To Add Notification ? (y/n) : ";
            cin>>option_to_view_notification;

            if(option_to_view_notification=='y' || option_to_view_notification=='Y')
            {   
                cout<<"\n\t\tHONDA INFORMATION\n\n";
                HONDA.viewnotification(); // virtual function to view notification
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

            char option_to_view_notification;
            cout<<"Want To Add Notification ? (y/n) : ";
            cin>>option_to_view_notification;

            if(option_to_view_notification=='y' || option_to_view_notification=='Y')
            {   cout<<"\n\t\tYAMAHA INFORMATION\n\n";
                YAMAHA.viewnotification(); // virtual function to view notification
            }

           

        }

    }

    }// end of condition of yes to view vehicle

    //else


//...................................       Now going for adding new vehicle .....................


        char option_to_chose_addvehicle;
        cout<<"Want To Add Vehicle ? (y/n) : ";
        cin>>option_to_chose_addvehicle;

        if(option_to_chose_addvehicle=='y'  ||      option_to_chose_addvehicle=='Y')
        {   
            int number;
            
            ofstream myaddfile;
            cout<<"How Many Vehicles Do You Want To Enter ? : ";
            cin>>number;

            vehicle A[number];

            for(int i=0;i<number;i++)
            {
                cout<<"\t\tFor Vehicle # "<<i+1<<endl<<endl;
                cin>>A[i];
            }

            

            myaddfile.open("AddVehicle.txt",ios::app);
             if (myaddfile.is_open()) 
             {
                cout << "Information Of Vehicle is stored in a file" << std::endl << std::endl;
                for (int i = 0; i < number; i++) 
                 {
                    myaddfile << A[i];
                 }
                 
                    myaddfile.close();
            }
            
             else 
             {
                cout<< "Error opening the file!" << std::endl;
             }
            //cout<<"Information Of Vehicle is stored in a file "<<endl<<endl;
            //for(int i=0;i<number;i++)
            //{   
             //   myaddfile<<A[i];
           // }
           // myaddfile.close();
            
        }


        else
        {

        }
    //...................................       Now going for adding new vehicle .....................


    char option_to_delete_vehicle;
    cout<<"Want To Delete Vehicle ? (y/n) : ";
    cin>>option_to_delete_vehicle;

    if(option_to_delete_vehicle=='y'    ||  option_to_delete_vehicle=='Y')
    {
        ifstream deletefile;
        deletefile.open("Addvehicle.txt",ios::out);
        
        if(deletefile.is_open())
        {
            deletefile.close();
            if(remove("Addvehicle.txt")==0)
            {cout<<"Your File Has Been Deleted Successfully ! ! ! "<<endl<<endl;}
            else
            {cout<<"Error Deleting The File ! ! ! "<<endl<<endl;}
        }

        else
        {
            cout<<"Error Opening The File For Deletion ! ! ! "<<endl;
        }
        
        
        
        
        //remove("Addvehicle.txt");
        //deletefile.close();
        //cout<<"Your File Has Been Deleted Successfully ! ! ! "<<endl<<endl;
    }

    else
    {

    }

    char option_to_register_auction;
    cout<<"Want To Register For Auction ? (y/n) : ";
    cin>>option_to_register_auction;

    if(option_to_register_auction=='y' || option_to_register_auction=='Y')
    {
        cout<<"\n\nYou Have To Fill Information Of Vehicle Below\n\n";
        vehicle auction;
        cin>>auction;

        char c;
        cout<<"Do You Want To Store Inofrmation Of Auction Vehicle In A File ? (y/n) : ";
        cin>>c;

        if(c=='y' || c=='Y')
        {
            fstream auctionfile;
            auctionfile.open("Auction_File.txt",ios::out);
            if(auctionfile.is_open())
            {
                auctionfile<<auction<<endl;
                cout<<"Information Of Auction Is Stored In a File Successfully ! ! ! "<<endl<<endl;
            }
            else
            {
                cout<<"ERROR in storing In A File"<<endl;
            }
        }
    }




}
