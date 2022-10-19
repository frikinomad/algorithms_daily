#include<stdio.h>
//the trick is we do from n, n-1... so that when recursion stack return it pops out the elements
void r(int n){ 
  if(n>1)
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


