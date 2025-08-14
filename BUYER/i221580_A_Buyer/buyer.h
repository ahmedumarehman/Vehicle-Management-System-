#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <fstream>

class Vehicle {
public:
    virtual void viewvehicle() const = 0;
    virtual void viewcontact() const = 0;
    virtual void inspectionreport() const = 0;
    virtual void notification() const = 0;

    friend std::ostream& operator<<(std::ostream& os, const Vehicle& vehicle);
    virtual ~Vehicle() {}
};

#endif // VEHICLE_H
