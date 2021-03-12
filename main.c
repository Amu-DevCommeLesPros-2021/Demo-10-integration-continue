#include "test_harness.h"

int const tests_total = 14;
int const test_column_width = 40;

int voyelles(char const* texte)
{
    int v = 0;
    for(; *texte; ++texte)
    {
        switch(*texte)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                ++v;
                break;
        }
    }

    return 0;
}

int main()
{
    TEST(voyelles("")           == 0);
    TEST(voyelles("b")          == 0);
    TEST(voyelles("bbb")        == 0);
    TEST(voyelles("bcdf")       == 0);
    TEST(voyelles("@*((^353")   == 0);

    TEST(voyelles("a")      == 1);
    TEST(voyelles("aaa")    == 3);
    TEST(voyelles("aei")    == 3);
    TEST(voyelles("aeiouy") == 6);
    
    TEST(voyelles("ab")     == 1);
    TEST(voyelles("ba")     == 1);
    TEST(voyelles("abc")    == 1);
    TEST(voyelles("abezi")  == 3);
    TEST(voyelles("banane") == 3);

    return 0;
}
