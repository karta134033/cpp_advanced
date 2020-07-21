# include <iostream>

using namespace std;

void go_wrong() {
  bool error1 = false;
  bool error2 = false;
  bool error3 = true;
  if (error1) throw 8;  // throw 會直接跳出function，所以，如果error1 == true，則if (error2)不會走到
  if (error2) throw "error2 go wrong";
  if (error3) throw string("error3 go wrong");
}

int main() {
  try {
    go_wrong();
  } catch (int e) {
    cout << "Error code: " << e << endl;  // Error code: 8
  } catch (char const* e) {
    cout << "Error code: " << e << endl;
  } catch (string &e) {
    cout << "Error code: " << e << endl;
  }
  cout << "still running" << endl;

  return 0;
}