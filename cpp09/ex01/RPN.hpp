#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>
#include <sstream>
#include <iostream>
#include <stdexcept>

class RPN
{
private:
    std::string _line;
    std::stack<int> _numbers;
    void multiply();
    void divide();
    void add();
    void subtract();

public:
    // Canonical form
    RPN();
    RPN(const std::string line);
    RPN(const RPN& other);
    RPN& operator=(const RPN& other);
    ~RPN();

    // Custom exception classes
    class EmptyExpressionException : public std::exception {
		public:
        	const char* what() const throw() {
            	return "Error: Empty expression.";
        }
    };

    class InvalidTokenException : public std::exception {
		public:
        	const char* what() const throw() {
            	return "Error: Invalid token found in expression.";
        }
    };

    class DivisionByZeroException : public std::exception {
		public:
        	const char* what() const throw() {
            	return "Error: Division by zero.";
        }
    };

    class InsufficientOperandsException : public std::exception {
		public:
        	const char* what() const throw() {
            	return "Error: Insufficient operands.";
        }
    };

    class InvalidResultException : public std::exception {
		public:
        	const char* what() const throw() {
            	return "Error: Invalid result.";
        }
    };
    int result(const std::string line);

};

#endif