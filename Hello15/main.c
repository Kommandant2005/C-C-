#include <stdio.h>
#include <stdlib.h>

int Sum(int a,int b){
    return a+b;

}

int main()
{
    int x,y;
    printf("Enter Two Numbers");
    scanf("%d %d",&x,&y);
    int sum;
    sum=Sum(x,y);
    printf("%d",sum);
}

