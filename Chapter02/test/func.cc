#include "./func.h"

namespace s1 {
namespace s2 {
int return_double(int* val) {
  *val *= 2;
  return *val;
}
}  // namespace s2
}  // namespace s1
