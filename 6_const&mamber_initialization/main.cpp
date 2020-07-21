#include "sally.h"
#include <iostream>

using namespace std;

int main() {
  const int x = 3;  // 不可改變
  const Sally sally_obj(123, 321);
  sally_obj.print_const_var();   // 只能使用const的function

  Sally sally_obj2(456, 654);
  sally_obj2.print_const_var();  // 可以使用const和非const的function
  sally_obj2.print_regular_var();
  sally_obj2.regular_var = 123;
  sally_obj2.print_regular_var();
}