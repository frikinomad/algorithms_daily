#include<stdio.h>
#include<conio.h>
struct box
{
    int feet;
    int inches;
};
struct box sum(struct box,struct box); //as here we just tell the type of the variables and the function itself
int main(){
    struct box b1,b2;
    printf("Enter feet and inches for b1: ");
    scanf("%d%d",&b1.feet,&b1.inches);
    printf("Enter feet and inches for b2: ");
    scanf("%d%d",&b2.feet,&b2.inches);
    sum(b1,b2);
    getch();
}
struct box sum(struct box b1 ,struct box b2){
    struct box t;
    t.inches = b1.inches;
    b1.inches = b2.inches;
    b2.inches = t.inches;

    t.feet = b1.feet;
    b1.feet = b2.feet;
    b2.feet = t.feet;

    printf("%d%d\n",b1.feet,b1.inches);
    printf("%d%d",b2.feet,b2.inches);
    
}