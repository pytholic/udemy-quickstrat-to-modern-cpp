#include <array>
#include <cstdint>
#include <iostream>

template <std::size_t N>
void print_array_values1(const std::array<std::uint32_t, N> arr) {
  std::cout << &arr << std::endl;
  for (std::size_t i = 0; i < arr.size(); ++i) {
    std::cout << arr[i] << std::endl;
  }
}

template <std::size_t N>
void print_array_values2(const std::array<std::uint32_t, N>& arr) {
  std::cout << &arr << std::endl;
  for (std::size_t i = 0; i < arr.size(); ++i) {
    std::cout << arr[i] << std::endl;
  }
}

// template <std::size_t N>
// void double_values(std::array<std::uint32_t, N>* arr) {
//   for (std::size_t i = 0; i < arr->size(); ++i) {
//     (*arr)[i] *= 2;
//   }
// }

template <std::size_t N>
void double_values(std::array<std::uint32_t, N>& arr) {
  for (std::size_t i = 0; i < arr.size(); ++i) {
    arr[i] *= 2;
  }
}

int main() {
  constexpr static std::uint32_t len = 5;
  auto arr = std::array<std::uint32_t, len>{1, 2, 3, 4, 5};
  std::cout << &arr << std::endl;
  // This will give different memory address
  print_array_values1(arr);
  // This will give same meory address
  print_array_values2(arr);
  // Call double values;
  double_values(arr);
  // double_values(&arr);
  print_array_values2(arr);
}
