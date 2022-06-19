#include<stdio.h>
#include<conio.h>
typedef struct{             //this does not have tagname only nickname
    int feet;
    int inches;
}box;
void swap(box *,box *);
main(){
    box b1,b2;
    printf("Enter feet & inches of b1");
    scanf("%d%d",&b1.feet,&b1.inches);
    printf("Enter feet & inches of b2");
    scanf("%d%d",&b2.feet,&b2.inches);
    
    printf("Before Swap b1.feet=%d\tb1.inches=%d\n",b1.feet,b1.inches);
    printf("Before Swap b2.feet=%d\tb2.inches=%d\n\n\n",b2.feet,b2.inches);
    swap(&b1,&b2);
    printf("After Swap b1.feet=%d\tb1.inches=%d\n",b1.feet,b1.inches);
    printf("After Swap b2.feet=%d\tb2.inches=%d\n",b2.feet,b2.inches);
}
void swap(box *p1,box *p2){
    /*1st logic*/
    int t;
    t=p1->feet;
    p1->feet=p2->feet;
    p2->feet=t;
    
    t=p1->inches;
    p1->inches=p2->inches;
    p2->inches=t;
    
    /*2nd logic*/     //with this logic we are swapping the complete structure not one by one as we have done above
/*  box t;
    t=*p1;
    *p1=*p2;
    *p2=t;*/
}
    
