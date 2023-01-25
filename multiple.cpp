#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//----------------------------------------------
int power(const int x, const int p)
{
    int answer = 1;
    if (p > 0)
    {
        for (size_t i = 0; i < p; i++)
        {
            answer = answer * x;
        }
    }
    else
    {
        if (p < 0)
        {
            answer = 1/(answer * x);
        }
    }
    return answer;
}

//int foo (int a, int b, int c)
//{
//    double d = a*b*c;
//    std::cout << "D : " << d << std::endl;
//    int h = c ? d : (d / 2);
//    std::cout << "H : " << h << std::endl;
//    return h;
//}


int main()
{
    std::cout << "Enter x and p:" << std::endl;
    int x,p;
    std::cin >> x >> p;
    std::cout << power(x, p) << std::endl;
}
