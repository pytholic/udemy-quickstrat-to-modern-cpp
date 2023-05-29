#include <array>
#include <cstdint>
#include <iostream>

// C-style Arrays

// Reference
// void print_array_values1(const std::uint32_t (&arr)[5]) {
//   for (const auto val : arr) {
//     std::cout << val << std::endl;
//   }
// }

// int main() {
//   constexpr static std::uint32_t len = {5};
//   std::uint32_t arr[len] = {1, 2, 3, 4, 5};
//   print_array_values1(arr);
//   return 0;
// }

// Pointer and size
// void print_array_values1(const std::uint32_t* arr, std::size_t size) {
//   for (std::size_t i = 0; i < size; ++i) {
//     std::cout << arr[i] << std::endl;
//   }
// }

// int main() {
//   constexpr static std::uint32_t len = 5;
//   std::uint32_t arr[len] = {1, 2, 3, 4, 5};
//   print_array_values1(arr, len);
// }

// Modern C++ style
// void print_array_values1(const std::array<std::uint32_t, 5> arr) {
//   for (std::size_t i = 0; i < arr.size(); ++i) {
//     std::cout << arr[i] << std::endl;
//   }
// }

// int main() {
//   constexpr static std::uint32_t len = 5;

//   std::array<std::uint32_t, len> arr = {1, 2, 3, 4, 5};
//   print_array_values1(arr);
// }

// Avoid size hardcoding
template <std::size_t N>
void print_array_values1(const std::array<std::uint32_t, N> arr) {
  for (std::size_t i = 0; i < arr.size(); ++i) {
    std::cout << arr[i] << std::endl;
  }
}

int main() {
  constexpr static std::uint32_t len = 5;

  // std::array<uint32_t, len> arr = {1, 2, 3, 4, 5};
  auto arr = std::array<std::uint32_t, len>{1, 2, 3, 4, 5};
  print_array_values1(arr);
}
