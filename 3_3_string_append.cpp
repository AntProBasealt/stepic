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
//        char* str2 = new char[size + other.size];
//        for(size_t i = 0; i < size; ++i)
//        {
//            str2[i] = str[i];
//        }

//        for(size_t j = size+1; j < size + other.size; ++j)
//        {
//            str2[j] = other[j];
//        }

//        str[size + other.size + 1] = '\0';
////        std::cout << "Result string: " << str << std::endl;
////        std::cout << str << std::endl;
//    }

    void append2(CustomString &other)
    {
//        char* str2 = new char[size];
//        memcpy(str2, str, size);

        char* tmp = new char[size + other.size];
        memcpy(tmp, str, size);
//        char* tmp = new char[size + other.size];
        memcpy(&tmp[7], &other.str, other.size);
        tmp[size + 1] = '\0';
        std::cout << "Result string: " << tmp << std::endl;
    }

//    void app3(CustomString &other)
//    {
////        char* dst = new char[size];
//        char* dst = new char[size + other.size];
//        strcpy(dst, str);
//        strcpy(&dst[size + 1], &other);
////        dst* = char[size + 1];
//        strcat(dst, &other);
//        dst[size + other.size] = ;
//        for(size_t i = size + 1; i <= size + other.size; ++i)
//        {
//            dst[i] = other[i];
//        }
//        std::memcpy(dst, &other, size);
//        std::strcat(dst, other);
//        dst[size + other.size + 1] = '\0';
//        std::cout << str << '\n' << dst << '\n';
//    }

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
    CustomString s2("1");

    s1.append2(s2);
//    s1.app3(s2);

}
