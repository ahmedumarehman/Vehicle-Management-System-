#include<iostream>
#include<cstring>
#include<fstream>
#include<conio.h>
using namespace std;




class Register // ....... buyer menu, first register 
{

private:
string name;
string fathername;
int  DOB;
int age;
string nationality;
string status;


public:

Register() //...... default constructor
{
    name="";
    fathername="";
    DOB=0;
    age=0;
    nationality="";
    status="";
    //name[50]=' ';
}


Register(string n,string fn, int dob,string nation,string s,int a):age(a) // .......... parameter constructor+inline construction
{
    name=n;
    fathername=fn;
    DOB=dob;
    nationality=nation;
    status=s;
}


//........ setters and getters ................

void setname(string n){name=n;}
void setfathername(string fn){fathername=fn;}
void setDOB(int dob){DOB=dob;}
void setnationality(string nation){nationality=nation;}
void setstatus(string s){status=s;}
void setage(int a){age=a;}


string getname(){return name;}
string getfathername(){return fathername;}
int getDOB(){return DOB;}
string getnationality(){return nationality;}
string getstatus(){return status;}
int getage(){return age;}


//........copy constructor ..............

Register(const Register&other)
{
    name=other.name;
    fathername=other.fathername;
    DOB=other.DOB;
    nationality=other.nationality;
    status=other.status;
    age=other.age;
}


//..........istream operator overloading....................

friend istream& operator>>(istream &ask ,Register&other)
{
    cout<<"Name                    : ";
    ask>>other.name;

    cout<<"Father's Name           : ";
    ask>>other.fathername;
    
    cout<<"Date Of Birth(DD/MM/YY) : ";
    ask>>other.DOB;
    
    
    cout<<"Age                     : ";
    ask>>other.age;
    
    cout<<"Nationality             : ";
    ask>>other.nationality;
    
    cout<<"Status                  : ";
    ask>>other.status;

    return ask;

}

//..........ostream operator overloading .......................

friend ostream& operator<<(ostream &print,Register &other)
{
    print<<"Name          : "<<other.name<<endl;
    print<<"Father's Name : "<<other.fathername<<endl;
    print<<"Date Of Birth : "<<other.DOB<<endl;
    print<<"Age           : "<<other.age<<endl;
    print<<"Nationality   : "<<other.nationality<<endl;
    print<<"Status        : "<<other.status<<endl;

    return print;
}



};

class ViewVehicles
{
    private:
    string vehiclename;
    string company;
    string model;
    double mileage;
    int price;
    /*char description[50];*/string description;
    /*char sellername[15];*/string sellername;
    int contact;
    string fueltype;
    string engine;
    double rating;
    int makeyear;
    string availableincity;
    string color;

    public:
 
    ViewVehicles() // ........ default constructor
    {
        vehiclename="";
        company="";
        model="";
        mileage=0.0;
        price=0;
        description="";
        sellername="";
        contact=0;
        fueltype="";
        engine="";
        rating=0.0;
        makeyear=0;
        availableincity="";
        color="";
    }

    ViewVehicles(string name,string comp,string m,double mile,int p,int c,string fuel,string e,double r,int year,string available,string col)
    :mileage(mile),price(p),contact(c),rating(r),makeyear(year) //.........parameter constructor
    {
        vehiclename=name;
        company=comp;
        model=m;
        fueltype=fuel;
        engine=e;
        availableincity=available;
        color=col;
    }


    //............. setter & getters ...................

    void setvehiclenme(string name){vehiclename=name;}
    void setcompany(string comp){company=comp;}
    void setmodel(string m){model=m;}
    void setmileage(double mile){mileage=mile;}
    void setprice(int p){price=p;}
    void setdescription(string des){description=des;}
    void setsellername(string seller){sellername=seller;}
    void setcontact(int con){contact=con;}
    void setfuletype(string type){fueltype=type;}
    void setengine(string e){engine=e;}
    void setrating(double r){rating=r;}
    void setmakeyear(int year){makeyear=year;}
    void setavailableincity(string available){availableincity=available;}
    void setcolor(string col){color=col;}



    string getvehiclename(){return vehiclename;};
    string getcompany(){return company;}
    string getmodel(){return model;}
    double getmileage(){return mileage;}
    int getprice(){return price;}
    string getdescription(){return description;}
    string getsellername(){return sellername;}
    int getcontact(){return contact;}
    string getfueltype(){return fueltype;}
    string getengine(){return engine;}
    double getrating(){return rating;}
    int getmakeyear(){return makeyear;}
    string getavailableincity(){return availableincity;}
    string getcolor(){return color;}


    virtual void showvehicle()=0;


};



class ViewVehicles_UsedCars_Suzuki : public ViewVehicles
{
    private:
    string vehiclename="Car";
    string company="Suzuki";
    string model="Alto";
    double mileage=21.6548;
    int price=450000;
    /*char description[50];*/string description="Good";
    /*char sellername[15];*/string sellername="Shahid";
    string contact="+923219710";
    string fueltype="Petrol";
    string engine="K10B";
    double rating=7.5;
    int makeyear=2007;
    string availableincity="Sarghoda";
    string color="Grey";

    public:
 
    // ........ default constructor

    ViewVehicles_UsedCars_Suzuki() 
    {
        /*vehiclename="";
        company="";
        model="";
        mileage=0.0;
        price=0;
        description="";
        sellername="";
        contact="";
        fueltype="";
        engine="";
        rating=0.0;
        makeyear=0;
        availableincity="";
        color="";*/
    }

    ViewVehicles_UsedCars_Suzuki(string name,string comp,string m,double mile,int p,string c,string fuel,string e,double r,int year,string available,string col)
    :mileage(mile),price(p),contact(c),rating(r),makeyear(year) //.........parameter constructor
    {
        vehiclename=name;
        company=comp;
        model=m;
        fueltype=fuel;
        engine=e;
        availableincity=available;
        color=col;
    }


    //............. setter & getters ...................

    void setvehiclenme(string name){vehiclename=name;}
    void setcompany(string comp){company=comp;}
    void setmodel(string m){model=m;}
    void setmileage(double mile){mileage=mile;}
    void setprice(int p){price=p;}
    void setdescription(string des){description=des;}
    void setsellername(string seller){sellername=seller;}
    void setcontact(int con){contact=con;}
    void setfuletype(string type){fueltype=type;}
    void setengine(string e){engine=e;}
    void setrating(double r){rating=r;}
    void setmakeyear(int year){makeyear=year;}
    void setavailableincity(string available){availableincity=available;}
    void setcolor(string col){color=col;}



    string getvehiclename(){return vehiclename;};
    string getcompany(){return company;}
    string getmodel(){return model;}
    double getmileage(){return mileage;}
    int getprice(){return price;}
    string getdescription(){return description;}
    string getsellername(){return sellername;}
    string getcontact(){return contact;}
    string getfueltype(){return fueltype;}
    string getengine(){return engine;}
    double getrating(){return rating;}
    int getmakeyear(){return makeyear;}
    string getavailableincity(){return availableincity;}
    string getcolor(){return color;}

    
     void showvehicle() override
     {
        cout<<"Vehicle Name        : "<<vehiclename<<endl;
        cout<<"Company Name        : "<<company<<endl;
        cout<<"Model Name          : "<<model<<endl;
        cout<<"Mileage Of Car      : "<<mileage<<endl;
        cout<<"Price (in Ruppes)   : "<<price<<endl;
        cout<<"Description         : "<<description<<endl;
        cout<<"Seller Name         : "<<sellername<<endl;
        cout<<"Contact Number      : "<<contact<<endl;
        cout<<"Fuel Type           : "<<fueltype<<endl;
        cout<<"Engine Name         : "<<engine<<endl;
        cout<<"Rating(Out Of 10)   : "<<rating<<endl;
        cout<<"Make Of Year        : "<<makeyear<<endl;
        cout<<"Available In City   : "<<availableincity<<endl;
        cout<<"Color               : "<<color<<endl;
     }


};

class ViewVehicles_UsedCars_Toyota : public ViewVehicles
{
    private:
    string vehiclename="Car";
    string company="Toyota";
    string model="MR2";
    double mileage=15.6548;
    int price=355000;
    /*char description[50];*/string description="Normal";
    /*char sellername[15];*/string sellername="Naseem";
    string contact="+923226589";
    string fueltype="Diesel";
    string engine="L21C";
    double rating=6.5;
    int makeyear=2013;
    string availableincity="Lahore";
    string color="Red";

    public:
 
    // ........ default constructor

    ViewVehicles_UsedCars_Toyota() 
    {
        /*vehiclename="";
        company="";
        model="";
        mileage=0.0;
        price=0;
        description="";
        sellername="";
        contact="";
        fueltype="";
        engine="";
        rating=0.0;
        makeyear=0;
        availableincity="";
        color="";*/
    }

    ViewVehicles_UsedCars_Toyota(string name,string comp,string m,double mile,int p,string c,string fuel,string e,double r,int year,string available,string col)
    :mileage(mile),price(p),contact(c),rating(r),makeyear(year) //.........parameter constructor
    {
        vehiclename=name;
        company=comp;
        model=m;
        fueltype=fuel;
        engine=e;
        availableincity=available;
        color=col;
    }


    //............. setter & getters ...................

    void setvehiclenme(string name){vehiclename=name;}
    void setcompany(string comp){company=comp;}
    void setmodel(string m){model=m;}
    void setmileage(double mile){mileage=mile;}
    void setprice(int p){price=p;}
    void setdescription(string des){description=des;}
    void setsellername(string seller){sellername=seller;}
    void setcontact(int con){contact=con;}
    void setfuletype(string type){fueltype=type;}
    void setengine(string e){engine=e;}
    void setrating(double r){rating=r;}
    void setmakeyear(int year){makeyear=year;}
    void setavailableincity(string available){availableincity=available;}
    void setcolor(string col){color=col;}



    string getvehiclename(){return vehiclename;};
    string getcompany(){return company;}
    string getmodel(){return model;}
    double getmileage(){return mileage;}
    int getprice(){return price;}
    string getdescription(){return description;}
    string getsellername(){return sellername;}
    string getcontact(){return contact;}
    string getfueltype(){return fueltype;}
    string getengine(){return engine;}
    double getrating(){return rating;}
    int getmakeyear(){return makeyear;}
    string getavailableincity(){return availableincity;}
    string getcolor(){return color;}

    
     void showvehicle() override
     {
        cout<<"Vehicle Name        : "<<vehiclename<<endl;
        cout<<"Company Name        : "<<company<<endl;
        cout<<"Model Name          : "<<model<<endl;
        cout<<"Mileage Of Car      : "<<mileage<<endl;
        cout<<"Price (in Ruppes)   : "<<price<<endl;
        cout<<"Description         : "<<description<<endl;
        cout<<"Seller Name         : "<<sellername<<endl;
        cout<<"Contact Number      : "<<contact<<endl;
        cout<<"Fuel Type           : "<<fueltype<<endl;
        cout<<"Engine Name         : "<<engine<<endl;
        cout<<"Rating(Out Of 10)   : "<<rating<<endl;
        cout<<"Make Of Year        : "<<makeyear<<endl;
        cout<<"Available In City   : "<<availableincity<<endl;
        cout<<"Color               : "<<color<<endl;
     }


};

class ViewVehicles_UsedCars_Mercedes : public ViewVehicles
{
    private:
    string vehiclename="Jeep";
    string company="Mercedes";
    string model="Benz";
    double mileage=27.9878;
    int price=525000;
    /*char description[50];*/string description="Excellent";
    /*char sellername[15];*/string sellername="Haris";
    string contact="+923245217";
    string fueltype="Diesel";
    string engine="M32D";
    double rating=8.5;
    int makeyear=2016;
    string availableincity="Islamabad";
    string color="Black";

    public:
 
    // ........ default constructor

    ViewVehicles_UsedCars_Mercedes() 
    {
        /*vehiclename="";
        company="";
        model="";
        mileage=0.0;
        price=0;
        description="";
        sellername="";
        contact="";
        fueltype="";
        engine="";
        rating=0.0;
        makeyear=0;
        availableincity="";
        color="";*/
    }

    ViewVehicles_UsedCars_Mercedes(string name,string comp,string m,double mile,int p,string c,string fuel,string e,double r,int year,string available,string col)
    :mileage(mile),price(p),contact(c),rating(r),makeyear(year) //.........parameter constructor
    {
        vehiclename=name;
        company=comp;
        model=m;
        fueltype=fuel;
        engine=e;
        availableincity=available;
        color=col;
    }


    //............. setter & getters ...................

    void setvehiclenme(string name){vehiclename=name;}
    void setcompany(string comp){company=comp;}
    void setmodel(string m){model=m;}
    void setmileage(double mile){mileage=mile;}
    void setprice(int p){price=p;}
    void setdescription(string des){description=des;}
    void setsellername(string seller){sellername=seller;}
    void setcontact(int con){contact=con;}
    void setfuletype(string type){fueltype=type;}
    void setengine(string e){engine=e;}
    void setrating(double r){rating=r;}
    void setmakeyear(int year){makeyear=year;}
    void setavailableincity(string available){availableincity=available;}
    void setcolor(string col){color=col;}



    string getvehiclename(){return vehiclename;};
    string getcompany(){return company;}
    string getmodel(){return model;}
    double getmileage(){return mileage;}
    int getprice(){return price;}
    string getdescription(){return description;}
    string getsellername(){return sellername;}
    string getcontact(){return contact;}
    string getfueltype(){return fueltype;}
    string getengine(){return engine;}
    double getrating(){return rating;}
    int getmakeyear(){return makeyear;}
    string getavailableincity(){return availableincity;}
    string getcolor(){return color;}

    
     void showvehicle() override
     {
        cout<<"Vehicle Name        : "<<vehiclename<<endl;
        cout<<"Company Name        : "<<company<<endl;
        cout<<"Model Name          : "<<model<<endl;
        cout<<"Mileage Of Car      : "<<mileage<<endl;
        cout<<"Price (in Ruppes)   : "<<price<<endl;
        cout<<"Description         : "<<description<<endl;
        cout<<"Seller Name         : "<<sellername<<endl;
        cout<<"Contact Number      : "<<contact<<endl;
        cout<<"Fuel Type           : "<<fueltype<<endl;
        cout<<"Engine Name         : "<<engine<<endl;
        cout<<"Rating(Out Of 10)   : "<<rating<<endl;
        cout<<"Make Of Year        : "<<makeyear<<endl;
        cout<<"Available In City   : "<<availableincity<<endl;
        cout<<"Color               : "<<color<<endl;
     }


};



class ViewVehicles_NewCars_Ferrari : public ViewVehicles
{
    private:
    string vehiclename="Car";
    string company="Ferrari";
    string model="458";
    double mileage=31.6485;
    int price=750000;
    /*char description[50];*/string description="Excellent";
    /*char sellername[15];*/string sellername="Wasim";
    string contact="+923241632";
    string fueltype="Diesel";
    string engine="N22W";
    double rating=9;
    int makeyear=2018;
    string availableincity="Islamabad";
    string color="Red";

    public:
 
    // ........ default constructor

    ViewVehicles_NewCars_Ferrari() 
    {
        /*vehiclename="";
        company="";
        model="";
        mileage=0.0;
        price=0;
        description="";
        sellername="";
        contact="";
        fueltype="";
        engine="";
        rating=0.0;
        makeyear=0;
        availableincity="";
        color="";*/
    }

    ViewVehicles_NewCars_Ferrari(string name,string comp,string m,double mile,int p,string c,string fuel,string e,double r,int year,string available,string col)
    :mileage(mile),price(p),contact(c),rating(r),makeyear(year) //.........parameter constructor
    {
        vehiclename=name;
        company=comp;
        model=m;
        fueltype=fuel;
        engine=e;
        availableincity=available;
        color=col;
    }


    //............. setter & getters ...................

    void setvehiclenme(string name){vehiclename=name;}
    void setcompany(string comp){company=comp;}
    void setmodel(string m){model=m;}
    void setmileage(double mile){mileage=mile;}
    void setprice(int p){price=p;}
    void setdescription(string des){description=des;}
    void setsellername(string seller){sellername=seller;}
    void setcontact(int con){contact=con;}
    void setfuletype(string type){fueltype=type;}
    void setengine(string e){engine=e;}
    void setrating(double r){rating=r;}
    void setmakeyear(int year){makeyear=year;}
    void setavailableincity(string available){availableincity=available;}
    void setcolor(string col){color=col;}



    string getvehiclename(){return vehiclename;};
    string getcompany(){return company;}
    string getmodel(){return model;}
    double getmileage(){return mileage;}
    int getprice(){return price;}
    string getdescription(){return description;}
    string getsellername(){return sellername;}
    string getcontact(){return contact;}
    string getfueltype(){return fueltype;}
    string getengine(){return engine;}
    double getrating(){return rating;}
    int getmakeyear(){return makeyear;}
    string getavailableincity(){return availableincity;}
    string getcolor(){return color;}

    
     void showvehicle() override
     {
        cout<<"Vehicle Name        : "<<vehiclename<<endl;
        cout<<"Company Name        : "<<company<<endl;
        cout<<"Model Name          : "<<model<<endl;
        cout<<"Mileage Of Car      : "<<mileage<<endl;
        cout<<"Price (in Ruppes)   : "<<price<<endl;
        cout<<"Description         : "<<description<<endl;
        cout<<"Seller Name         : "<<sellername<<endl;
        cout<<"Contact Number      : "<<contact<<endl;
        cout<<"Fuel Type           : "<<fueltype<<endl;
        cout<<"Engine Name         : "<<engine<<endl;
        cout<<"Rating(Out Of 10)   : "<<rating<<endl;
        cout<<"Make Of Year        : "<<makeyear<<endl;
        cout<<"Available In City   : "<<availableincity<<endl;
        cout<<"Color               : "<<color<<endl;
     }


};

class ViewVehicles_NewCars_Mclaren : public ViewVehicles

{
    private:
    string vehiclename="Car";
    string company="Mclaren";
    string model="TrackHawk";
    double mileage=35.6548;
    int price=850000;
    /*char description[50];*/string description="Good";
    /*char sellername[15];*/string sellername="Waqar";
    string contact="+923252331";
    string fueltype="Petrol";
    string engine="L09U";
    double rating=8.5;
    int makeyear=2017;
    string availableincity="Karachi";
    string color="White";

    public:
 
    // ........ default constructor

    ViewVehicles_NewCars_Mclaren() 
    {
        /*vehiclename="";
        company="";
        model="";
        mileage=0.0;
        price=0;
        description="";
        sellername="";
        contact="";
        fueltype="";
        engine="";
        rating=0.0;
        makeyear=0;
        availableincity="";
        color="";*/
    }

    ViewVehicles_NewCars_Mclaren(string name,string comp,string m,double mile,int p,string c,string fuel,string e,double r,int year,string available,string col)
    :mileage(mile),price(p),contact(c),rating(r),makeyear(year) //.........parameter constructor
    {
        vehiclename=name;
        company=comp;
        model=m;
        fueltype=fuel;
        engine=e;
        availableincity=available;
        color=col;
    }


    //............. setter & getters ...................

    void setvehiclenme(string name){vehiclename=name;}
    void setcompany(string comp){company=comp;}
    void setmodel(string m){model=m;}
    void setmileage(double mile){mileage=mile;}
    void setprice(int p){price=p;}
    void setdescription(string des){description=des;}
    void setsellername(string seller){sellername=seller;}
    void setcontact(int con){contact=con;}
    void setfuletype(string type){fueltype=type;}
    void setengine(string e){engine=e;}
    void setrating(double r){rating=r;}
    void setmakeyear(int year){makeyear=year;}
    void setavailableincity(string available){availableincity=available;}
    void setcolor(string col){color=col;}



    string getvehiclename(){return vehiclename;};
    string getcompany(){return company;}
    string getmodel(){return model;}
    double getmileage(){return mileage;}
    int getprice(){return price;}
    string getdescription(){return description;}
    string getsellername(){return sellername;}
    string getcontact(){return contact;}
    string getfueltype(){return fueltype;}
    string getengine(){return engine;}
    double getrating(){return rating;}
    int getmakeyear(){return makeyear;}
    string getavailableincity(){return availableincity;}
    string getcolor(){return color;}

    
     void showvehicle() override
     {
        cout<<"Vehicle Name        : "<<vehiclename<<endl;
        cout<<"Company Name        : "<<company<<endl;
        cout<<"Model Name          : "<<model<<endl;
        cout<<"Mileage Of Car      : "<<mileage<<endl;
        cout<<"Price (in Ruppes)   : "<<price<<endl;
        cout<<"Description         : "<<description<<endl;
        cout<<"Seller Name         : "<<sellername<<endl;
        cout<<"Contact Number      : "<<contact<<endl;
        cout<<"Fuel Type           : "<<fueltype<<endl;
        cout<<"Engine Name         : "<<engine<<endl;
        cout<<"Rating(Out Of 10)   : "<<rating<<endl;
        cout<<"Make Of Year        : "<<makeyear<<endl;
        cout<<"Available In City   : "<<availableincity<<endl;
        cout<<"Color               : "<<color<<endl;
     }

};



class ViewVehicles_Bikes_Honda : public ViewVehicles
{
   
    private:
    string vehiclename="Bike";
    string company="Honda";
    string model="125";
    double mileage=85.6548;
    int price=250000;
    /*char description[50];*/string description="Good";
    /*char sellername[15];*/string sellername="Ajmal";
    string contact="+923241788";
    string fueltype="Petrol";
    string engine="M87K";
    double rating=7.5;
    int makeyear=2020;
    string availableincity="Gujrawala";
    string color="Red";

    public:
 
    // ........ default constructor

    ViewVehicles_Bikes_Honda() 
    {
        /*vehiclename="";
        company="";
        model="";
        mileage=0.0;
        price=0;
        description="";
        sellername="";
        contact="";
        fueltype="";
        engine="";
        rating=0.0;
        makeyear=0;
        availableincity="";
        color="";*/
    }

    ViewVehicles_Bikes_Honda(string name,string comp,string m,double mile,int p,string c,string fuel,string e,double r,int year,string available,string col)
    :mileage(mile),price(p),contact(c),rating(r),makeyear(year) //.........parameter constructor
    {
        vehiclename=name;
        company=comp;
        model=m;
        fueltype=fuel;
        engine=e;
        availableincity=available;
        color=col;
    }


    //............. setter & getters ...................

    void setvehiclenme(string name){vehiclename=name;}
    void setcompany(string comp){company=comp;}
    void setmodel(string m){model=m;}
    void setmileage(double mile){mileage=mile;}
    void setprice(int p){price=p;}
    void setdescription(string des){description=des;}
    void setsellername(string seller){sellername=seller;}
    void setcontact(int con){contact=con;}
    void setfuletype(string type){fueltype=type;}
    void setengine(string e){engine=e;}
    void setrating(double r){rating=r;}
    void setmakeyear(int year){makeyear=year;}
    void setavailableincity(string available){availableincity=available;}
    void setcolor(string col){color=col;}



    string getvehiclename(){return vehiclename;};
    string getcompany(){return company;}
    string getmodel(){return model;}
    double getmileage(){return mileage;}
    int getprice(){return price;}
    string getdescription(){return description;}
    string getsellername(){return sellername;}
    string getcontact(){return contact;}
    string getfueltype(){return fueltype;}
    string getengine(){return engine;}
    double getrating(){return rating;}
    int getmakeyear(){return makeyear;}
    string getavailableincity(){return availableincity;}
    string getcolor(){return color;}

    
     void showvehicle() override
     {
        cout<<"Vehicle Name        : "<<vehiclename<<endl;
        cout<<"Company Name        : "<<company<<endl;
        cout<<"Model Name          : "<<model<<endl;
        cout<<"Mileage Of Car      : "<<mileage<<endl;
        cout<<"Price (in Ruppes)   : "<<price<<endl;
        cout<<"Description         : "<<description<<endl;
        cout<<"Seller Name         : "<<sellername<<endl;
        cout<<"Contact Number      : "<<contact<<endl;
        cout<<"Fuel Type           : "<<fueltype<<endl;
        cout<<"Engine Name         : "<<engine<<endl;
        cout<<"Rating(Out Of 10)   : "<<rating<<endl;
        cout<<"Make Of Year        : "<<makeyear<<endl;
        cout<<"Available In City   : "<<availableincity<<endl;
        cout<<"Color               : "<<color<<endl;
     }

};

class ViewVehicles_Bikes_Yamaha : public ViewVehicles
{
   
    private:
    string vehiclename="Bike";
    string company="Yamaa";
    string model="250";
    double mileage=96.6987;
    int price=440000;
    /*char description[50];*/string description="Excellent";
    /*char sellername[15];*/string sellername="Yasir";
    string contact="+923241233";
    string fueltype="Petrol";
    string engine="H77T";
    double rating=8;
    int makeyear=2022;
    string availableincity="Islamabad";
    string color="Black";

    public:
 
    // ........ default constructor

    ViewVehicles_Bikes_Yamaha() 
    {
        /*vehiclename="";
        company="";
        model="";
        mileage=0.0;
        price=0;
        description="";
        sellername="";
        contact="";
        fueltype="";
        engine="";
        rating=0.0;
        makeyear=0;
        availableincity="";
        color="";*/
    }

    ViewVehicles_Bikes_Yamaha(string name,string comp,string m,double mile,int p,string c,string fuel,string e,double r,int year,string available,string col)
    :mileage(mile),price(p),contact(c),rating(r),makeyear(year) //.........parameter constructor
    {
        vehiclename=name;
        company=comp;
        model=m;
        fueltype=fuel;
        engine=e;
        availableincity=available;
        color=col;
    }


    //............. setter & getters ...................

    void setvehiclenme(string name){vehiclename=name;}
    void setcompany(string comp){company=comp;}
    void setmodel(string m){model=m;}
    void setmileage(double mile){mileage=mile;}
    void setprice(int p){price=p;}
    void setdescription(string des){description=des;}
    void setsellername(string seller){sellername=seller;}
    void setcontact(int con){contact=con;}
    void setfuletype(string type){fueltype=type;}
    void setengine(string e){engine=e;}
    void setrating(double r){rating=r;}
    void setmakeyear(int year){makeyear=year;}
    void setavailableincity(string available){availableincity=available;}
    void setcolor(string col){color=col;}



    string getvehiclename(){return vehiclename;};
    string getcompany(){return company;}
    string getmodel(){return model;}
    double getmileage(){return mileage;}
    int getprice(){return price;}
    string getdescription(){return description;}
    string getsellername(){return sellername;}
    string getcontact(){return contact;}
    string getfueltype(){return fueltype;}
    string getengine(){return engine;}
    double getrating(){return rating;}
    int getmakeyear(){return makeyear;}
    string getavailableincity(){return availableincity;}
    string getcolor(){return color;}

    
     void showvehicle() override
     {
        cout<<"Vehicle Name        : "<<vehiclename<<endl;
        cout<<"Company Name        : "<<company<<endl;
        cout<<"Model Name          : "<<model<<endl;
        cout<<"Mileage Of Car      : "<<mileage<<endl;
        cout<<"Price (in Ruppes)   : "<<price<<endl;
        cout<<"Description         : "<<description<<endl;
        cout<<"Seller Name         : "<<sellername<<endl;
        cout<<"Contact Number      : "<<contact<<endl;
        cout<<"Fuel Type           : "<<fueltype<<endl;
        cout<<"Engine Name         : "<<engine<<endl;
        cout<<"Rating(Out Of 10)   : "<<rating<<endl;
        cout<<"Make Of Year        : "<<makeyear<<endl;
        cout<<"Available In City   : "<<availableincity<<endl;
        cout<<"Color               : "<<color<<endl;
     }

};



int main()
{
    string username, password;
    int ch;



    cout<<"\t\tWELCOME TO FASTWHEELS WEBSITE !!!"<<endl<<endl;
    cout<<"\t\tLOGIN INFORMATION"<<endl<<endl;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    ch=getch();
    
   //............ implementation of hiding password when loggin in ...................

    while(ch!=13)
    {
        password.push_back(ch);
        cout<<"*";
        ch=getch();
    }


    cout<<"\n\nSo we have 3 Options For You ! "<<endl<<endl;
    cout<<"[1].Buyer Menu "<<endl;
    cout<<"[2].Seller Menu "<<endl;
    cout<<"[3].Admin Menu\n\n "<<endl;
    
    // ............... displaying buyers menu ......................
    
    cout<<"BUYER MENU: "<<endl<<endl;
    cout<<"[1].VIEW VEHICLES"<<endl;
    cout<<"[2].VIEW AUCTION"<<endl;
    cout<<"[3].REQUEST INSPECTION REPORT"<<endl;
    cout<<"[4].CONTACT SELLER"<<endl;
    cout<<"[5].VIEW NOTIFICATION"<<endl;
    cout<<"[6].ADD COMMENT ON CAR"<<endl;
    cout<<"[7].LOGOUT\n\n"<<endl;




    //....... Register Information (Buyer Menu)
    cout<<"First Of All, Register Some Basic Information !!!\n\n"<<endl;
    Register information;
    cin>>information; //.......operator overloading



    fstream Registerinformationfile; //..........write mode 
    Registerinformationfile.open("Register_information.txt",ios::out);
    {
        Registerinformationfile<<information;

    }

    cout<<"File of Information is created successfully !!!\n\n"<<endl;


    cout<<"\t\tVIEW VEHICLE SECTION !!!\n\n\n"<<endl;


    int option;

    cout<<"[1]. Used Cars "<<endl;
    cout<<"[2]. New Cars "<<endl;
    cout<<"[3]. New Bikes "<<endl;
    cout<<"Select The Option Wisely : ";
    cin>>option;


    switch (option)
    {
    case 1: // ..... used cars
        
        ViewVehicles *used[3]; // Polymorphism
        used[0]= new ViewVehicles_UsedCars_Suzuki();
        used[1]= new ViewVehicles_UsedCars_Toyota(); 
        used[2]= new ViewVehicles_UsedCars_Mercedes();

        for(int i=0;i<3;i++)
        {   
            cout<<"\n\nUsed Cars # "<<i+1<<endl<<endl;
            used[i]->showvehicle();
        }
    
    
        break;
    
    case 2: // ..... new cars

    ViewVehicles *New[2];
    New[0]= new ViewVehicles_NewCars_Ferrari();
    New[1]= new ViewVehicles_NewCars_Mclaren();
    
    for(int i=0;i<2;i++)
        {   
            cout<<"\n\nNew Car # "<<i+1<<endl<<endl;
            New[i]->showvehicle();
        }
    

    break;


    case 3: //........ bikes

    ViewVehicles *bikes[2];
    bikes[0]=new ViewVehicles_Bikes_Honda();
    bikes[1]=new ViewVehicles_Bikes_Yamaha();


    for(int i=0;i<2;i++)
        {   
            cout<<"\n\nBike # "<<i+1<<endl<<endl;
            bikes[i]->showvehicle();
        }
    


    default:
        break;
    }


    /*Tasks of 23rd November 2023
    1. convert string into character array in ViewVehicle classes for 
    clearification
    2. using operator overlading << to store these Vehicles Classes into files 
    3. Solve Contact Seller : if i select Honda from bikes selection muje option aani chahye
    ke app ko iska contact chahye ya nai( using if condition )
    4. Request inspectio reprt ki class banani hai 
    5. View auciton class
    6. view notification

    
    
    
    
    
    */




   /*
   
   
   output rough work

   in seller

   1. Register name 
   2. 
   
   
   
   
   
   */

    
}