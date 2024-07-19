#pragma once

#include <iostream>

class Brain {
    public:
        std::string ideas[100];
        Brain();
        Brain& operator=( const Brain &inst );
        Brain(std::string name);
        ~Brain();
};