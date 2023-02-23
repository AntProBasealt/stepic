#include <iostream>
#include <stdio.h>
//#include <algorithm>

// копирование объектов
struct Arr1
{
    Arr1() {}
private:
    size_t size_;
    int * data_;
};

// конструктор копирования
struct Arr2
{   //конст. ссылка на объект того же класса
    Arr2(Arr2 const& a) : size_(a.size_), data_(new int [size_]) // размер скопируем у объекта, а вот содержимое новое
    {
        for (size_t i = 0; i != size_; ++i)
        {
            data_[i] = a.data_[i];
        }
    }
private:
    size_t size_;
    int * data_;
};

// оператор присваивания
struct Arr3
{   //конст. ссылка на объект того же класса
    Arr3 & operator =  (Arr3 const& a) //определаем оператор
    {
        if (this != &a) // проверка - а не сам ли на себя ссылается? иначе в первой же строчке удалим свой массив
        {
            delete [] data_; // сначала удаляем массив, что б не было утечки памяти
            size_ = a.size_; // копируем значение размера массива
            data_ = new int [size_]; // выделяем новую память(динамический массив) под новый размер
            for (size_t i = 0; i != size_; ++i)
            {
                data_[i] = a.data_[i];
            }
            return * this; //   разыменовываем и получаем ссылку на текущий объект
        }
    }
private:
    size_t size_;
    int * data_;
};

struct ArrS // можно написать свой метод swap() для упрощения замены массивов
{
    void swap(ArrS & a)
    {
        size_t const t1 = size_;
        size_ = a.size_;
        a.size_ = t1;

        int * const t2 = data_;
        data_ = a.data_;
        a.data_ = t2;
    }
private:
    size_t size_;
    int *  data_;
};

// Пишем оператор присваивания в 3 строчки, используя констрктор копирования и swap
struct ArrP
{   //конст. ссылка на объект того же класса
    ArrP(ArrP const& a) : size_(a.size_), data_(new int [size_]) // размер скопируем у объекта, а вот содержимое новое
    {
        for (size_t i = 0; i != size_; ++i)
        {
            data_[i] = a.data_[i];
        }
    }

    ArrP & operator = (ArrP const & a )
    {
        if (this != &a)
        {
//            ArrP(a).swap(*this);
            swap(ArrP(a)); // тут чёт не сработало
        }
        return * this;
    }
private:
    size_t size_;
    int * data_;
};

//  Запрет копирования объектов
//для этого нужно объявить конструктор и оператор приватными, и не определять их,
//при обращении из-вне класса -> ошибка(нет доступа)
//но тода при компиляции - вызове их ИЗ методов класса будут ошибки линковки(потому что не определены)
struct ArrZ
{
    ArrZ() {}
private:
    ArrZ(ArrZ const & a); // запрет на копирование
    ArrZ & operator =(ArrZ const & a); // запрет оператора

    size_t size_;
    int *  data_;
};

int main(int argc, char *argv[])
{
    Arr1 a(10);
    Arr1 b(20);
    Arr1 c = a; // копирование
    b = a; /* присваивание, тут ещё будет утечка памяти, так как ссылка
            на дин.массив останется, но никто на неё не указывает */
    return 0;
}
