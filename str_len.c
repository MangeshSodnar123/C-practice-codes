#include<stdio.h>
void strLen( char *ptr )
{
    char *str = ptr;
    int len = 0;
    while(*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}

int main()
{
    char str[] = "mangesh";
    int length = strlen(str);
    printf("The length of the given string is %d", length);
    return 0;
}