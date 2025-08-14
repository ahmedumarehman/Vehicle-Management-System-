// new_cars.h
#ifndef NEW_CARS_H
#define NEW_CARS_H

#include <iostream>
#include <fstream>

class new_cars {
private:
    // Define private members here

public:
    // Declare constructor, member functions, and any other necessary members
    new_cars(/* parameters */);
    void viewvehicle();
    void viewcontact();
    void viewnotification();

    friend std::ostream& operator<<(std::ostream& os, const new_cars& car);
};

#endif // NEW_CARS_H
