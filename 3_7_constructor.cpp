#include <cstddef> // size_t
#include <cstring> // strlen, strcpy
#include <iostream>
using namespace std;

struct String1
{
	String1(const char *str = "");
	String1(size_t n, char c);
	~String1();

    /* Реализуйте конструктор копирования */
	String1(const String1 &other) : size(other.size)
    {
        str = new char[other.size + 1];
        strcpy(str, other.str);
    }

	void append(const String1 &other);

	size_t size;
	char *str;
};

int main()
{
    return 0;
}
