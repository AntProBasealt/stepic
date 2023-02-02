#include <iostream>
using namespace std;

void print(int *m[], int rows, int cols)
{
    for(auto i = 0; i < rows; ++i)
    {
        for(auto j = 0; j < cols; j++)
        {
//            m[i][j]=( i * 4 ) + j + 1;
            std::cout << m[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void swap_min(int *m[], int rows, int cols)
{
    int min = m[0][0];
    int k = 0;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j< cols; j++)
        {
            if(m[i][j] < min)
            {
                min = m[i][j];
                k = i;
            }
        }
    }
    swap(m[k],m[0]);
}

int main()
{
    int m[3][3];
    int *n[3] = { &m[2][0], &m[1][0], &m[0][0] };

    for(auto i = 0; i < 3; ++i)
    {
        for(auto j = 0; j < 3; j++)
        {
            n[i][j]=( i * 3 ) + j + 1;
        }
    }

    n[1][1] = 0;

    print(n, 3 , 3);
    swap_min(n, 3 , 3);
    std::cout << '\n' << std::endl;
    print(n, 3 , 3);

}
