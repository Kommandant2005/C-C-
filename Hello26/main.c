#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void countVowels(char string[]){
    char vowel[5] = "aeiou";
    int count=0;
    int length_string = strlen(string);
    for (int i = 0 ; i<length_string;i++){
        char *check=strchr(vowel,string[i]);
        if (check == NULL){
            count+=1;
        }
    }

    printf("The number of vowels are %d",length_string-count);
    printf("The number of consonants are %d",count);
}

int main()
{
    printf("Enter a String");
    char string[100];
    scanf("%s",string);
    countVowels(string);
}
