#include "BitcoinExchange.hpp"
#include <iostream>

int main() {
    try {
        // Test the constructor with CSV file loading
        BitcoinExchange btc("data.csv");

        // Test getting the value of bitcoin on a specific date
        std::string date = "2011-01-03";
        float amount = 2.5;
        std::cout << "On " << date << ", " << amount << " bitcoins = " << btc.getBitcoinValue(date, amount) << " USD." << std::endl;

        // Test constructor by copy
        BitcoinExchange btcCopy(btc);
        std::cout << "Copy test: On " << date << ", " << amount << " bitcoins = " << btcCopy.getBitcoinValue(date, amount) << " USD." << std::endl;

        // Test assignment operator
        BitcoinExchange btcAssigned;
        btcAssigned = btc;
        std::cout << "Assignment test: On " << date << ", " << amount << " bitcoins = " << btcAssigned.getBitcoinValue(date, amount) << " USD." << std::endl;

        // Test with an invalid date
        std::string invalidDate = "2010-12-31";
        try {
            std::cout << "On " << invalidDate << ", " << amount << " bitcoins = " << btc.getBitcoinValue(invalidDate, amount) << " USD." << std::endl;
        } catch (const std::out_of_range& e) {
            std::cerr << e.what() << std::endl;
        }

        // Test with an invalid value
        float invalidAmount = 1001.0;
        try {
            std::cout << "Test with invalid amount: " << invalidAmount << " bitcoins." << std::endl;
            btc.getBitcoinValue(date, invalidAmount);
        } catch (const std::invalid_argument& e) {
            std::cerr << e.what() << std::endl;
        }

    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
