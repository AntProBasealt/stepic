#include <iostream>
#include <stdio.h>

struct Cls
{
    Cls(char c, double d, int i): c(c), d(d), i(i)
{}
private:
    char c;
    double d;
    int i;
};

struct Clss
{
    Clss(char c, double d, int i) : nCh(c), nD(d), nInt(i)
{}
public:
        char nCh;
        double nD;
        int nInt;

};

char &get_c(Cls &cls)
{
    void* p = &cls;
    Clss * pb = static_cast<Clss *>(p);
    return pb->nCh = '5';
}

double &get_d(Cls &cls)
{
    void* p = &cls;
    Clss * pb = static_cast<Clss *>(p);
    return pb->nD = 3.5;
}

int &get_i(Cls &cls)
{
    void* p = &cls;
    Clss * pb = static_cast<Clss *>(p);
    return pb->nInt = 7;
}

int main()
{
//    Cls * s = new Cls('a', 1.0, 1);
    Cls cls('h', 2.0, 3);
    char ch = get_c( cls) ;
    double d = get_d(cls);
    int i = get_i(cls);

    std::cout << ch << std::endl;
    std::cout << d << std::endl;
    std::cout << i << std::endl;
}
