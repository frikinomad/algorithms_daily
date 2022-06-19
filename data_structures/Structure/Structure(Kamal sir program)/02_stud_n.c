/*WAP to input data of n students and display the name of the student who got highest marks(using static array)*/
#include<stdio.h>
#include<conio.h>
struct student
{
    int roll;
    char name[10];
    float per;
};
main()
{
    struct student s[10];
    int n,i,maxpos;
    float maxper;
    
    printf("Enter number of students ");
    scanf("%d",&n);
    
    maxper=0;
    for(i=0;i<n;i++)
    {
        printf("Enter roll,name & per of student %d",i+1);
        scanf("%d%s%f",&s[i].roll,s[i].name,&s[i].per);
        if(s[i].per>maxper)
        {
            maxper=s[i].per;
            maxpos=i;
        }
    }
    printf("%s got highest percent",s[maxpos].name);
    getch();
}    
