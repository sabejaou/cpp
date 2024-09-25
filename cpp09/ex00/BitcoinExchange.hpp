#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <string>
#include <map>
#include <stdexcept>
#include <iostream>
#include <fstream>
#include <sstream>

class BitcoinExchange
{
private:
    // Map to store the historical bitcoin prices
    std::map<std::string, float> _prices;

    // Utility function to parse the CSV file and load the data into _prices
    void loadData(const std::string& csvFile);

    // Helper function to validate date and value inputs
    bool isValidDate(const std::string& date) const;
    bool isValidValue(float value) const;

public:
    // Default constructor
    BitcoinExchange();

    // Constructor with CSV file input
    BitcoinExchange(const std::string& csvFile);

    // Copy constructor (Coplien form)
    BitcoinExchange(const BitcoinExchange& other);

    // Assignment operator (Coplien form)
    BitcoinExchange& operator=(const BitcoinExchange& other);

    // Destructor
    ~BitcoinExchange();

    // Function to get the bitcoin value for a given date and amount
    float getBitcoinValue(const std::string& date, float amount) const;
};

#endif // BITCOINEXCHANGE_HPP
