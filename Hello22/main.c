#include <stdio.h>
#include <stdlib.h>

void greaterNum(int *x, int *y){
    if (*x>*y){
        printf("%d is greater then %d",*x,*y);
    }
    else if(*y>*x){
        printf("%d is greater then %d",*y,*x);
    }
    else{
        printf("Both are equal");
    }

}
int main()
{
    printf("Enter two number");
    int x,y;
    scanf("%d %d",&x,&y);
    greaterNum(&x,&y);
}
