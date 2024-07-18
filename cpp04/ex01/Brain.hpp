#pragma once

#include <iostream>

class Brain {
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain& operator=( const Brain &inst );
        Brain(std::string name);
        ~Brain();
};