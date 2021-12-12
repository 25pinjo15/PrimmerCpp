#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item book;
    // read ISBN, nunber of copies soldm and dales price
    std::cin >> book;
    // write ISBN,number of copies sold, total revenue,and average price
    std::cout << book << std::endl;
    return 0;
}