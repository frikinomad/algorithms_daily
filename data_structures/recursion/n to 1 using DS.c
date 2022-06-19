#include<stdio.h>
void r(int i,int n)
{ if(i<n)
   r(i+1,n);
   printf("%d ",i);
   
}
int main()
{ r(1,5);
}

