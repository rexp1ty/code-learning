#include <iostream>
#include <swap.h>

void swap(int &i, int &j) {
  int temp = i;
  i = j;
  j = temp;
  std::cout << "good" << std::endl;
}
