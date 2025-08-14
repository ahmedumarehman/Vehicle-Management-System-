#ifndef ADMIN_H
#define ADMIN_H

#include <iostream>
#include <fstream>
#include <string>

class Admin {
private:
    // ... (unchanged)

public:
    Admin();

    Admin(char n[20], char add[55], char C[20], char CITY[15],
          char features[100], char insspection[20],
          char customer[20], int capacity, double mile, std::string transmission,
          std::string chas, std::string engine, std::string fuel,
          std::string registerC, std::string currentC, double r,
          int registration, std::string car_n, std::string car_m, int makeyear);

    void manageinspection();

    friend std::istream &operator>>(std::istream &ask, Admin &other);

    friend std::ostream &operator<<(std::ostream &print, Admin &other);

    void notification();
};

#endif
