#ifndef CONSTRUCTOR_STRING_3_3_9_TASK_H
#define CONSTRUCTOR_STRING_3_3_9_TASK_H
#include <cstddef> // size_t
#include <cstring> // strlen, strcpy
#include <iostream>

//struct String {
//    /* Реализуйте этот конструктор */
//    String(const char *str = "");
//    String(size_t n, char c);

//    ~String();

//    char & at(size_t idx)       { return str[idx]; }
//    char   at(size_t idx) const { return str[idx]; }

//    void append(String &other);

//    void resize(const size_t &size);

//    size_t size;
//    char *str;
//};


class Constructor_String_3_3_9_task
{
public:
    Constructor_String_3_3_9_task();

    void foo(char) { std::cout << "char" << std::endl; }
    void foo(signed char) { std::cout << "signed char" << std::endl; }
    void foo(unsigned char) { std::cout << "unsigned char" << std::endl; }

    void promotion(char &) { std::cout << "char" << std::endl; }
    void promotion(int  &) { std::cout << "int"  << std::endl; }
    void promotion(long &) { std::cout << "long" << std::endl; }
};

#endif // CONSTRUCTOR_STRING_3_3_9_TASK_H
