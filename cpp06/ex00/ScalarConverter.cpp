#include "ScalarConverter.hpp"
#include <iostream>
#include <sstream>
#include <limits>
#include <cmath>  // For isinf() and isnan()

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter&) {}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter&) { return *this; }
ScalarConverter::~ScalarConverter() {}

bool ScalarConverter::isPseudoLiteral(const std::string& str) {
    return (str == "nan" || str == "nanf" || str == "+inf" || str == "-inf" || 
            str == "+inff" || str == "-inff");
}

int ScalarConverter::convertToInt(const std::string& str) {
    int num;
    std::istringstream iss(str);  // Use std::istringstream to parse string
    iss >> num;
    if (iss.fail()) {
        throw std::invalid_argument("Invalid integer conversion");
    }
    return num;
}

float ScalarConverter::convertToFloat(const std::string& str) {
    float num;
    std::istringstream iss(str);  // Use std::istringstream to parse string
    iss >> num;
    if (iss.fail()) {
        throw std::invalid_argument("Invalid float conversion");
    }
    return num;
}

double ScalarConverter::convertToDouble(const std::string& str) {
    double num;
    std::istringstream iss(str);  // Use std::istringstream to parse string
    iss >> num;
    if (iss.fail()) {
        throw std::invalid_argument("Invalid double conversion");
    }
    return num;
}

char ScalarConverter::convertToChar(int value) {
    if (value < 32 || value > 126) {
        throw std::invalid_argument("Non-displayable character");
    }
    return static_cast<char>(value);
}

void ScalarConverter::convert(const std::string& literal) {
    try {
        if (isPseudoLiteral(literal)) {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            if (literal.find('f') != std::string::npos)
                std::cout << "float: " << literal << std::endl;
            else
                std::cout << "float: " << literal << "f" << std::endl;
            std::cout << "double: " << literal << std::endl;
            return;
        }

        double d = convertToDouble(literal);
        float f = static_cast<float>(d);
        int i = static_cast<int>(d);

        // Char conversion
        std::cout << "char: ";
        try {
            std::cout << "'" << convertToChar(i) << "'" << std::endl;
        } catch (std::exception&) {
            std::cout << "Non displayable" << std::endl;
        }

        // Int conversion
        std::cout << "int: ";
        if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min() || std::isnan(d)) {
            std::cout << "impossible" << std::endl;
        } else {
            std::cout << i << std::endl;
        }

        // Float conversion
        std::cout << "float: " << f;
        if (f == static_cast<int>(f)) {
            std::cout << ".0f" << std::endl;
        } else {
            std::cout << "f" << std::endl;
        }

        // Double conversion
        std::cout << "double: " << d;
        if (d == static_cast<int>(d)) {
            std::cout << ".0" << std::endl;
        } else {
            std::cout << std::endl;
        }

    } catch (std::exception& e) {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
}
