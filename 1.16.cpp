/*
* write your own version that print the sum of a 
*set of integers read from cin 
*/
#include <iostream>

int main() {
    int sum = 0, val = 0;
    while (std::cin >> val) {
        sum += val;
        std::cout << "Sub total: " << sum << std::endl;
    }
    std::cout << "The grand total is: " << sum;
    return 0;
}