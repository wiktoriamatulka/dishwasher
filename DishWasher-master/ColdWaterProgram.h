#ifndef COLDWATERPROGRAM_H_INCLUDED
#define COLDWATERPROGRAM_H_INCLUDED

#include "Program.h"

class ColdWaterProgram : public Program {
public:
    ColdWaterProgram(std::string n, int l, int w, int e) : Program(n, l, w, e) {}

    void run();
};

#endif // COLDWATERPROGRAM_H_INCLUDED
