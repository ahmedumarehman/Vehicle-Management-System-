#include<iostream>
using namespace std;
void menudisplay()
{


cout<<" _________________________________\n";
cout<<"|_____________BUYER_______________|     \n";
cout<<"| 		                  |\n";
cout<<"|  [1]. View Vehicles             |\n";
cout<<"|  [2]. View Auction              |\n";
cout<<"|  [3]. Request Inspection Report |\n";
cout<<"|  [4]. Contact Seller 		  |\n";
cout<<"|  [5]. View Notification         |\n";
cout<<"|  [6]. Add Comment               |\n";
cout<<"|  [7]. Logout                    |\n";
cout<<"-----------------------------------\n";
cout<<"\n\n\n";


cout<<" _________________________________\n";
cout<<"|_____________BUYER_______________|     \n";
cout<<"| 		                  |\n";
cout<<"|  [1]. View Vehicles             |\n";
cout<<"|  [2]. Add Vehicle               |\n";
cout<<"|  [3]. Remove Vehicle            |\n";
cout<<"|  [4]. Register In Auction       |\n";
cout<<"|  [5]. View Notification         |\n";
cout<<"|  [6]. Logout                    |\n";
cout<<"-----------------------------------\n";
cout<<"\n\n\n";








cout<<" _________________________________\n";
cout<<"|_____________BUYER_______________|     \n";
cout<<"| 		                  |\n";
cout<<"|  [1]. Add Vehicle               |\n";
cout<<"|  [2]. Remove Vehicle            |\n";
cout<<"|  [3]. Manage Inspection Report  |\n";
cout<<"|  [4]. Add Notification          |\n";
cout<<"|  [5]. Rate A Vehicle            |\n";
cout<<"|  [6]. Logout                    |\n";
cout<<"-----------------------------------\n";
cout<<"\n";



}



/*void menudisplay()
{


cout<<" _________________________________\n";
cout<<"|_____________BUYER_______________|     \n";
cout<<"| 		                  |\n";
cout<<"|  [1]. View Vehicles             |\n";
cout<<"|  [2]. View Auction              |\n";
cout<<"|  [3]. Request Inspection Report |\n";
cout<<"|  [4]. Contact Seller 		  |\n";
cout<<"|  [5]. View Notification         |\n";
cout<<"|  [6]. Add Comment               |\n";
cout<<"|  [7]. Logout                    |\n";
cout<<"-----------------------------------\n";
cout<<"\n\n\n";


cout<<" _________________________________\n";
cout<<"|_____________SELLER______________|\n";
cout<<"| 		                  |\n";
cout<<"|  [1]. View Vehicles             |\n";
cout<<"|  [2]. Add Vehicle               |\n";
cout<<"|  [3]. Remove Vehicle            |\n";
cout<<"|  [4]. Register In Auction       |\n";
cout<<"|  [5]. View Notification         |\n";
cout<<"|  [6]. Logout                    |\n";
cout<<"-----------------------------------\n";
cout<<"\n\n\n";








cout<<" _________________________________\n";
cout<<"|_____________ADMIN_______________|     \n";
cout<<"| 		                  |\n";
cout<<"|  [1]. Add Vehicle               |\n";
cout<<"|  [2]. Remove Vehicle            |\n";
cout<<"|  [3]. Manage Inspection Report  |\n";
cout<<"|  [4]. Add Notification          |\n";
cout<<"|  [5]. Rate A Vehicle            |\n";
cout<<"|  [6]. Logout                    |\n";
cout<<"-----------------------------------\n";
cout<<"\n";



}*/

void displaywholemenu()
{
    cout<<" _________________________________   	_________________________________      _________________________________\n";
    cout<<"|_____________BUYER_______________|    |_____________SELLER______________|    |_____________ADMIN_______________|      \n";   
    cout<<"| 		                  |    | 		                 |    |                                 |  				   \n";
    cout<<"|  [1]. View Vehicles             |    |  [1]. View Vehicles             |    |  [1]. Add Vehicle               |						\n";
    cout<<"|  [2]. View Auction              |    |  [2]. Add Vehicle               |    |  [2]. Remove Vehicle            |					    \n";
    cout<<"|  [3]. Request Inspection Report |    |  [3]. Remove Vehicle            |    |  [3]. Manage Inspection Report  |				\n";
    cout<<"|  [4]. Contact Seller 		  |    |  [4]. Register In Auction       |    |  [4]. Add Notification          |							\n";
    cout<<"|  [5]. View Notification         |    |  [5]. View Notification         |    |  [5]. Rate A Vehicle            |								\n";
    cout<<"|  [6]. Add Comment               |    |  [6]. Logout                    |    |  [6]. Logout                    |\n";
    cout<<"|  [7]. Logout                    |    |                                 |    |                                 |\n";
    cout<<"-----------------------------------     ---------------------------------      ---------------------------------									\n";
    //cout<<"\n";
    //cout<<"\n";
    //cout<<"\n";
}


int main()
{
    displaywholemenu();
}