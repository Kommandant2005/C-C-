#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter Two Number");
    int x,y;
    scanf("%d %d",&x,&y);
    if (x>=y){
        printf("%d is greater than %d",x,y);
    }
    else{
        printf("%d is greater than %d",y,x);
    }
}
