/* Этот код просто напоминание как выглядит класс Foo и функция foo_says.
 * Не нужно его расскоментировать и/или менять.*/
#include <iostream>

struct Foo {
    void say() const { std::cout << "Foo says: " << msg << "\n"; }
protected:
    Foo(const char *msg) : msg(msg) { }
private:
    const char *msg;
 };

 void foo_says(const Foo &foo) { foo.say(); }

// Вам нужно определить функцию get_foo, как описано в задании,
// чтобы компилировался и работал как ожидается следующий код:
//foo_says(get_foo("Hello!"));
//

class Foo1 : public Foo
{
    Foo1 (const char *msg);

    Foo get_base()
    {
        return static_cast<Foo>(*this);
    }
};


Foo get_foo(const char *msg)
{
    Foo1 obj = foo( *msg);
    return foo;
}

int main ()
{
    foo_says(get_foo("Hello!"));
}
