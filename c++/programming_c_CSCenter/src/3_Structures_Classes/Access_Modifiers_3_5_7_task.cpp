#include "Access_Modifiers_3_5_7_task.h"

Access_Modifiers_3_5_7_task::Access_Modifiers_3_5_7_task()
{

}

void Access_Modifiers_3_5_7_task::test()
{
    char ch = 'r';
    double db = 0.4;
    int in = 8;
    Cls inner_value(ch, db, in);
    printf("first value read: %s\n", get_c(inner_value) == ch ? "True" : "False");
    printf("second value read: %s\n", get_d(inner_value) == db ? "True" : "False");
    printf("third value read: %s\n", get_i(inner_value) == in ? "True" : "False");
}

char &Access_Modifiers_3_5_7_task::get_c(Cls &cls)
{
    Cls *value = &cls;
    char &t = *(char*)value;
    return t;
}

double &Access_Modifiers_3_5_7_task::get_d(Cls &cls)
{
    Cls *value = &cls;
    char *ch = (char*)value;
    double &t = *(double*)(ch + sizeof (char*));
    return t;
}

int &Access_Modifiers_3_5_7_task::get_i(Cls &cls)
{
    Cls *value = &cls;
    char *ch = (char*)value;
    int &t = *(int*)(ch + sizeof (char*) + sizeof (double*));
    return t;
}
