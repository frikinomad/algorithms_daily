#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
    int *a , n,i,j,minpos,t;
    printf("Enter number of Elements: ");
    scanf("%d",&n);

    a = (int *)malloc(sizeof(int)*n);
    
    if(a==NULL){
        printf("memory not availaible");
        exit(1);
    }

    for(i=0;i<n;i++){
        printf("Enter next element\n");
        scanf("%d",&a[i]);
    }

    //selection sort
    for(i=0;i<n;i++){
        minpos = i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[minpos]){
                minpos = j;
            }
        }
        if(i!= minpos){         //i.e. if the value of i is changes then it means a smaller element is found so swap.
            t = a[i];
            a[i] = a[minpos];
            a[minpos] = t;
        }
    }
    //printing the sorted array
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    free(a);
    getch();
    return 0;
}
