#ifndef OWNER_H
#define OWNER_H

#include <string>
#include "car.h"

using namespace std;

class Owner { 
  public:
    Owner(string name, Car car);
    void print_info();
  private:
    string name;
    Car car;
};


#endif