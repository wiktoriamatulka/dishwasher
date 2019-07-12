#ifndef PROGRAMSLOADER_H_INCLUDED
#define PROGRAMSLOADER_H_INCLUDED

#include <vector>
#include <string>

#include "Program.h"

class ProgramsLoader {
private:
    Program* createProgram(int type, std::string name, int length, int temperature, int energy);
public:
    std::vector<Program*> load();
};

#endif // PROGRAMSLOADER_H_INCLUDED
