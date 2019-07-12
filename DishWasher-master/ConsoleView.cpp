#include <vector>
#include <iostream>

#include "ConsoleView.h"
#include "Program.h"

void ConsoleView::showBeginning(){
    std::cout << "====================================" << std::endl;
    std::cout << "WELCOME TO GREAT DISHWASHER" << std::endl;
    std::cout << "====================================" << std::endl;
    std::cout << std::endl;
}

void ConsoleView::showPrograms(std::vector<Program*> programs){
    std::cout << "Which program would you like to choose?" << std::endl << std::endl;
    for(int i = 0; i < programs.size(); i++){
        Program* program = programs[i];

        std::cout << i + 1 << ")" << std::endl;
        std::cout << program->name << std::endl;
        std::cout << "Length: " << program->length << std::endl;
        std::cout << "Water Temperature: " << program->waterTemperature << std::endl;
        std::cout << "Energy Consumption: " << program->energyConsumption << std::endl;
        std::cout << std::endl;
    }
}

void ConsoleView::showCurrentProgram(Program* program){
    std::cout << "Current program: " << std::endl;
    std::cout << program->name << std::endl;
    std::cout << "Length: " << program->length << std::endl;
    std::cout << "Water Temperature: " << program->waterTemperature << std::endl;
    std::cout << "Energy Consumption: " << program->energyConsumption << std::endl;
    std::cout << std::endl;
}

int ConsoleView::confirm(){
    std::cout << "Confirm your choice:" << std::endl;
    std::cout << "(1 - confirm, 0 - choose again, -1 - switch off dishwasher)" << std::endl;
    int confirmation;
    std::cin >> confirmation;
    return confirmation;
}

int ConsoleView::decide(){
    std::cout << "Pass your choice:" << std::endl;
    int decision;
    std::cin >> decision;
    return decision - 1;
}
