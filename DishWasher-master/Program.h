#ifndef PROGRAM_H_INCLUDED
#define PROGRAM_H_INCLUDED

#include <string>

class Program {
public:
    std::string name;
    int length;
    int waterTemperature;
    int energyConsumption;

    Program(std::string n, int l, int w, int e);
    virtual ~Program() {}

    virtual void run() {}
};

#endif // PROGRAM_H_INCLUDED
