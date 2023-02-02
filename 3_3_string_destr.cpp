#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {
    /* Реализуйте этот конструктор */
    size_t size;
    char *str;

    String(size_t n, char c)
    {
        char* s = new char[n + 1];
        for(int i = 0;i <= n; i++)
        {
            s[i] = c;
        }
        s[n]= '\0';
        size = n;
        this->str = s;
    }
    /* и деструктор */
    ~String()
    {
        delete [] str;
    }
};

int main()
{

}
