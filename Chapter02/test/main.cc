#include <iostream>
#include "./func.h"

int main() {
  int x = 16;
  std::cout << s1::s2::return_double(&x) << std::endl;
  std::cout << x << std::endl;
}
