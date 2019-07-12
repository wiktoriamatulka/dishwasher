#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>

#include "Program.h"
#include "ColdWaterProgram.h"
#include "QuickProgram.h"
#include "SlowProgram.h"
#include "ProgramsLoader.h"
#include "DishWasher.h"

using namespace std;

int main()
{
    DishWasher* dishWasher = new DishWasher();
    dishWasher->run();
    delete dishWasher;
    return 0;
}
