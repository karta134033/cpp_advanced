#include <iostream>

using namespace std;

int main() {
  int bucky[5];
  int* ptr1 = &bucky[1];  // ptr1 is at 0x61fef4
  int* ptr2 = &bucky[2];  // ptr2 is at 0x61fef8
  int* ptr3 = &bucky[3];  // ptr3 is at 0x61fefc

  cout << "ptr1 is at " << ptr1 << endl;
  cout << "ptr2 is at " << ptr2 << endl;
  cout << "ptr3 is at " << ptr3 << endl;

  ptr1++; // 指標加一不代表記憶體位置加1，而是指到下一個記憶體位置 (ptr2的位置)

  cout << "ptr1 is at " << ptr1 << endl;  // ptr1 is at 0x61fef8
}