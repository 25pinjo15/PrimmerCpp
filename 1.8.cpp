// 1.8 program to test comment in code , normal dont compile
#include <iostream>

int main()
{
    std::cout << "/*"; // correct to print
    std::cout << "*/"; // correct to print
    std::cout << /* "*/" */; //incorect
    std::cout << /* "*/" /* "/*" */; // incorect
    return 0"
}