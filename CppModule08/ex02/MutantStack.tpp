#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(){}

template <typename T>
MutantStack<T>::~MutantStack(){}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &data)
{
    *this = data;
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &data)
{
    if (this == &data)
        return (*this);
    this->c = data.c;
    return (*this);
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator  MutantStack<T>::end()
{
    return (this->c.end());
}
template<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::begin(void) const
{
    return (this->c.begin());
}
template<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::end(void) const
{
    return (this->c.end());
}
template<typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rbegin(void)
{
    return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rend(void)
{
    return (this->c.rend());
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rbegin(void) const
{
    return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rend(void) const
{
    return (this->c.rend());
}
#endif