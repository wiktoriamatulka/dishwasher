#include "DishWasher.h"
#include "ProgramsLoader.h"
#include "ConsoleView.h"

DishWasher::DishWasher(){
    ProgramsLoader programsLoader;
    programs = programsLoader.load();
    view = new ConsoleView();
}

void DishWasher::run(){
    view->showBeginning();
    while(true){
        view->showPrograms(programs);
        int decision = view->decide();
        currentProgram = programs[decision];

        view->showCurrentProgram(currentProgram);
        int confirmation = view->confirm();
        if(confirmation == 1){
            currentProgram->run();
        }
        else if(confirmation == 0){
            continue;
        }
        else{
            break;
        }
    }
}

DishWasher::~DishWasher(){
    delete view;
}
