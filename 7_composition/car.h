#ifndef CAR_H
#define CAR_H

class Car { 
  public:
    Car(int year, int horse_power);
    void print_car();
  private:
    int year;
    int horse_power;
};


#endif