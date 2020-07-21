#include "sally.h"
#include <iostream>

using namespace std;

int main() { // 編譯時需要兩個檔案都編譯 g++ main.cpp sally.cpp
  Sally sally_obj;
  Sally *ptr_sally = &sally_obj; // 指向Sally的資料型態
  sally_obj.print_OK();          // 物件對應 .
  ptr_sally->print_OK();         // pointer對應 ->
}