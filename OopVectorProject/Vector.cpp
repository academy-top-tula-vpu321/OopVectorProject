#include "Vector.h"

void Vector::CapacityAdd()
{
	capacity += capacity / 2;
	int* arrayNew = new int[capacity];
	for (int i = 0; i < size; i++)
		arrayNew[i] = array[i];
	delete[] array;
	array = arrayNew;
}

void Vector::SetItem(int index, int value)
{
	this->array[index] = value;
}

int Vector::GetItem(int index)
{
	return this->array[index];
}

void Vector::PushBack(int value)
{
	if (size >= capacity)
		CapacityAdd();
	array[size++] = value;
}

void Vector::PushFront(int value)
{
	if (size >= capacity)
		CapacityAdd();
	for (int i = size - 1; i >= 0; i--)
		array[i + 1] = array[i];
	size++;
	array[0] = value;
}

void Vector::Insert(int index, int value)
{
	if (size >= capacity)
		CapacityAdd();

	if (index <= 0)
	{
		PushFront(value);
		return;
	}

	if (index > size - 1)
	{
		PushBack(value);
		return;
	}

	for (int i = size - 1; i >= index; i--)
		array[i + 1] = array[i];
	array[index] = value;
	size++;
}

int Vector::Size()
{
	return size;
}
