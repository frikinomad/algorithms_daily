#include<stdio.h>
void prow(int j , int i){
    if(i==0)
        return;
    printf("%d",j);
    prow(j+1,i-1);
}
void pattern(int n, int i){
    if(n==0)
        return;
    prow(1,i);
    printf("\n");
    pattern(n-1,i+1);
}
int main(){
    int n,j,ans;
    printf("Enter number of Rows: ");
    scanf("%d",&n);
    pattern(n,1);
}

