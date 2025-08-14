#ifndef USEDCARS_H
#define USEDCARS_H

#include "Vehicle.h"

class UsedCars : public Vehicle {
private:
    // Add private members as per your implementation

public:
    UsedCars(/* parameters as per your implementation */);
    void viewvehicle() const override;
    void viewcontact() const override;
    void inspectionreport() const override;
    void notification() const override;

    friend std::ostream& operator<<(std::ostream& os, const UsedCars& usedCar);
};

#endif // USEDCARS_H
