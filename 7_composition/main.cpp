#include "owner.h"
#include "car.h"
#include <iostream>

using namespace std;

int main() {
    Car car(10, 200);
    Owner owner("neil", car);
    owner.print_info();
}
