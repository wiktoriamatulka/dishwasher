#include <iostream>
#include <unistd.h>

#include "ColdWaterProgram.h"

void ColdWaterProgram::run() {
    std::cout << "Brrrr" << std::endl;
    usleep(1000);
    std::cout << "Brummmm" << std::endl;
    usleep(1000);
    std::cout << "Really Cold Water" << std::endl;
    usleep(1000);
    std::cout << "Brrrr" << std::endl;
}
