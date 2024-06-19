#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("The number is :%d\n",x);
    printf("The Divisibility of the number by %d is %d",y,x%y==0);
}
