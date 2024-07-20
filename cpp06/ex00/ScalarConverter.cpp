#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
    std::cout << "ScalarConverter" << " spawned !" << std::endl;
}

ScalarConverter::ScalarConverter( const ScalarConverter &cpy ) {
    (void)cpy;
	std::cout << "ScalarConverter" << " spawned by copy!" << std::endl;
}

ScalarConverter& ScalarConverter::operator=( const ScalarConverter &inst ) {
	(void)inst;
    return *this;
}

ScalarConverter::~ScalarConverter() {
    std::cout << "ScalarConverter" << " died" << std::endl;
}

void ScalarConverter::convert(std::string ltrl)
{
	bool p = 0;
	size_t i = 0;
	const char *baseType[6] = {"char", "int", "float", "double", "invalid", NULL};
	if (std::strlen(ltrl.c_str()) > 1)
	{
		for (; ltrl[i + 1] ; i++)
		{
			if ((!std::isdigit(ltrl[i]) && ltrl[i] != '.') || (ltrl[i] == '.' && p))
			{
				std::cout << "invalid input" << std::endl;
				return ;
			}
			else if (ltrl[i] == '.')
				p = 1;
		}
		if (!std::isdigit(ltrl[i]) && ltrl[i] != 'f')
		{
			std::cout << "invalid input" << std::endl;
		}
	}
}
