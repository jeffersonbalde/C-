#include <iostream>

// typedef int numberNi;
// typedef std::string stringNi;

using numberNi = int;
using stringNi = std::string;

int main() {
    numberNi num = 13;
    stringNi name = "Jefferson Balde";
    
    std::cout << name << std::endl;
    std::cout << num;

    return 0;
}