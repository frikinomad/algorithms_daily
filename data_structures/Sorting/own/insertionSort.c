#include<stdio.h>
int main(){
    int i,j,n,a[10],item;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter element %d of %d: ",i+1,n);
        scanf("%d",&a[i]);
    }

    for(int i=1;i<n;i++){
        item=a[i];
        j=i-1;
        while(j>=0 && a[j]>item){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=item;
    }
    
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}