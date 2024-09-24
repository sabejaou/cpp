#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>  // Include string for std::string

class ScalarConverter {
public:
    static void convert(const std::string& literal);  // Single static method

    ~ScalarConverter();  // Destructor

private:
    ScalarConverter();  // Private constructor to make class non-instantiable
    ScalarConverter(const ScalarConverter&);  // Private copy constructor
    ScalarConverter& operator=(const ScalarConverter&);  // Private assignment operator

    static int convertToInt(const std::string& str);
    static float convertToFloat(const std::string& str);
    static double convertToDouble(const std::string& str);
    static char convertToChar(int value);

    static bool isPseudoLiteral(const std::string& str);
};

#endif
