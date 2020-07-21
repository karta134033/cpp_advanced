#include "sally.h"
#include <iostream>

using namespace std;

int main() { // 編譯時需要兩個檔案都編譯 g++ main.cpp sally.cpp
  Sally sally_obj;
  cout << "After the constructor" << endl;
}