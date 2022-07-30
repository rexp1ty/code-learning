#include "swap.h"
#include "test.h"
#include <iostream>

auto main() -> int {
  int num = 1;
  int sum = num + 1;
  swap(num, sum);
  std::cout << num << sum << std::endl;
  test();
  return 0;
}