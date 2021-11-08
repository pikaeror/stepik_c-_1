#ifndef STRING_TEMPLATE_FINDER_2_4_8_TASK_H
#define STRING_TEMPLATE_FINDER_2_4_8_TASK_H
#include <iostream>

class String_Template_Finder_2_4_8_task
{
public:
    String_Template_Finder_2_4_8_task();

    unsigned strlen(const char *str);
    int strstr(const char *s1, const char *s2);

    int memcmp (const char *ptr1,
                const char *ptr2,
                size_t num );

    void test();
};

#endif // STRING_TEMPLATE_FINDER_2_4_8_TASK_H
