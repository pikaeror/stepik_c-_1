#include "Constructor_String_3_3_9_task.h"

Constructor_String_3_3_9_task::Constructor_String_3_3_9_task()
{

}

//String::String(const char *str)
//{
//    size = std::strlen(str);
//    this->str = new char[size + 1];
//    std::strcpy(this->str, str);
//}

//String::String(size_t n, char c) : size(n)
//{
//    str = new char[size + 1];
//    for(size_t i = 0; i < size; i++)
//        (*(str + i)) = c;
//    (*(str + size + 1)) = '\0';
//}

//String::~String()
//{
//    delete [] str;
//}

//void String::append(String &other)
//{
//    size_t count = size;
//    size_t in = other.size - 1;
//    resize(other.size);
//    size_t newlen = this->size;
//    while (count < newlen--) {
//        *(this->str + newlen) = (*(other.str + in));
//        in--;
//    }
//    (*(this->str + this->size)) = '\0';
//    this->size = std::strlen(this->str);
//}

//void String::resize(const size_t &size)
//{
//    char *str = new char[size + this->size + 1];
//        for(size_t i = 0; i <= this->size; i++) {
//            (*(str + i)) = (*(this->str + i));
//        }
//        (*(str + size + this->size)) = '\0';
//        delete [] this->str;
//        this->str = str;
//        this->size += size;
//}
