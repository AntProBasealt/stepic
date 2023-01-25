#include <iostream>
#include <string>

using namespace std;


unsigned strlen1(const char* str)
{
    int i = 0;
    const char *q = "\0";
    while (str[i] != *q )
    {
        i++;
    }
    return i;
}

void strcat1(char* to, const char* from)
{
    int len1 = strlen1(to);
    int len2 = strlen1(from);

    for (int i = 0; i < len2+1; i++)
    {
        to[len1] = from[i];
        len1++;
    }
}

int main()
{
    char to[25] = "first";
    char from[] = "second";
    strcat1(to, from);
    std::cout << to << std::endl;
}
