// bikes.h
#ifndef BIKES_H
#define BIKES_H

#include <iostream>
#include <fstream>

class bikes {
private:
    // Define private members here

public:
    // Declare constructor, member functions, and any other necessary members
    bikes(/* parameters */);
    void viewvehicle();
    void viewcontact();
    void viewnotification();

    friend std::ostream& operator<<(std::ostream& os, const bikes& bike);
};

#endif // BIKES_H
