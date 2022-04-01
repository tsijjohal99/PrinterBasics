#include "../include/printer.h"
#include <iostream>

void recursiveFunction(int i) {
    if (i < 10) {
        std::cout << i << std::endl;
        recursiveFunction(++i);
    }
    std::cout << i << std::endl;
}

int main() {
    printer("Hello World");
    recursiveFunction(0);
    return 0;
}

