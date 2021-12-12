#include <iostream>

int main(){
    int sum = 50, val = 1;

    while (val <= 100) {
        sum += val; // assign sum + val to sum
        ++val;      // add 1 to val
    }

    std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
    return 0;
}