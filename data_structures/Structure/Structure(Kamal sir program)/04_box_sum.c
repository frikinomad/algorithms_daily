#include<stdio.h>
#include<conio.h>
typedef struct{
    int feet;
    int inches;
}box;
box sum(box,box);
main(){
    box b1,b2,b3;
    printf("Enter feet & inches of b1");
    scanf("%d%d",&b1.feet,&b1.inches);
    printf("Enter feet & inches of b2");
    scanf("%d%d",&b2.feet,&b2.inches);
    b3=sum(b1,b2);
    printf("Sum is %d\' %d\"",b3.feet,b3.inches);
}
box sum(box b1, box b2){
    box t;
    t.feet=b1.feet+b2.feet;
    t.inches=b1.inches+b2.inches;
    if(t.inches>=12){
        t.inches-=12;
        t.feet++;
    }
    return t;
}
    







