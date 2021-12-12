#include <iostream>

int main() {
    int val = 10;
    for(int i = 10; i > 0; --i){
        std::cout << val << std::endl;
        --val;
    }
}