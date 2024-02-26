#include "Span.hpp"

Span::Span()
{
}

Span::~Span()
{
}

Span::Span(const Span &data)
{
    *this = data;
}

Span &Span::operator=(const Span &other)
{
	this->n = other.n;
	this->vec = other.vec;
	return (*this);
}

Span::Span(unsigned int N)
{
	n = N;
	vec.reserve(n);
}

void Span::addNumber(int x)
{
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
	{
		if (*it == x)
			throw std::runtime_error("Number already exists. Cannot add it again.");
	} 
	if (vec.size() < n)
		vec.push_back(x);
	else
		throw std::runtime_error("Maximum size reached. Cannot add more numbers.");	
}

int Span::shortestSpan()
{
	if (vec.empty() || vec.size() == 1)
		throw std::runtime_error("Vector is empty or has only one element.");
	std::sort(vec.begin(), vec.end());
	int a = vec[1] - vec[0];
	int b;
	for (size_t i = 1; i < vec.size(); i++)
	{
		b = vec[i] - vec[i - 1];
		if (b < a)
			a = b;
	}
	return (a);
}

int Span::longestSpan()
{
	if (vec.empty() || vec.size() == 1)
		throw std::runtime_error("Vector is empty or has only one element.");
	int x = *std::max_element(vec.begin(), vec.end()) - *std::min_element(vec.begin(), vec.end());
	return (x);
}

void Span::ultimateAddNumber(std::vector<unsigned int> vec)
{
	if (vec.empty() || vec.size() == 1)
		throw std::runtime_error("Vector is empty or has only one element.");
	for (std::vector<unsigned int>::iterator it = vec.begin(); it != vec.end(); it++)
		addNumber(*it);
}