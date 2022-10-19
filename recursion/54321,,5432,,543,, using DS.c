#include<stdio.h>
void r(int i,int n)
{ if(i<n)
   r(i+1,n);
   printf("%d ",i);
   
}
void f(int i , int n)
{ 
  if(i>n)
  return;
  else
  { f(i+1,n);
    r(i,n);
  } 
  printf("\n");
}
int main()
{ 
  f(1,5);
}

