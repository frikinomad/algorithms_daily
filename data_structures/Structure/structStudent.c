#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAXNAME 20
struct student
{
    char name[MAXNAME];
    int roll;
    float per;
};
int main(){
    struct student s1,s2;
    //taking input
    printf("Enter Roll No , and Per for student 1: \n");
    scanf("%d%f",&s1.roll,&s1.per);
    printf("Enter name: ");
    fflush(stdin);
    gets(s1.name);
    printf("Enter Roll No , and Per for student 2: \n");
    scanf("%d%f",&s2.roll,&s2.per);
    printf("Enter name: ");
    fflush(stdin);
    gets(s2.name);
    
    if(s1.per > s2.per){
        printf("%s",s1.name);
    }else{
        printf("%s",s2.name);
    }

    getch();

}