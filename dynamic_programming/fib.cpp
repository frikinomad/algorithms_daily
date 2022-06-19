#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int fib(int n, map<int, int> &memo){
    auto it = memo.find(n);
    if(it->first && n>2){   //this n>2 condition is necessary since it was returning 1(key) value(0) which was ruining the program
      //  cout<<it->first<<"  "<<it->second<<"\n";
        return it->second;
    }
    if(n<=2){
        return 1;
    }
    memo.insert(pair<int,int>(n, (fib(n-1, memo) + fib(n-2, memo))));

    auto p = memo.find(n);
//    cout<<p->first<<"\t"<<p->second<<"\n";
    return p->second;
}
int main(){
    map<int, int> memo;
    int x = fib(20, memo);
    cout<<x;
}
