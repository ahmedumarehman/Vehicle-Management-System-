#include<iostream>
#include<string>
#include<conio.h>


using namespace std;

int main()
{
    string username, password;
    int ch;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    ch=getch();
    
    while(ch!=13)
    {
        password.push_back(ch);
        cout<<"*";
        ch=getch();
    }
    
    
    cout<<"p : "<<password<<endl;
    

    return 0;
}
