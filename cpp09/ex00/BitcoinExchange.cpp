#include "BitcoinExchange.hpp"

// Default constructor
BitcoinExchange::BitcoinExchange() {
}

BitcoinExchange::BitcoinExchange(const std::string& csvFile) {
    loadData(csvFile);
}

// Copy constructor (Coplien form)
BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {
    this->_prices = other._prices;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
    if (this != &other) {
        this->_prices = other._prices;
    }
    return *this;
}

// Destructor
BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::loadData(const std::string& csvFile) {
    std::ifstream file(csvFile.c_str());
    if (!file.is_open()) {
        throw std::runtime_error("Error: could not open file.");
    }
    std::string line;
    while (std::getline(file, line)) {
        std::istringstream stream(line);
        std::string date;
        float price;

        if (std::getline(stream, date, ',') && (stream >> price)) {
            _prices[date] = price;
        } else {
            std::cerr << "Error: invalid CSV format on line: " << line << std::endl;
        }
    }

    file.close();
}

// Function to get the bitcoin value for a given date and amount
float BitcoinExchange::getBitcoinValue(const std::string& date, float amount) const {
    if (!isValidDate(date) || !isValidValue(amount)) {
        throw std::invalid_argument("Error: Invalid date or value.");
    }

    std::map<std::string, float>::const_iterator it = _prices.lower_bound(date);

    if (it == _prices.end() || it->first != date) {
        if (it == _prices.begin()) {
            throw std::out_of_range("Error: No earlier date available.");
        }
        --it;
    }

    return it->second * amount;
}

bool BitcoinExchange::isValidDate(const std::string& date) const {
    return date.size() == 10 && date[4] == '-' && date[7] == '-';
}

bool BitcoinExchange::isValidValue(float value) const {
    return value >= 0.0f && value <= 1000.0f;
}
