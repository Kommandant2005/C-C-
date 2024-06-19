#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter number of Rows,Columns");
    int x,y;
    scanf("%d %d",&x,&y);
    for (int i = 0; i<=x ; i++){
        for ( int j = 0 ; j<=y ; j++){
            printf("*");
        }
        printf("\n");
    }

}
