#include <iostream>
#include "Vector.h"


int main()
{
    srand(time(nullptr));

    Vector* v1 = new Vector(10);
    //Vector v1(10);

    for (int i = 0; i < 10; i++)
        v1->SetItem(i, i + 1);

    for (int i = 0; i < v1->Size(); i++)
        std::cout << v1->GetItem(i) << " ";
    std::cout << "\n";

    v1->PushBack(200);
    v1->PushBack(300);
    v1->PushFront(400);
    v1->PushFront(500);

    v1->Insert(5, 1000);
    v1->Insert(0, 2000);
    v1->Insert(v1->Size(), 3000);

    for (int i = 0; i < v1->Size(); i++)
        std::cout << v1->GetItem(i) << " ";
    std::cout << "\n";

    int n = v1[6];


    delete v1;

    int* arr = new int[10];
    arr[3] = 10;
    
    //
}
