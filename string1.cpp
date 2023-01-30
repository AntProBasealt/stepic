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

char *strcat1 (char* to, const char* from)
{
    char buffer[strlen1(to) + strlen1(from)];


    return buffer;
}

int main()
{
    char to[] = "first";
    char from[] = "second";
    strcat1(to, from);
    std::cout << to << " " <<from << std::endl;
}
