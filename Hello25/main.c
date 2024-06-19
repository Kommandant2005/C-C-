#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Slicer(char string[],int x, int y){
    for (int i = x; i<y+1;i++){
        printf("%c",string[i]);
    }
}


int main()
{
    printf("Enter The String\n");
    char string[100];
    scanf("%s",string);
    int x,y;
    printf("Enter start index and stop index");
    scanf("%d %d",&x,&y);
    Slicer(string,x,y);

}
