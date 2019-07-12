#ifndef EKOPROGRAM_H_INCLUDED
#define EKOPROGRAM_H_INCLUDED

#include <string>

#include "Program.h"

class EkoProgram : public Program {
public:
    EkoProgram(std::string n, int l, int w, int e) : Program(n, l, w, e) {}

    void run();
};

#endif // EKOPROGRAM_H_INCLUDED
