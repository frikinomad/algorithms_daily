//count the number of min elements needed, don't have to store or return

#include<bits/stdc++.h>
using namespace std;

int change(vector<int>& v, int x){      //recursive
   if(x==0) return 0;       // i.e. target reached
   
   if(x<0) return INT_MAX;

   int mini=INT_MAX;
   for(int i=0;i<v.size();i++){
    int ans = change(v, x-v[i]);    //x is target
    if(ans != INT_MAX)
        mini = min(mini, 1+ans);    //when we include this element what what will be the no of coins, and comp it with min no of 
                                    // of coins, ans+1 cause returning 0 -v[i] is also one coin
   }
   return mini;
}

int changeMem(vector<int>& v, int x, vector<int>& dp){   //memoization
   if(x==0) return 0;       // i.e. target reached
   
   if(x<0) return INT_MAX;

   int mini=INT_MAX;
   for(int i=0;i<v.size();i++){
    int ans = change(v, x-v[i]);    //x is target
    if(ans != INT_MAX)
        mini = min(mini, 1+ans);    //when we include this element what what will be the no of coins, and comp it with min no of 
                                    // of coins, ans+1 cause returning 0 -v[i] is also one coin
   }
   return mini;

}

int main(){
    int n=3;
    int x=7;
    vector<int> v{1,2,3};
    int ans = change(v,x);
    cout << ans;

    //memoization
    vector<int> dp(n,-1);

}