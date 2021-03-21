#include <stdio.h>

char* myStrchr(const char *str, char ch)
{
    if(str == NULL) return NULL;

    char *p = NULL;
    const char *s = str;

    for(;s != '\0';s++)
    {
        if(*s == ch){
            p = (char *)s;
            break;
        }
    }
    return p;
}

int main()
{
    char *p_ret = NULL;
    const char *str = "hello world";

    p_ret = myStrchr(str,'l');

    printf("ret = %s\n",p_ret);

    return 0;
}
