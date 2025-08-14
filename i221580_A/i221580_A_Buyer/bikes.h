#ifndef BIKES_H
#define BIKES_H

#include "Vehicle.h"

class Bikes : public Vehicle {
private:
    // Add private members as per your implementation

public:
    Bikes(/* parameters as per your implementation */);
    void viewvehicle() const override;
    void viewcontact() const override;
    void inspectionreport() const override;
    void notification() const override;

    friend std::ostream& operator<<(std::ostream& os, const Bikes& bike);
};

#endif // BIKES_H
