#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {
    String(const char * str = "");
    size_t size;
    char *str;
};

String::String(const char * str) {
    size = strlen(str);
    this->str = new char[size+1];
    for(size_t i = 0; i <= size; ++i)
        this->str[i] = str[i];
}

int main()
{

}
