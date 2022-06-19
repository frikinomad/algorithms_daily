#include<stdio.h>
#include<stdlib.h>

int main(){
    int *a,n;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    a = (int *)malloc(sizeof(int)*n);
    if(a==NULL){
        printf("not enough space availaible");
        exit(1);
    }
    for(int i=0;i<n;i++){
        printf("enter element %d of %d ",i+1,n);
        scanf("%d",&a[i]);
    }


    //bubble sort
    int swap = 1;
    for(int i=0;i<n && swap==1;i++){
        swap=0;
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
                swap=1;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    
    free(a);
}