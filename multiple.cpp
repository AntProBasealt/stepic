#include <iostream>
using namespace std;

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

int main()
{
    std::cout << "Enter x and p:" << std::endl;
    int x,p;
    std::cin >> x >> p;
    std::cout << power(x, p) << std::endl;
}
