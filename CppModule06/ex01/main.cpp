#include "Serializer.hpp"

int main ()
{
    	Data      data;

		data.x = 10;
		uintptr_t variable = Serializer::serialize(&data);
		std::cout << "Serialized value: " << variable << std::endl;

		Data* newData = Serializer::deserialize(variable);
		std::cout << "Data address: " << &data << std::endl;
		std::cout << "Data value of x: " << data.x << std::endl;
		std::cout << "Deserialized address: " << newData << std::endl;
		std::cout << "Deserialized value of x: " << newData->x << std::endl;

}