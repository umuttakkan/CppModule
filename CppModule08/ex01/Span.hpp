#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>

class Span
{
    private:
		unsigned int n;
		std::vector<int> vec;
    public:
        Span();
        Span(const Span &);
        Span &operator=(const Span &);
        ~Span();
		Span(unsigned int N);
		void addNumber(int x);
		int shortestSpan();
		int longestSpan();
		void ultimateAddNumber(std::vector<unsigned int> vec);
};


#endif