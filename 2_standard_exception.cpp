# include <iostream>

using namespace std;

class GoWrong {
  public:
    GoWrong() {
      size_t n;
      cout << "Enter the amount of memory to allocate\n";
      cin >> n;
      char* p_memory = new char[n];
      delete[] p_memory;       
    }
};

int main() {
  try {
    GoWrong wrong;
  } catch (bad_alloc& e) {
    cout << e.what() << endl;
  }
  cout << "still running" << endl;
  
  return 0;
}