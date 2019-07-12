#ifndef VIEW_H_INCLUDED
#define VIEW_H_INCLUDED

#include <vector>
#include "Program.h"

class View {
public:
    virtual ~View() {}

    virtual void showBeginning() {}
    virtual void showPrograms(std::vector<Program*> programs) {}
    virtual void showCurrentProgram(Program* program) {}
    virtual int decide() {}
    virtual int confirm() {}
};

#endif // VIEW_H_INCLUDED
