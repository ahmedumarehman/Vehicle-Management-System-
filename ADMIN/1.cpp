    #include<iostream>
    #include<fstream>
    #include<string>
    #include<cstdlib>
    

    using namespace std;

    
    class Admin
    {
        private:
        string car_name;
        string car_model;
        int car_year;
        
        
        //..... for managing inspcection report
        char customername[20]="Ahmed Umar";
        int enginecapacity=1800;
        double mileage=19.98;
        string transmissiontype="V90";
        char inspectiondate[20]="8th December 2016";
        string chassis="S#@987";
        string enginenumber="P98O";
        int registrationnumber=159743;
        string fueltype="Petrol";
        string registercity="Karachi";
        string currentcity="Islamabad";
        char carfeatures[100]="This Car Has Good Features, It has Sun Roof";
        double rating=8.5; 

        public:
        Admin()
        {

        }

        Admin(char n[20],char add[55],char C[20],char CITY[15]
        ,char features[100],char insspection[20],
        char customer[20],int capacity,double mile,string transmission,string chas,string engine,
        string fuel,string registerC,string currentC,double r,int registration,string car_n,string car_m,int makeyear):enginecapacity(capacity),mileage(mile),
        transmissiontype(transmission),chassis(chas),enginenumber(engine),fueltype(fuel),registercity(registerC),
        currentcity(currentC),rating(r),registrationnumber(registration),car_name(car_n),car_model(car_m),car_year(makeyear)
        {
        
            customername[20]=customer[20];
            inspectiondate[20]=insspection[20];
            carfeatures[100]=features[100];
        }
        
        void manageinspection()
        {
            cout<<"Seller Name          : ";
            for(int i=0;i<20;i++)
            {
                cout<<customername[i];
            }cout<<endl;
            cout<<"Engine Capacity      : "<<enginecapacity<<endl;
            cout<<"Mileage              : "<<mileage<<endl;
            cout<<"Transmission Type    : "<<transmissiontype<<endl;
            cout<<"Inspection Date      : "<<inspectiondate<<endl;
            cout<<"Chassis No           : "<<chassis<<endl;
            cout<<"Engine Number        : "<<enginenumber<<endl;
            cout<<"Fuel Type            : "<<fueltype<<endl;
            cout<<"Registered City      : "<<registercity<<endl;
            cout<<"Current City         : "<<currentcity<<endl;
            cout<<"Rating(Out Of 10)    : "<<rating<<endl;
            cout<<"Car Features         : ";
            for(int i=0;i<100;i++)
            {
                cout<<carfeatures[i];
            }

            cout<<"\n\n";
        }
        friend istream& operator>>(istream&ask,Admin&other)
        {
            cout<<"Enter Car Name       : ";
            ask>>other.car_name;

            cout<<"Enter Car Model      : ";
            ask>>other.car_model;

            cout<<"Enter Year           : ";
            ask>>other.car_year;
            return ask;
            

        }    

        friend ostream& operator<<(ostream&print,Admin&other)
        {
        print<<"\n\tBASIC INFORMATION OF CAR\n\n";
        print<<"Car   : "<<other.car_name<<endl;
        print<<"Model : "<<other.car_model<<endl;
        print<<"Year  : "<<other.car_year<<endl;

        //other.notification();
            return print;
        }


        void notification()
        {   
            //cout<<"\n\n\tCAR DETAIL INFORMATION\n\n";
            //cout<<"Car   : "<<this->car_name<<endl;
            //cout<<"Model : "<<this->car_model<<endl;
            //cout<<"Year  : "<<this->car_year<<endl;                   


            cout<<"\tINSPECTION REPORT\n\n";
            cout<<"Seller Name          : ";
            for(int i=0;i<20;i++)
            {
                cout<<customername[i];
            }cout<<endl;
            cout<<"Engine Capacity      : "<<enginecapacity<<endl;
            cout<<"Mileage              : "<<mileage<<endl;
            cout<<"Transmission Type    : "<<transmissiontype<<endl;
            cout<<"Inspection Date      : "<<inspectiondate<<endl;
            cout<<"Chassis No           : "<<chassis<<endl;
            cout<<"Engine Number        : "<<enginenumber<<endl;
            cout<<"Fuel Type            : "<<fueltype<<endl;
            cout<<"Registered City      : "<<registercity<<endl;
            cout<<"Current City         : "<<currentcity<<endl;
            cout<<"Rating(Out Of 10)    : "<<rating<<endl;
            cout<<"Car Features         : ";
            for(int i=0;i<100;i++)
            {
                cout<<carfeatures[i];
            }

            cout<<"\n\n";

        }

        //void printinspection(ostream&os) const
    // {
        //    os<<rating;
    // }


    };


    int main()
    {   
        Admin Basic_information_Of_Car;
        char option;
        cout<<"Want To Add Vehicle ? (y/n) : ";
        cin>>option;

        if(option=='y'||option=='Y')
        {
            ofstream myfile;
            cin>>Basic_information_Of_Car;
            myfile.open("Add_Vehicle_Admin.txt");
            cout<<"\nInformation Of Vehicle Is Stored In A File Successfully ! "<<endl<<endl;
            myfile<<Basic_information_Of_Car;

            //cout<<Basic_information_Of_Car;
            
        }

        else
        {

        }

        char option_manage_inspection_report;
        cout<<"Want To Manage Inspection Report Of That Vehicle ? (y/n) : ";
        cin>>option_manage_inspection_report;

        if(option_manage_inspection_report=='y' || option_manage_inspection_report=='Y')
        {
            Admin inspe;
            inspe.manageinspection();
            cout<<endl;
        
        }

        else
        {

        }

        char option_to_add_notification;
        cout<<"Want To Add Notification ? (y/n) : ";
        cin>>option_to_add_notification;

        cout<<endl<<endl;

        if(option_to_add_notification=='y'||option_to_add_notification=='Y')
        {
            Admin noti;
             
            cout<<"\n\n\t\tNOTIFICATION OF VEHICLE\n\n";
            cout<<Basic_information_Of_Car<<endl;
            noti.notification();
            
        }

        else
        {

        }

        char option_to_delete_notification;
        cout<<"Want To Remove Information Of Vehicle ? (y/n) : ";
        cin>>option_to_delete_notification;

        if(option_to_delete_notification=='y'||option_to_delete_notification=='Y')
        {
            ifstream deletefile;
            deletefile.open("Add_Vehicle_Admin.txt",ios::out);
            if(deletefile.is_open())
            {
                deletefile.close();
                if(remove("Add_Vehicle_Admin.txt")==0)
                {
                    cout<<"Your File Has Been Deleted Sucessfully ! "<<endl;
                }
                else
                {
                    cout<<"ERROR ! Deleting the file ! "<<endl;
                }
            }
            else
            {
                cout<<"ERROR Opening the File For Deletion! "<<endl;
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

    }