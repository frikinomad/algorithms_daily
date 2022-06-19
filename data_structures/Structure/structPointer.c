#include<stdio.h>
#include<conio.h>
typedef struct structPointer
{
    int feet;
    int inches;
}sp;
sp swap(sp * , sp *);
int main(){
    sp b1,b2;
    printf("Enter feet and inches for b1: ");
    scanf("%d%d",&b1.feet,&b1.inches);
    printf("Enter feet and inches for b2: ");
    scanf("%d%d",&b2.feet,&b2.inches);
    swap(&b1,&b2);

    printf("After swap: %d %d\n",b1.feet,b1.inches);
    printf("After swap: %d %d",b2.feet,b2.inches);

    getch();
}
sp swap(sp *b1,sp *b2){
    sp t;
    t.feet = (*b1).feet;
    (*b1).feet = (*b2).feet;
    (*b2).feet = t.feet;

    t.inches = (*b1).inches;
    (*b1).inches = (*b2).inches;
    (*b2).inches = t.inches;
}
 