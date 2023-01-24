#include <iostream>
using namespace std;

//int power(const int x, const int p)
//{
//    int answer = 1;
//    if (p > 0)
//    {
//        for (size_t i = 0; i < p; i++)
//        {
//            answer = answer * x;
//        }
//    }
//    else
//    {
//        if (p < 0)
//        {
//            answer = 1/(answer * x);
//        }
//    }
//    return answer;
//}

//int foo (int a, int b, int c)
//{
//    double d = a*b*c;
//    std::cout << "D : " << d << std::endl;
//    int h = c ? d : (d / 2);
//    std::cout << "H : " << h << std::endl;
//    return h;
//}

//void rotate(int a[], unsigned size, int shift)
//{
//for (size_t j = shift; j > 0; j--)
//{
//    auto first = a[0];
//    for (size_t i = 0; i < size; i++)
//    {
//        swap(a[i], a[i+1]);
//        if(i == size-1)
//        {
//            swap(a[size-1],first);
//        }
//    }
//}
//}

inline void swap (int &a, int &b)
{
    auto temp = a;
    a = b;
    b = temp;
}

void print ( int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << a[i] << std::endl;
    }
}


void rotate(int a[], unsigned size, int shift)
{
    for (size_t i = 0; i < size ; i++)
    {
        int s = shift%size;
        int index2 = i+s;
        if( index2 <= (size - 1))
        {
        swap(a[i], a[index2]);
        }
        else if (index2 > (size - 1))
        {
            swap(a[i], a[shift]) ;
        }
//        print(a, size);
        std::cout << std::endl;
    }
}


int main()
{
    int a[] = {1,2,3,4,5};
    print(a, 5);
    std::cout << " " << std::endl;
    rotate(a, 5, 1);
    print(a, 5);
//    std::cout << "Enter x and p:" << std::endl;
//    int x,p;
//    std::cin >> x >> p;
//    std::cout << power(x, p) << std::endl;
//    std::cout << "Foo :" << std::endl;
//    std::cout << foo(2, 3, 4) << std::endl;
}
