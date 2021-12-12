#include <iostream>

int main(){
    int sum = 50;

    for(int i = 50; i < 100; ++i) {
        ++sum; // assign sum + val to sum
        std::cout << sum << std::endl;
    }

   
    return 0;
}