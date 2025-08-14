#include "Admin.h"

Admin::Admin() {
    // constructor implementation
}

Admin::Admin(char n[20], char add[55], char C[20], char CITY[15],
             char features[100], char insspection[20],
             char customer[20], int capacity, double mile, std::string transmission,
             std::string chas, std::string engine, std::string fuel,
             std::string registerC, std::string currentC, double r,
             int registration, std::string car_n, std::string car_m, int makeyear)
    : enginecapacity(capacity), mileage(mile),
      transmissiontype(transmission), chassis(chas), enginenumber(engine),
      fueltype(fuel), registercity(registerC),
      currentcity(currentC), rating(r), registrationnumber(registration),
      car_name(car_n), car_model(car_m), car_year(makeyear) {

    // constructor implementation
    // (Note: You don't need to initialize the arrays like customername, inspectiondate, carfeatures in the member initializer list)
}

void Admin::manageinspection() {
    // implementation
}

std::istream &operator>>(std::istream &ask, Admin &other) {
    // implementation
    return ask;
}

std::ostream &operator<<(std::ostream &print, Admin &other) {
    // implementation
    return print;
}

void Admin::notification() {
    // implementation
}
