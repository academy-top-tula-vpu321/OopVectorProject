#include <iostream>

class Vector
{
    int* array;
    int size;
    int capacity;

    void CapacityAdd();
public:
    Vector() :  size{}, 
                capacity{ 2 } 
    {
        array = new int[2];
    };
    Vector(int size)
        : size{ size },
        capacity{ size + size / 2 }
    {
        array = new int[capacity];
    }

    void SetItem(int index, int value);
    int GetItem(int index);

    void PushBack(int value);
    void PushFront(int value);
    void Insert(int index, int value);

    int PopBack();
    int PopFront();
    int Remove(int index);

    int Size();
    
    ~Vector()
    {
        delete[] this->array;
    }
};