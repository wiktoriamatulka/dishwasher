#ifndef QUICKPROGRAM_H_INCLUDED
#define QUICKPROGRAM_H_INCLUDED

#include "Program.h"

class QuickProgram : public Program {
public:
    QuickProgram(std::string n, int l, int w, int e) : Program(n, l, w, e) {}

    void run();
};

#endif // QUICKPROGRAM_H_INCLUDED
