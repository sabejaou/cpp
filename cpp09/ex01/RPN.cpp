#include "RPN.hpp"
#include <cstdlib>

RPN::RPN() {}

RPN::RPN(const std::string line) : _line(line) {}

RPN::RPN(const RPN& other): _line(other._line) {}

RPN& RPN::operator=(const RPN& other) {
    this->_line = other._line;
    return (*this);
}

RPN::~RPN() {}

int RPN::result(const std::string line)
{
    if (line.empty())
        throw EmptyExpressionException();

    std::string word;
    std::stringstream ss(this->_line);

    while (std::getline(ss, word, ' ')) {
        if (word.size() != 1)
            throw InvalidTokenException();
        
        else if (isdigit(*word.c_str()))
            this->_numbers.push(std::atoi(word.c_str()));

        else if (*word.c_str() == '/') {
            try {
                this->divide();
            }
            catch (const DivisionByZeroException& e) {
                std::cerr << e.what() << std::endl;
                throw;
            }
        }
        else if (*word.c_str() == '+') {
            try {
                this->add();
            }
            catch (const InsufficientOperandsException& e) {
                std::cerr << e.what() << std::endl;
                throw;
            }
        }
        else if (*word.c_str() == '-') {
            try {
                this->subtract();
            }
            catch (const InsufficientOperandsException& e) {
                std::cerr << e.what() << std::endl;
                throw;
            }
        }
        else if (*word.c_str() == '*') {
            try {
                this->multiply();
            }
            catch (const InsufficientOperandsException& e) {
                std::cerr << e.what() << std::endl;
                throw;
            }
        }
		else
			throw InvalidTokenException();
    }

    if (this->_numbers.size() != 1)
        throw InvalidResultException();

    return (this->_numbers.top());
}

void RPN::multiply() {
    if (this->_numbers.size() <= 1)
        throw InsufficientOperandsException();

    int a = this->_numbers.top(); this->_numbers.pop();
    int b = this->_numbers.top(); this->_numbers.pop();
    this->_numbers.push(b * a);
}

void RPN::divide() {
    if (this->_numbers.size() <= 1)
        throw InsufficientOperandsException();

    int a = this->_numbers.top(); this->_numbers.pop();
    int b = this->_numbers.top(); this->_numbers.pop();

    if (a == 0)
        throw DivisionByZeroException();

    this->_numbers.push(b / a);
}

void RPN::add() {
    if (this->_numbers.size() <= 1)
        throw InsufficientOperandsException();

    int a = this->_numbers.top(); this->_numbers.pop();
    int b = this->_numbers.top(); this->_numbers.pop();
    this->_numbers.push(b + a);
}

void RPN::subtract() {
    if (this->_numbers.size() <= 1)
        throw InsufficientOperandsException();

    int a = this->_numbers.top(); this->_numbers.pop();
    int b = this->_numbers.top(); this->_numbers.pop();
    this->_numbers.push(b - a);
}
