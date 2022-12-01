#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
    int *a , n;
    printf("Enter number of Elements: ");
    scanf("%d",&n);

    a = (int *)malloc(sizeof(int)*n);
    
    if(a==NULL){
        printf("memory not availaible");
        exit(1);
    }

    for(int i=0;i<n;i++){
        printf("Enter next element\n");
        scanf("%d",&a[i]);
    }

    //selection sort
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1;j++){
            if(a[i]>a[j]){
                int t=0;
                t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
    }
    //printing the sorted array
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    free(a);
    getch();
    return 0;
}