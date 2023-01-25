#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

inline void swap (int &a, int &b)
{
    auto temp = a;
    a = b;
    b = temp;
}

//void rotate(int a[], unsigned size, int shift)
//{
//    for (size_t i = 0; i < size ; i++)
//    {
//        int s = shift%size;
//        int index2 = i+s;
//        if( index2 <= (size - 1))
//        {
//        swap(a[i], a[index2]);
//        }
//        else if (index2 > (size - 1))
//        {
//            swap(a[i], a[shift]) ;
//        }
////        print(a, size);
//        std::cout << std::endl;
//    }
//}

void rotate(int a[], unsigned size, int shift)
{
for (size_t j = shift; j > 0; j--)
{
    auto first = a[0];
    for (size_t i = 0; i < size; i++)
    {
        swap(a[i], a[i+1]);
        if(i == size-1)
        {
            swap(a[size-1],first);
        }
    }
}
}

int main ()
{

}
