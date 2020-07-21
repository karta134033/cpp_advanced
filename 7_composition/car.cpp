#include "car.h"
#include <iostream>

using namespace std;

Car::Car(int y, int hp) {
  year = y;
  horse_power = hp;
}

void Car::print_car() {
  cout << "year: " << year << "  horse_power: " << horse_power << endl;
}