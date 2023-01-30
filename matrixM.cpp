#include <iostream>
#include <string>
using namespace std;

int ** transpose(const int * const * m, unsigned rows, unsigned cols)
{
    int** new_m = new int* [cols];
    for (int i = 0; i != cols; ++i)
    {
        new_m[i] = new int[rows];
    }
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            new_m[i][j] = m[j][i];
        }
    }
    return new_m;
}


int main() {

    unsigned rows = 5;
    unsigned cols = 3;
    int *m[] = {};
    transpose(m, rows, cols);

}
