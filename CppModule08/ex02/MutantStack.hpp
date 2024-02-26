#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template<typename T> class MutantStack: public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
        MutantStack();
        ~MutantStack();
        MutantStack(const MutantStack &);
        MutantStack &operator=(const MutantStack &);
        iterator begin();
        iterator end();
        const_iterator begin(void) const;
        const_iterator	end(void) const;
        reverse_iterator rbegin(void);
        reverse_iterator	rend(void);
        const_reverse_iterator	rbegin(void) const;
        const_reverse_iterator	rend(void) const;
};

#include "MutantStack.tpp"

#endif