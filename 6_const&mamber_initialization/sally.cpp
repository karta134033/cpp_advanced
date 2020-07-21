#include "sally.h"
#include <iostream>

using namespace std;

Sally::Sally(int a, int b) : regular_var(a), const_var(b) {  // : 右側為將值a,b分別assign到regular_var, const_var
  cout << "constructor" << endl;
  cout << "regular_var: " << regular_var << endl;
  cout << "const_var: " << const_var << endl;
}

Sally::~Sally() {
  cout << "deconstructor" << endl;
}

void Sally::print_regular_var() {
  cout << "regular_var: " << regular_var << endl;
}

void Sally::print_const_var() const{
  cout << "const_var: " << const_var << endl;
}