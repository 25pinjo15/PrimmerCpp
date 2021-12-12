// Write a program that read serval same isbn transaction and sum them
#include <iostream>
#include "Sales_item.h"

int main() {
  Sales_item total, item;
  if (std::cin >> total) {
    while (std::cin >> item)
      total += item;
    std::cout << total << std::endl;
  }

  return 0;
}