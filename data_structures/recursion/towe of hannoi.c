#include<stdio.h>
void r(int n)
{ if(n)
}
void f(int n)
{ 
  if(n==0)
  return;
  f(n-1);
  r(n);
  printf("%d",n);
}
int main()
{ f(5); 
}
