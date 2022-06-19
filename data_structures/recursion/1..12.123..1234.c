#include<stdio.h>
void r(int n)
{ if(n>1)
   r(n-1);
   printf("%d ",n);
   
}
void f(int n)
{ 
  if(n==0)
  return;
  else
  { f(n-1);
    r(n);
  } 
  printf("\n");
}
int main()
{ f(5);
}


