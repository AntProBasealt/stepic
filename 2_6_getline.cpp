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

char *getline()
{
    char input;

    char *output;

    int index = 0;

    while (cin.get(input) && (input != '\n') && cin.eof())
    {
        if (index == 0)
        {
            char *output = new char;
            *output = input;
        }
            else
        {
            output = resize(output, index, index+1);

            output[index] = input;
        }
        index++;
    }

    output  = resize(output, index, index+1);

    output[index] = '\0';

    std::cout << output << endl;

    return output;
}

int main()
{
    getline();
}
