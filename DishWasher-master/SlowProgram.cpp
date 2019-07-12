#include <iostream>
#include <unistd.h>

#include "SlowProgram.h"

void SlowProgram::run() {
    std::cout << "Breeeeee" << std::endl;
    usleep(5000);
    std::cout << "Bruuuuummmmmmmmmm" << std::endl;
    usleep(5000);
    std::cout << "Really Slow Program" << std::endl;
    usleep(5000);
    std::cout << "Brrrrrrrrrrrrrrrrrrrrrrrr" << std::endl;
    usleep(5000);
    std::cout << "Brrrrrrrrrrrrrr" << std::endl;
}
