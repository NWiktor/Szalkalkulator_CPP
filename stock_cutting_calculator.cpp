// Stock cutting calculator in C++

// Standard headers
#include <iostream>
#include <string.h>
#include <math.h>
// #include <list>

// Own headers
#include "optimizer.hpp"
using namespace std;

int main() {

  // calculate( {100, 200, 300} );
  cout << "Stock length set to: " << max_stock_length << '\n';
  cout << "Cutting length set to: " << cutting_width << '\n';

  add_stock(2, 5999);
  add_stock(2, 5998);
  add_stock(2, 5997);
  print_stock();
  clear_stock();

  set_max_stock_length(3000);
  set_cutting_width(3);
  add_stock(2, 2999);
  add_stock(2, 2998);
  add_stock(2, 2997);
  print_stock();


  cout << "Program exited normally!\n";
  return 0;
}
