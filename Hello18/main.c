#include <stdio.h>
#include <stdlib.h>
int get_Power(int x){
    return x*x;

}


int main()
{
    printf("Enter a number");
    int x;
    scanf("%d",&x);
    int power = get_Power(x);
    printf("%d",power);
}
