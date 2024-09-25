#include "Span.hpp"
#include <algorithm> // Include the <algorithm> header for std::min_element
#include <climits> // Include the <climits> header for INT_MAX
#include <cstdlib> // Include the <cstdlib> header for std::abs

Span::Span(): _max_size(0){}

Span::Span(unsigned int n) : _max_size(n), _nbstocked(0){}

Span::Span(const Span& other) {
	this->_max_size = other._max_size;
	this->_nbstocked = other._nbstocked;
	for (int i = 0; i < static_cast<int>(this->_max_size) && i < other._nbstocked; i++) {
		this->_vec.push_back(other._vec[i]);
	}
}

Span::~Span() {
	this->_vec.clear();
}

Span& Span::operator=(const Span& other) {
	this->_vec.clear();
	this->_nbstocked = other._nbstocked;
	this->_max_size = other._max_size;
	for (int i = 0; i < static_cast<int>(this->_max_size) && i < other._nbstocked; i++) {
		this->_vec.push_back(other._vec[i]);
	}
	return *this;
}

void Span::addNumber(int number) {
	if (this->_max_size > this->_nbstocked)
	{
		this->_vec.push_back(number);
		this->_nbstocked++;
	}
	else
		throw SpanFullException();
}

int Span::shortestSpan() const {
    if (this->_nbstocked < 2) {
        throw NotEnoughNumbersException();
    }
    std::vector<int> sorted_vec = this->_vec;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
    std::sort(sorted_vec.begin(), sorted_vec.end());

    int min_span = INT_MAX;
    for (size_t i = 1; i < sorted_vec.size(); ++i) {
        int diff = sorted_vec[i] - sorted_vec[i - 1];
        if (diff < min_span) {
            min_span = diff;
        }
    }
    return min_span;
}


int Span::longestSpan() const {
    if (this->_nbstocked < 2) {
        throw NotEnoughNumbersException();
    }
    int min = *std::min_element(this->_vec.begin(), this->_vec.end());
    int max = *std::max_element(this->_vec.begin(), this->_vec.end());

    return (max - min);
}