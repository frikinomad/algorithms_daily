#include<stdio.h>
void r(int i)
{ if(i>1)
   r(i-1);
   printf("%d ",i);
   
}
void f(int i,int n)
{ 
  if(i>n)
  return;
  else
  { f(i+1,n);
    r(i);
  } 
  printf("\n");
}
int main()
{ f(1,5);
}


//
//for(i=1;i<=n;i++)
//     printf("%d",i);
