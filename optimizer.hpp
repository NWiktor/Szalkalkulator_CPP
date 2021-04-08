#ifndef OPTIMIZER
#define OPTIMIZER

// Standard headers
#include <list>
using namespace std;

// Global variable declarations with extern func
extern int max_stock_length;
extern int cutting_width;
extern list<int> stock;

// Function declarations
void set_max_stock_length(int length);
void set_cutting_width(int cw);
void clear_stock();
void print_stock();
void add_stock(int number, int length);


#endif
