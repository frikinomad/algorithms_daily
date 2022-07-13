//similar to max_non_adj_sum.cpp, refer notes for more detail
#include <bits/stdc++.h>
using namespace std;

int help4(vector<int>& v, int n){       //space optimization
    
    int prev1 = v[0];
    int prev2 = 0;
    for(int i=1;i<n;i++){
        int incl = prev2 + v[i];
        int excl = prev1 + 0; 
        int ans = max(incl, excl);
        prev2 = prev1;
        prev1 = ans;
    }
    return prev1;
}
int main(){
    vector<int> v{2,1,4,9};

    int n = v.size();

    vector<int> first, second;
    for(int i=0;i<n;i++){
        if(i!=n-1)
            first.push_back(v[i]);
        if(i!=0)
            second.push_back(v[i]);
    }

    cout << max(help4(first, first.size()),help4(second, second.size()));
}