#include <iostream>

int main() {
    int v1 = 0, v2 = 0;
    std::cout << "Enter 2 values to see all in betwen" << std::endl;
    std::cin >> v1 >> v2;
    if (v1 > v2) {
        while (v1 > v2) {
            std::cout << v1 << std::endl;
            --v1;
        }
    }
    else {
        while (v1 < v2) {
     
      std::cout << v1 << std::endl;  
     ++v1;
     }
    }
}