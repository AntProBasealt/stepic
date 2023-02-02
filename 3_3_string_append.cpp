#include <iostream>
#include <cstddef> // size_t
#include <cstring> // strlen, strcpy
#include <string>
#include <string.h>
#include <memory>

using namespace std;

struct CustomString
{
	CustomString(const char * str = "");
	CustomString(size_t n, char c);
    size_t size;
	char *str;

    ~CustomString()
    {
        delete [] str;
    }

    /* Реализуйте этот метод. */
//    void append1(CustomString &other)
//    {
//        char* str2 = new char[size + other.size()];
//        for(size_t i = 0; i < size; ++i)
//        {
//            str2[i] = str[i];
//        }

//        for(size_t j = size+1; j < size + other.size(); ++j)
//        {
//            str2[j] = other[j];
//        }

//        str[size + other.size() + 1] = '\0';
////        std::cout << "Result string: " << str << std::endl;
////        std::cout << str << std::endl;
//    }

    void append2(CustomString &other)
    {
        char* str2 = new char[size + other.size];
        memcpy(str2, str, size);
        memcpy(str2, &other, size);
        str2[size + 1] = '\0';
        str = str2;

        std::cout << "Result string: " << str2 << std::endl;
    }

    void app3(CustomString &other)
    {
//            const char* str = "Take the test.";
        //  src[0] = 'M'; // can't modify string literal
        size_t new_size = size + other.size;
        auto dst = std::make_unique<char[]>(std::strlen(str)+1); // +1 for the null terminator
//        std::strcpy(dst.get(), str);
        std::strcpy(dst.get() + size, other.str);
//        dst[0] = 'M';
        dst[new_size] = '\0';
        std::cout << str << '\n' << dst.get() << '\n';
    }

};

CustomString::CustomString(const char * str)
{
    size = strlen(str);
    this->str = new char[size+1];
    for(size_t i = 0; i <= size; ++i)
    {
        this->str[i] = str[i];
    }
}

CustomString::CustomString(size_t n, char c)
{
    char* s = new char[n + 1];
    for(size_t i = 0; i <= n; i++)
    {
        s[i] = c;
    }
    s[n] = '\0';
    size = n;
    this->str = s;
}

int main()
{
    CustomString s1("Hello,");
    CustomString s2(" world!");

    s1.append2(s2);
    s1.app3(s2);

}
