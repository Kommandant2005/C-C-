#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter your Age: ");
    int x;
    scanf("%d",&x);
    if (x>=90){
        printf("You are an nonagenarian");
    }
    else if (x>=80 && x<90){
        printf("You are an octagenarian");
    }
    else if (x>=70 && x<80){
        printf("You are an heptagenarian");
    }
    else if (x>=60 && x<70){
        printf("You are an hexagenarian");
    }
    else if (x>=50 && x<60){
        printf("You are an pentagenarian");
    }
    else if (x>=40 && x<50){
        printf("You are an tetragenarian");
    }
    else if (x>=30 && x<40){
        printf("You are an trigenarian");
    }
    else if (x>=20 && x<30){
        printf("You are an duogenarian");
    }
    else if (x>=10 && x<20){
        printf("You are an teenager");
    }
    else {
        printf("You are an baby");
    }
}
