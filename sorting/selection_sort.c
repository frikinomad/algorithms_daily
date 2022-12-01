#include <stdio.h>
#include<conio.h>
int main() {
    int t;
    // int a[]={4,6,1,0,7};
    int a[20],n;
    printf("enter number of elements: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("enter number %d",i);
        scanf("%d",&a[i]);
    }
    
    //sorting algorithm
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    //displaying the array
    for(int i=1;i<=n;i++){
        printf("%d",a[i]);
    }
    return 0;
    getch();
}

