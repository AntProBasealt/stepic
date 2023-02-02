#include <iostream>
#include <cstring>

using namespace std;

char *resize(const char *source, size_t size, size_t new_size)
{
    char * destination = new char[new_size];
//    delete [] destination;
    std::memcpy(destination, source, size);
    delete[] source;
    return destination;
}

char *getline()
{
    char input = 0;
    char *output;
    int index =0;

    while ( input != '\n' )
    {
        cin.get(input);
        if (index == 0)
        {
            output = new char;
            output[0] = input;
        }
        else
        {
            output = resize(output, index, index+1);
            output[index] = input;
        }
        ++index;
    }
    output  = resize(output, index, index+1);
    output[index] = '\0';
    std::cout << output << std::endl;
    return output;
}

int main()
{
    getline();
}
