#include "Base.hpp"

int main()
{
    {
        Base *data = generate();
        identify(data);
        delete data;
        data = generate();
        identify(data);
        delete data;
        data = generate();
        identify(data);
        delete data;
    }
    {  
        Base *data = generate();
        identify(*data);
        delete data;
        data = generate();
        identify(*data);
        delete data;
        data = generate();
        identify(*data);
        delete data;
    }
}