#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float sqroot(int x){
    return sqrt(x);
}
int main()
{
    printf("Enter a number");
    int x;
    scanf("%d",&x);
    float sqrts=sqroot(x);
    printf("%.2f",sqrts);
}
