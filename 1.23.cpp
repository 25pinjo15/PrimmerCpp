#include <iostream>
#include "Sales_item.h"

int main() {
  Sales_item curItem, item;
  if (std::cin >> curItem) {                                        // if a value is enter 
    int cnt = 1;                                                    // create count variable and set to 1
    while (std::cin >> item) {                                      // while cin is set to item
      if (item.isbn() == curItem.isbn())
        ++cnt;                                                      // add 1 to the counter
      else {
        std::cout << curItem.isbn() << " " << cnt << std::endl;
        curItem = item;
        cnt = 1;
      }
    }
    std::cout << curItem.isbn() << " " << cnt << std::endl;
  }

  return 0;
}