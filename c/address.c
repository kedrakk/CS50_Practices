#include <stdio.h>

int main(void)
{
    //! Have to check with string 
    char *s="HI!";
    char *p=&s[0];
    printf("%p\n",p);
    printf("%p\n",s);
}