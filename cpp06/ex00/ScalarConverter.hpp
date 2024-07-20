#pragma once

#include <cstring>
#include <iostream>

class ScalarConverter{
	private:
		ScalarConverter();
        ScalarConverter( const ScalarConverter &cpy );
        ScalarConverter& operator=( const ScalarConverter &inst );
        ~ScalarConverter();
	public:
		static void convert(std::string ltrl);
};