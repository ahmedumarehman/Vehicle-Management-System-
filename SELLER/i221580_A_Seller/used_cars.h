// used_cars.h
#ifndef USED_CARS_H
#define USED_CARS_H

#include <iostream>
#include <fstream>

class used_cars {
private:
    // Define private members here

public:
    // Declare constructor, member functions, and any other necessary members
    used_cars(/* parameters */);
    void viewvehicle();
    void viewcontact();
    void viewnotification();

    friend std::ostream& operator<<(std::ostream& os, const used_cars& car);
};

#endif // USED_CARS_H
