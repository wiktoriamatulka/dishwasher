#include <iostream>
#include <unistd.h>

#include "QuickProgram.h"

void QuickProgram::run() {
    std::cout << "Br" << std::endl;
    usleep(500);
    std::cout << "Br" << std::endl;
    usleep(500);
    std::cout << "Really Quick Program" << std::endl;
    usleep(500);
    std::cout << "Brr" << std::endl;
}
