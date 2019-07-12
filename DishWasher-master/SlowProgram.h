#ifndef SLOWPROGRAM_H_INCLUDED
#define SLOWPROGRAM_H_INCLUDED


#include <string>

#include "Program.h"

class SlowProgram : public Program {
public:
    SlowProgram(std::string n, int l, int w, int e) : Program(n, l, w, e) {}

    void run();
};

#endif // SLOWPROGRAM_H_INCLUDED
