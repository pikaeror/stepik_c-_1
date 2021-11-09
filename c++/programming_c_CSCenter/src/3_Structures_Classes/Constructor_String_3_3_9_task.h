#ifndef CONSTRUCTOR_STRING_3_3_9_TASK_H
#define CONSTRUCTOR_STRING_3_3_9_TASK_H
#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {
    /* Реализуйте этот конструктор */
    String(const char *str = "");
    String(size_t n, char c);

    ~String();

    void append(String &other);

    void resize(const size_t &size);

    size_t size;
    char *str;
};


class Constructor_String_3_3_9_task
{
public:
    Constructor_String_3_3_9_task();
};

#endif // CONSTRUCTOR_STRING_3_3_9_TASK_H
