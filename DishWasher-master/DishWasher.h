#ifndef DISHWASHER_H_INCLUDED
#define DISHWASHER_H_INCLUDED

#include <vector>

#include "Program.h"
#include "View.h"

class DishWasher {
private:
    std::vector<Program*> programs;
    View* view;
    Program* currentProgram;

public:
    DishWasher();
    ~DishWasher();

    void run();
};

#endif // DISHWASHER_H_INCLUDED
