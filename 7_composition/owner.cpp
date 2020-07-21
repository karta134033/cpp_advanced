#include "owner.h"
#include "car.h"  // 使用別的class都需要include header
#include <iostream>

using namespace std;

Owner::Owner(string name, Car car) : name(name), car(car){  // 傳入class object需要用member initialization

}

void Owner::print_info() {
  cout << "name: " << name << endl;
  car.print_car();
}