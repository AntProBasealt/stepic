// Задача 1
Объявите переменную c именем m, в которой хранится указатель
на двумерный массив целых чисел (int), выделенный в динамической памяти,
так чтобы содержимое массива нельзя было поменять,
т. е. компилятор должен выдавать ошибку при попытке
произвести над m любое действие, которое изменит значение m[i][j] для любых i и j.

// Ответ
int const * const * m;

// Задача 2
struct String {
    String(const char *str = "");            /* 1 */
    String(size_t n,  char c);               /* 2 */
    ~String();                               /* 3 */
    void append(const String &other);        /* 4 */
    size_t length();                         /* 5 */
    char &get(size_t pos);                   /* 6 */
    bool equal(const String &other);         /* 7 */
private:
    size_t size;
    char *str;
};

Подумайте, какие из этих методов можно и стоит отметить как константные
(имеется ввиду логическая константность). При выполнении этого задания
учитывайте сигнатуры методов (реализации конструкторов, деструктора
и метода append вам уже известны).

// Ответ
String(const char *str)
append(const String &other)
 + bool equal(const String &other)
String(size_t n, char c)
char &get(size_t pos)
 + size_t length()
~String()
