#include <stdio.h>
#include <stdlib.h>

void get_Temperature(int x){
    if (x>50){
        printf("Its Hot");
    }
    else if (x>15 && x<50){
        printf("Its Nice");
    }
    else{
        printf("Its Cold");
    }

}

int main()
{
    printf("Enter Temperature");
    int x;
    scanf("%d",&x);
    get_Temperature(x);
}
