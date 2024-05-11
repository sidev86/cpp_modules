#include "Serializer.hpp"

int main() 
{
    Data data;
    data.name = "Achille";
    data.gender = 'M';
    data.age = 24;
    Data* ptr_data = &data;

    uintptr_t serializedPtr = Serializer::serialize(ptr_data);
    Data* deserializedPtr = Serializer::deserialize(serializedPtr);

    std::cout << "Original Data pointer -> " << ptr_data << std::endl;
    std::cout << "Serialized pointer -> " << serializedPtr << std::endl;
    std::cout << "Deserialized pointer -> " << deserializedPtr << std::endl;

    if (ptr_data == deserializedPtr) 
    {
        std::cout << "Serialization and deserialization successful." << std::endl;
    } 
    else 
    {
        std::cout << "Serialization and deserialization failed." << std::endl;
    }

    return 0;
}
