#include <stdio.h>
#include <stdlib.h>

struct studs {
    char name[1000];
    int roll;
    float cgpa;
};

int main()
{
    printf("First Dictionary");
    int rollno;
    char name1[100];
    float gpa;
    scanf("%d %s %f",&rollno,name1,&gpa);
    printf("Student %s with roll no %d scored %f cgpa",name1,rollno,gpa);

}
