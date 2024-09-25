#include "RPN.hpp"
#include <iostream>

int main(int ac, char **av) {
    try {
        // Test case: Valid RPN expression
		if (ac == 2)
		{
			std::string custom_expression = av[1];
        	RPN rpn_custom(custom_expression);
			std::cout << "Result of RPN expression '" << custom_expression << "': " << rpn_custom.result(custom_expression) << std::endl;
		}
		
        std::string expression = "3 4 + 2 * 7 /"; // (3 + 4) * 2 / 7 = 2
        RPN rpn(expression);
        std::cout << "Result of RPN expression '" << expression << "': " << rpn.result(expression) << std::endl;

        // Test case: Invalid token in expression
        std::string invalidExpression = "3 4 + 2 & *";
        RPN rpnInvalid(invalidExpression);
        std::cout << "Result of RPN expression '" << invalidExpression << "': " << rpnInvalid.result(invalidExpression) << std::endl;

    }
    catch (const RPN::EmptyExpressionException& e) {
        std::cerr << e.what() << std::endl;
    }
    catch (const RPN::InvalidTokenException& e) {
        std::cerr << e.what() << std::endl;
    }
    catch (const RPN::DivisionByZeroException& e) {
        std::cerr << e.what() << std::endl;
    }
    catch (const RPN::InsufficientOperandsException& e) {
        std::cerr << e.what() << std::endl;
    }
    catch (const RPN::InvalidResultException& e) {
        std::cerr << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "An unexpected error occurred: " << e.what() << std::endl;
    }

    return 0;
}
