#include<iostream>
using namespace std;
void r(int i,int n){ 
   if(i==n+1)
   return;
   r(i+1,n);
   cout << i;
}
int main(){ 
   r(1,5);
}

