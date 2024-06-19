#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a Character\n");
    char ch;
    scanf("%c",&ch);
    if(ch>='0' && ch<='9'){
        printf("It is a Digit");
    }
    else{
        printf("It is not a digit");
    }

}
