#ifndef CONSOLEVIEW_H_INCLUDED
#define CONSOLEVIEW_H_INCLUDED

#include <vector>
#include "Program.h"
#include "View.h"

class ConsoleView : public View{
public:
    void showBeginning();
    void showPrograms(std::vector<Program*> programs);
    void showCurrentProgram(Program* program);
    int decide();
    int confirm();
};

#endif // CONSOLEVIEW_H_INCLUDED
