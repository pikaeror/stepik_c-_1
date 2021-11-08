#include "String_Template_Finder_2_4_8_task.h"

String_Template_Finder_2_4_8_task::String_Template_Finder_2_4_8_task()
{

}

unsigned String_Template_Finder_2_4_8_task::strlen(const char *str)
{
    unsigned len = 0;
        for(;*str != '\0'; len++) {
            str++;
        }
        return len;
}

int String_Template_Finder_2_4_8_task::strstr(const char *s1,
                                              const char *s2)
{
    size_t n = strlen(s2);
    size_t start_len = strlen(s1);
    if(!n && !start_len)
        return 0;
    while(*s1)
        if(!memcmp(s1++,s2,n))
            return start_len - strlen(s1) - 1;
    return -1;
}

int String_Template_Finder_2_4_8_task::memcmp(const char *ptr1,
                                              const char *ptr2,
                                              size_t num)
{
    if(!num)
        return 0;
    int v = *ptr1 - *ptr2;
    if(!v)
        return memcmp(++ptr1, ++ptr2, num - 1);
    else
        return v;
}

void String_Template_Finder_2_4_8_task::test()
{
     (0  == strstr("","")) ? std::cout<<"OK : 1"<< " (" << 0 << " : " << (0  == strstr("","")) << " )" << std::endl : std::cout<< "Failed : 1"<< " (" << 0 << " : " << (0  == strstr("","")) << " )" << std::endl ;
      (0 == strstr("a", "")) ? std::cout<<"OK : 2"<< " (" << 0 << " : " <<   (0 == strstr("a", "")) << " )" << std::endl : std::cout<< "Failed : 2"<< " (" << 0 << " : " <<   (0 == strstr("a", "")) << " )" << std::endl ;
      (0 == strstr("a", "a")) ? std::cout<<"OK : 3"<< " (" << 0 << " : " <<   (0 == strstr("a", "a")) << " )" << std::endl : std::cout<< "Failed : 3"<< " (" << 0 << " : " <<   (0 == strstr("a", "a")) << " )" << std::endl ;
      (-1 == strstr("a", "b")) ? std::cout<<"OK : 4"<< " (" << -1 << " : " <<   (-1 == strstr("a", "b")) << " )" << std::endl : std::cout<< "Failed : 4"<< " (" << -1 << " : " <<   (-1 == strstr("a", "b")) << " )" << std::endl ;

      (0 == strstr("aa", "")) ? std::cout<<"OK : 5"<< " (" << 0 << " : " <<   (0 == strstr("aa", "")) << " )" << std::endl : std::cout<< "Failed : 5"<< " (" << 0 << " : " <<   (0 == strstr("aa", "")) << " )" << std::endl ;
      (0 == strstr("aa", "a")) ? std::cout<<"OK : 6"<< " (" << 0 << " : " <<   (0 == strstr("aa", "a")) << " )" << std::endl : std::cout<< "Failed : 6"<< " (" << 0 << " : " <<   (0 == strstr("aa", "a")) << " )" << std::endl ;
      (0 == strstr("ab", "a")) ? std::cout<<"OK : 7"<< " (" << 0 << " : " <<   (0 == strstr("ab", "a")) << " )" << std::endl : std::cout<< "Failed : 7"<< " (" << 0 << " : " <<   (0 == strstr("ab", "a")) << " )" << std::endl ;
      (1 == strstr("ba", "a")) ? std::cout<<"OK : 8"<< " (" << 1 << " : " <<   (1 == strstr("ba", "a")) << " )" << std::endl : std::cout<< "Failed : 8"<< " (" << 1 << " : " <<   (1 == strstr("ba", "a")) << " )" << std::endl ;
      (-1 == strstr("bb", "a")) ? std::cout<<"OK : 9"<< " (" << -1 << " : " <<   (-1 == strstr("bb", "a")) << " )" << std::endl : std::cout<< "Failed : 9"<< " (" << -1 << " : " <<   (-1 == strstr("bb", "a")) << " )" << std::endl ;

      (0 == strstr("aaa", "")) ? std::cout<<"OK : 10"<< " (" << 0 << " : " <<   (0 == strstr("aaa", "")) << " )" << std::endl : std::cout<< "Failed : 10"<< " (" << 0 << " : " <<   (0 == strstr("aaa", "")) << " )" << std::endl ;
      (0 == strstr("aaa", "a")) ? std::cout<<"OK : 11"<< " (" << 0 << " : " <<   (0 == strstr("aaa", "a")) << " )" << std::endl : std::cout<< "Failed : 11"<< " (" << 0 << " : " <<   (0 == strstr("aaa", "a")) << " )" << std::endl ;
      (1 == strstr("abc", "b")) ? std::cout<<"OK : 12"<< " (" << 1 << " : " <<   (1 == strstr("abc", "b")) << " )" << std::endl : std::cout<< "Failed : 12"<< " (" << 1 << " : " <<   (1 == strstr("abc", "b")) << " )" << std::endl ;
      (2 == strstr("abc", "c")) ? std::cout<<"OK : 13"<< " (" << 2 << " : " <<   (2 == strstr("abc", "c")) << " )" << std::endl : std::cout<< "Failed : 13"<< " (" << 2 << " : " <<   (2 == strstr("abc", "c")) << " )" << std::endl ;
      (-1 == strstr("abc", "d")) ? std::cout<<"OK : 14"<< " (" << -1 << " : " <<   (-1 == strstr("abc", "d")) << " )" << std::endl : std::cout<< "Failed : 14"<< " (" << -1 << " : " <<   (-1 == strstr("abc", "d")) << " )" << std::endl ;

      (-1 == strstr("a", "aa")) ? std::cout<<"OK : 15"<< " (" << -1 << " : " <<   (-1 == strstr("a", "aa")) << " )" << std::endl : std::cout<< "Failed : 15"<< " (" << -1 << " : " <<   (-1 == strstr("a", "aa")) << " )" << std::endl ;
      (-1 == strstr("a", "ba")) ? std::cout<<"OK : 16"<< " (" << -1 << " : " <<   (-1 == strstr("a", "ba")) << " )" << std::endl : std::cout<< "Failed : 16"<< " (" << -1 << " : " <<   (-1 == strstr("a", "ba")) << " )" << std::endl ;
      (-1 == strstr("a", "ab")) ? std::cout<<"OK : 17"<< " (" << -1 << " : " <<   (-1 == strstr("a", "ab")) << " )" << std::endl : std::cout<< "Failed : 17"<< " (" << -1 << " : " <<   (-1 == strstr("a", "ab")) << " )" << std::endl ;
      (-1 == strstr("a", "bb")) ? std::cout<<"OK : 18"<< " (" << -1 << " : " <<   (-1 == strstr("a", "bb")) << " )" << std::endl : std::cout<< "Failed : 18"<< " (" << -1 << " : " <<   (-1 == strstr("a", "bb")) << " )" << std::endl ;

      (-1 == strstr("a", "aaa")) ? std::cout<<"OK : 19"<< " (" << -1 << " : " <<   (-1 == strstr("a", "aaa")) << " )" << std::endl : std::cout<< "Failed : 19"<< " (" << -1 << " : " <<   (-1 == strstr("a", "aaa")) << " )" << std::endl ;
      (-1 == strstr("aa", "aaa")) ? std::cout<<"OK : 20"<< " (" << -1 << " : " <<   (-1 == strstr("aa", "aaa")) << " )" << std::endl : std::cout<< "Failed : 20"<< " (" << -1 << " : " <<   (-1 == strstr("aa", "aaa")) << " )" << std::endl ;
      (0 == strstr("aaa", "aaa")) ? std::cout<<"OK : 21"<< " (" << 0 << " : " <<   (0 == strstr("aaa", "aaa")) << " )" << std::endl : std::cout<< "Failed : 21"<< " (" << 0 << " : " <<   (0 == strstr("aaa", "aaa")) << " )" << std::endl ;
      (0 == strstr("aaab", "aaa")) ? std::cout<<"OK : 22"<< " (" << 0 << " : " <<   (0 == strstr("aaab", "aaa")) << " )" << std::endl : std::cout<< "Failed : 22"<< " (" << 0 << " : " <<   (0 == strstr("aaab", "aaa")) << " )" << std::endl ;
      (1 == strstr("baaa", "aaa")) ? std::cout<<"OK : 23"<< " (" << 1 << " : " <<   (1 == strstr("baaa", "aaa")) << " )" << std::endl : std::cout<< "Failed : 23"<< " (" << 1 << " : " <<   (1 == strstr("baaa", "aaa")) << " )" << std::endl ;
      (1 == strstr("baaaa", "aaa")) ? std::cout<<"OK : 24"<< " (" << 1 << " : " <<   (1 == strstr("baaaa", "aaa")) << " )" << std::endl : std::cout<< "Failed : 24"<< " (" << 1 << " : " <<   (1 == strstr("baaaa", "aaa")) << " )" << std::endl ;
      (1 == strstr("baaab", "aaa")) ? std::cout<<"OK : 25"<< " (" << 1 << " : " <<   (1 == strstr("baaab", "aaa")) << " )" << std::endl : std::cout<< "Failed : 25"<< " (" << 1 << " : " <<   (1 == strstr("baaab", "aaa")) << " )" << std::endl ;
      (-1 == strstr("abd", "abc")) ? std::cout<<"OK : 26"<< " (" << -1 << " : " <<   (-1 == strstr("abd", "abc")) << " )" << std::endl : std::cout<< "Failed : 26"<< " (" << -1 << " : " <<   (-1 == strstr("abd", "abc")) << " )" << std::endl ;

      (2 == strstr("ababc", "abc")) ? std::cout<<"OK : 27"<< " (" << 2 << " : " <<   (2 == strstr("ababc", "abc")) << " )" << std::endl : std::cout<< "Failed : 27"<< " (" << 2 << " : " <<   (2 == strstr("ababc", "abc")) << " )" << std::endl ;
      (3 == strstr("abdabc", "abc")) ? std::cout<<"OK : 28"<< " (" << 3 << " : " <<   (3 == strstr("abdabc", "abc")) << " )" << std::endl : std::cout<< "Failed : 28"<< " (" << 3 << " : " <<   (3 == strstr("abdabc", "abc")) << " )" << std::endl ;
}
