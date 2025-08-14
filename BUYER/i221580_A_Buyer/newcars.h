#ifndef NEWCARS_H
#define NEWCARS_H

#include "Vehicle.h"

class NewCars : public Vehicle {
private:
    // Add private members as per your implementation

public:
    NewCars(/* parameters as per your implementation */);
    void viewvehicle() const override;
    void viewcontact() const override;
    void inspectionreport() const override;
    void notification() const override;

    friend std::ostream& operator<<(std::ostream& os, const NewCars& newCar);
};

#endif // NEWCARS_H
