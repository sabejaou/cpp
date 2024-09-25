#ifndef SPAN_HPP
#define SPAN_HPP
# include <vector>

class Span {
public:
	Span();
	Span(unsigned int n);
	Span(const Span& other);
	~Span();
	Span& operator=(const Span& other);
	void addNumber(int number);
	int shortestSpan() const;
	int longestSpan() const;
	class NotEnoughNumbersException : public std::exception {
		public:
    		const char* what() const throw() {
    		    return "Not enough numbers to find a span.";
    		}
	};
	class SpanFullException : public std::exception {
		public:
		    const char* what() const throw() {
		        return "Span is already full. Cannot add more numbers.";
		}
	};
	private:
		std::vector<int> _vec;
		int	_max_size;
		int _nbstocked;
};

#endif