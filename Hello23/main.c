#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *ptr = alphabet;
    while (*ptr != '\0'){
        printf("%c\n",*ptr);
        ptr++;
    }
}
