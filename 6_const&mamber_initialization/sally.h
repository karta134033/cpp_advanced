#ifndef _SALLY_H_
#define _SALLY_H_

class Sally {
  public:
    Sally(int a, int b);    // constructor
    ~Sally();  // deconstructor
    void print_regular_var();
    void print_const_var() const;

    int regular_var;
  protected:
    const int const_var;
  private:
};

#endif