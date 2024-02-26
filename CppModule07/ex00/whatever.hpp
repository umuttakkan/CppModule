#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap(T &numOne, T &numTwo)
{
    T tmp;

    tmp = numOne;
    numOne = numTwo;
    numTwo = tmp;
};

template <typename T>
T min(T numOne, T numTwo)
{
    if (numOne > numTwo)
        return (numTwo);
    else if (numTwo > numOne)
        return (numOne);
    else
        return(numTwo);  
}

template <typename T>
T max(T numOne, T numTwo)
{
    if (numOne > numTwo)
        return (numOne);
    else if (numTwo > numOne)
        return (numTwo);
    else
        return(numTwo);  
}

#endif