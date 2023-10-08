#include <iostream>

class Vector
{
    int* array;
    int size;
public:
    Vector() : array{ nullptr }, size{} {}
    Vector(int size)
        : array{ new int[size] }, size{ size } 
    {
        std::cout << this << " Vector construct\n";
    }
    ~Vector() 
    { 
        delete[] array; 
        std::cout << this << " Vector destruct\n";
    }
};

int main()
{
    {
        Vector* v1 = new Vector(10);
        Vector v2(10);
        delete v1;
    }
    
    //
}
