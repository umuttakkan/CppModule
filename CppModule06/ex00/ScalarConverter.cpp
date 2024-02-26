#include "ScalarConverter.hpp"
#include <iostream>
#include <cstdlib>
#include <climits>

ScalarConverter::ScalarConverter() 
{
}
ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter&other)
{
    (void)other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    (void)other;
    return (*this);
}


void convertToChar(std::string &data)
{
    char    c;
    int     i;
    float   f;
    double  d;

    c = data[0];

    i = static_cast<int>(c);
    f = static_cast<float>(c);
    d = static_cast<double>(c);
    std::cout << "char: " << "'" << c << "'" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << ".0f" << std::endl;
    std::cout << "double: " << d << ".0" << std::endl;

}

void convertToInt(std::string &data)
{
    char    c;
    long    tmp;
    int     i;
    float   f;
    double  d;

    tmp = atol(data.c_str());
    i = atoi(data.c_str());
    c = static_cast<char>(i);
    f = static_cast<float>(i);
    d = static_cast<double>(i);
    if (tmp > CHAR_MAX || tmp < CHAR_MIN)
        std::cout << "char: impossible" << std::endl;
    else if (!isprint(c))
        std::cout << "char: Non displayable" << std::endl;
    else 
        std::cout << "char: " << "'" << c << "'" << std::endl;
    if (tmp > INT_MAX)
        std::cout << "int: impossible" << std::endl;
    else if (INT_MIN > tmp)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << ".0f" << std::endl;
    std::cout << "double: " << d << ".0" << std::endl;
}

void convertToFloat(std::string &data)
{
    char    c;
    int     i;
    float   f;
    double  d;
    long double tmp;

    char* endptr;
    int intOrFloat = data.find('.', 0);
    std::string value = data.substr(intOrFloat + 1 , data.size());
    std::string newData = data.substr(0, data.size() - 1);
    tmp = strtold(newData.c_str(), &endptr);
    f = atof(data.c_str());
    if (*endptr != '\0')
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return ;
    }
    c = static_cast<char>(f);
    i = static_cast<int>(f);
    d = static_cast<double>(f);
    if ((tmp > 0 && tmp < 1) || (tmp > CHAR_MAX || tmp < CHAR_MIN))
        std::cout << "char: impossible" << std::endl;
    else if (!isprint(c))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << "'" << c << "'" << std::endl;
    if ((tmp > 0 && tmp < 1) || (tmp > INT_MAX || INT_MIN > tmp))
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << i << std::endl;
    if ((tmp > std::numeric_limits<double>::max()) || (std::numeric_limits<double>::min() > tmp && !(tmp <= 0)))
    {
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
    else
    {
        if (isdigit(value[0]) && value[0] != '0')
        {
            if (tmp > std::numeric_limits<float>::max() || (std::numeric_limits<float>::min() > tmp && !(tmp <= 0)))
                std::cout << "float: impossible" << std::endl;
            else
                std::cout << "float: " << f << "f" << std::endl;
            if (tmp > std::numeric_limits<float>::max() || (std::numeric_limits<float>::min() > tmp && !(tmp <= 0)))
                std::cout << "double: impossible" << std::endl;
            else
                std::cout << "double: " << d << std::endl;
        }
        else
        {
            if (tmp > std::numeric_limits<float>::max() || (std::numeric_limits<float>::min() > tmp && !(tmp <= 0)))
                std::cout << "float: impossible" << std::endl;
            else if (value[0] != 0)
                std::cout << "float: " << f << ".0f" << std::endl;
            else
                std::cout << "float: " << f << ".f" << std::endl;
            if (tmp > std::numeric_limits<float>::max() || (std::numeric_limits<float>::min() > tmp && !(tmp <= 0)))
                std::cout << "double: impossible" << std::endl;
            else
                std::cout << "double: " << d << ".0" << std::endl;
        }
    }
}

void convertToDouble(std::string data)
{
    char    c;
    int     i;
    float   f;
    double  d;
    long double tmp;

    char* endptr;
    int intOrFloat = data.find('.', 0);
    std::string value = data.substr(intOrFloat + 1 , data.size());
    tmp = strtold(data.c_str(), &endptr);
    d = atof(data.c_str());
    if (*endptr != '\0')
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return ;
    }
    c = static_cast<char>(d);
    i = static_cast<int>(d);
    f = static_cast<float>(d);
    if ((tmp > 0 && tmp < 1) || (tmp > CHAR_MAX || tmp < CHAR_MIN))
        std::cout << "char: impossible" << std::endl;
    else if (!isprint(c))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << "'" << c << "'" << std::endl;
    if ((tmp > 0 && tmp < 1) || (tmp > INT_MAX || INT_MIN > tmp))
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << i << std::endl;
    if (tmp > std::numeric_limits<double>::max() || (std::numeric_limits<double>::min() > tmp && !(tmp <= 0)))
    {
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
    else
    {
        if (isdigit(value[0]) && value[0] != '0')
        {
            if (tmp > std::numeric_limits<float>::max() || (std::numeric_limits<float>::min() > tmp && !(tmp <= 0)))
                std::cout << "float: impossible" << std::endl;
            else
                std::cout << "float: " << f << "f" << std::endl;
            std::cout << "double: " << d << std::endl;
        }
        else
        {
            if (tmp > std::numeric_limits<float>::max() || ((std::numeric_limits<float>::min() > tmp) && !(tmp <= 0)))
                std::cout << "float: impossible" << std::endl;
            else if (value[0] != 0)
                std::cout << "float: " << f << ".0f" << std::endl;
            else
                std::cout << "float: " << f << ".f" << std::endl;
            std::cout << "double: " << d << ".0" << std::endl;
        }
    }
}

int specialCaseControl(std::string data)
{
    for (size_t i = 0; i < data.size(); i++)
    {
        if (data[i] == '.' && ((isdigit(data[i - 1]) && !(isdigit(data[i + 1])))))
                return (1);
        if (isdigit(data[i]) && !isdigit(data[i+1]) && data[i+1] && data[i + 1] != 'e' && data[i + 1] != '.' && data[i + 1] != 'f')
            return (1);
    }
    return (0);
}
int specialCase(std::string data)
{            
    if (isalpha(data[1]) || (data[1] == '-' || data[1] == '+') || specialCaseControl(data))
        return (1);
    else
        return(0);
}

int specialCaseOne(std::string data)
{
    if (data == "+inf" || data == "-inf" || data == "nan" 
        || data == "nanf" || data == "-inff" || data == "+inff")
        return (1);
    else
        return (0);
}

void specialConverToFloat(std::string data)
{
    std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " << "impossible" << std::endl;
    std::cout << "float: " << data << std::endl;
    std::cout << "double: " << data.substr(0, data.size() - 1) << std::endl;
}

void specialConverToDouble(std::string data)
{
    std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " << "impossible" << std::endl;
    std::cout << "float: " << data << "f" << std::endl;
    std::cout << "double: " << data<< std::endl;
}

void ScalarConverter::convert(std::string data)
{
    if (!specialCase(data))
    {
        if (data.size() == 1 && !isdigit(data[0]))
            convertToChar(data);
        else if (data.find('.', 0) == std::string::npos)
            convertToInt(data);
        else if(data.find('f',0) != std::string::npos || data.find('F',0) != std::string::npos)
            convertToFloat(data);
        else if (data.find('.',0) != std::string::npos)
            convertToDouble(data);
    }
    else
    {
        if (specialCaseOne(data))
        {
            if(data.substr(data.size() - 2 ,data.size()) == "ff" || data == "nanf")
                specialConverToFloat(data);
            else
                specialConverToDouble(data);
        }
        else
        {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: impossible" << std::endl;
            std::cout << "double: impossible" << std::endl;
        }

    }
}
