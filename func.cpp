#include <iostream>

int main()
{
    bool found = 0;
    int x = 5;
    for (int i = 1; i*i < x; ++i)
    {
        for (int j = i; j*j < x; ++j)
            {
            if ( (i*i + j*j) == x )
                {
                found = true;
                break; // выходим из вложенного цикла
                }
            }
        if (found) // выходим из внешнего цикла
            break;
    }

//    bool check(int x)
//    {
//        for (int i = 1; i*i < x; ++i)
//        {
//            for (int j = i; j*j < x; ++j)
//            {
//                if ( i*i + j*j == x )
//                    return true;
//            }
//        }
//        return false;
//    }
}
