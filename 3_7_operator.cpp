#include <algorithm> // std::swap
#include <cstddef>   // size_t
#include <cstring>   // strlen, strcpy
#include <iostream>
using namespace std;

struct String1
{
	String1(const char *str = "");
	String1(size_t n, char c);
	String1(const String1 &other);
//	~String1();
    ~String1()
    {
        delete str;
        std::cout << "Destructor called for string " << std::endl;
    }

    /* Реализуйте оператор присваивания */
	String1 &operator=(const String1 &other)
    {
        if(this != &other)
        {
            delete [] str;
            size = other.size;
            str = new char[size+1];
            strcpy(str, other.str);
//            for (size_t i = 0; i <= size+1; ++i)
//            {
//                str[i] = other.str[i];
//            }
        }
        return *this;
    }

	void append(const String1 &other);
	size_t size;
	char *str;
};

int main()
{
    return 0;
}
