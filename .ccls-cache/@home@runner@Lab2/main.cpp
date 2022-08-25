#include <iostream>  // preprocessor directive
using namespace std; // which namespace to use, which libraries to use

int main() {                                             // main body
  cout << "******************************************\n" // '\n' is a new line
       << "             Jason Skrzypiec              \n"
       << "                  CSE 100                 \n"
       << "        Welcome to C++ Programming        \n"
       << "******************************************\n\n\n\n\n"
       << "1.  The sum of 2+3                     = " << 2 + 3
       << endl // can also use 'endl;' for new line
       << "2.  The multiplication of 5*6          = " << 5 * 6 << endl
       << "3.  When I divide 15/7, the quotient   = " << 15 / 7
       << endl // using '/' outputs the quotient
       << "4.  The remainder of 15 % 4            = " << 15 % 4
       << endl // using '%' outputs the remainder
       << "\n\n\n     This is the end of my first Program\n"
       << "                Thank you!\n";
  return 0;
}