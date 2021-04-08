// Optimizer C++

// Standard headers
#include <iostream>
#include <algorithm>
#include <list>

// Own headers
#include "optimizer.hpp"
using namespace std;

// Global variables
int max_stock_length = 6000;
int cutting_width = 2;
list<int> stock = {};


// Functions
void set_max_stock_length(int length) {
  max_stock_length = length;
  cout << "Stock length set to: " << max_stock_length << '\n';
}

void set_cutting_width(int cw) {
  cutting_width = cw;
  cout << "Cutting length set to: " << cutting_width << '\n';
}

void print_stock() {
  cout << "\nItems in stock list:\n";
  for (int x : stock) {
    // business code
		cout << x << '\n';
  }
}

// Checks if length is within limits, then adds it to stock list
void add_stock(int number, int length) {

  if ( (length + cutting_width) <= max_stock_length) {
    cout << "Item added: " << length << " x" << number << '\n';
    for (int i=0; i<number; i++) {
      stock.push_back(length);
    }
  }
  else {
    cout << "Given length is over limit: " << max_stock_length << "!\n";
  }
}

void clear_stock(){
  stock.clear();
  cout << "List is cleared!\n";
  print_stock();
}
