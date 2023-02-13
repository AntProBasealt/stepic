#include <iostream>
#include <stdio.h>

struct Cls {
    Cls(char c, double d, int i);
    char getCh (char c)
    {
        return c;
    }

    double getD (double d)
    {
        return d;
    }

    int getInt (int i)
    {
        return i;
    }

    void setCh(char nCh)
    {
        c = nCh;
    }

    void setD(char nD)
    {
        d = nD;
    }

    void setInt(char nInt)
    {
        i = nInt;
    }

private:
    char c;
    double d;
    int i;
};

int main()
{
    Cls *s = new Cls('a', 1.0, 1);
    s->setInt(3);

}
