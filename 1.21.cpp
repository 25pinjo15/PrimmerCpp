// write a program that take 2 same item  and add them
// updated from page 23
#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item1, item2;
    std::cin >> item1 >> item2;     // read a pair of transactions
    if (item1.isbn() == item2.isbn()) { // check if both isbn are the same
        std::cout << item1 + item2 << std::endl; // print their sum
        return 0;
    }
    else {
        std::cerr << "Data must refer to same ISBN" << std::endl;
        return -1; // indicate failure
    }
}