#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void print ( int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << a[i] << std::endl;
    }
}
void Range (int arr[], int size, int shift)
{
//    for (size_t i = 1; i <= shift ; i++)
//    {
        int el = arr[0];
        int sh = shift % size;
        for (int i = 0; i < size; i++)
        {
            arr[i] = arr[i + sh];
            if (arr[i + sh] > (size - 1))
            {
                arr[i] = arr[size-1];
            }
        }
        arr[size - sh] = el;
//    }
    std::cout << "-------------" << std::endl;
}

int main()
{
    int arr[] = {1,2,3,4,5};
//    print(arr, 5);
    Range(arr, 5 , 2);
    print(arr, 5);
}
