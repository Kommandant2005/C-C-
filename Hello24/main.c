#include <stdio.h>
#include <string.h>

void Salted(char password[]){
    char salt[] = "12345";
    char newPass[200];
    strcpy(newPass,password);
    strcat(newPass,salt);
    puts(newPass);
}

int main(){
    printf("Enter your password\n");
    char password[100];
    scanf("%s",password);
    Salted(password);


}
