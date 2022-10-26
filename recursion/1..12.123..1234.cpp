#include<stdio.h>
#include<iostream>
using namespace std;
//the trick is we do from n, n-1... so that when recursion stack return it pops out the elements
void r(int n){ 
  if(n>1)
   r(n-1);
   printf("%d ",n);
}
void f(int n){ 
  if(n==0)
  return;
  else
  { f(n-1);
    r(n);
  } 
  printf("\n");
}

//repeating above func for practice
void help1(int n){
  if(n<0)
    return;
  
  help1(n--);
  cout << n;
}
void help(int n){
  if(n<=0){
    return;
  }else{
  help(n--);
  help1(n);}
}

int main(){
  // f(5);
  help(5);
}


