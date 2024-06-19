#include <stdio.h>
#include <stdlib.h>

void printAddress(int *n){
    printf("The address is %u\n",n);

}

int main()
{
    int n = 4;
    printAddress(&n);
    printf("The address is %u\n",&n);

}
