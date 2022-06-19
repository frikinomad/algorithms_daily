/*WAP to input data of two students and display the name of the student who got highest marks*/
#include<stdio.h>
#include<conio.h>
struct student{   
	int roll;
	char name[20];
	float per;
};
main(){   
    struct student s1,s2;
	printf("Enter roll and per of s1 ");
	scanf("%d%f",&s1.roll,&s1.per);
	printf("Enter name of s1 ");
	fflush(stdin);
	gets(s1.name);
	printf("Enter roll and per of s2 ");
	scanf("%d%f",&s2.roll,&s2.per);
	printf("Enter name of s2 ");
	fflush(stdin);
	gets(s2.name);
	
	if(s1.per > s2.per)
		printf("%s got highest percentage",s1.name);
	else if(s2.per > s1.per)
		printf("%s got highest percentage",s2.name);
	else
		printf("Equal percentage");
}    













