#include <list>
#include <sstream>
#include <stdio.h>
#include <fstream>
#include <string>
#include <iostream>

#include "ProgramsLoader.h"
#include "QuickProgram.h"
#include "SlowProgram.h"
#include "ColdWaterProgram.h"
#include "EkoProgram.h"

Program* ProgramsLoader::createProgram(int type, std::string name, int length, int temperature, int energy){
    switch(type){
        case 0:
            return new QuickProgram(name, length, temperature, energy);
        case 1:
            return new SlowProgram(name, length, temperature, energy);
        case 2:
            return new ColdWaterProgram(name, length, temperature, energy);
        case 3:
            return new EkoProgram(name, length, temperature, energy);
    }
}

std::vector<Program*> ProgramsLoader::load(){
    std::vector<Program*> programs;
    for(int i = 0; i < 4; i++) {
        std::string filepath = std::to_string(i);
        filepath += ".txt";
        std::ifstream file;
        file.open(filepath);
        if(!file) {
            std::cout << "Cant open file: " << filepath << std::endl;
        }
        else{
            int type;
            int length;
            int temperature;
            int energy;
            std::string name;

            std::cout <<"Loaded program:" << filepath << std::endl;
            while (file >> type >> name >> length >> temperature >> energy)
            {
                programs.push_back(createProgram(type, name, length, temperature, energy));
            }
            file.close();
        }
    }

    return programs;
}
