#include <iostream>
#include <cstring>

using namespace std;

char *resize(const char *source, size_t size, size_t new_size)
{
	char * destination = new char[new_size];
    std::memcpy(destination, source, size);
    delete[] source;

    return destination;
}

int main()
{
    const char str[] = "123abc";

    char dest[0];

    std::memcpy(dest, &str, sizeof (str));

    std::cout << dest << std::endl;

}
