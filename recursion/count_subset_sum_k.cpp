#include<bits/stdc++.h>
using namespace std;
int help(int i, int sum, vector<int>& v, int k){
    if(i == v.size()){
        if(sum == k){
            return 1;
        }else{
            return 0;
        }
    }

    sum += v[i];
    int op1 = help(i+1, sum, v, k);
    sum -= v[i];

    int op2 = help(i+1, sum, v, k);

    return op1 + op2;
}
int help2(int i, int sum, vector<int>& v, int k){       //trying to merge the recustion calls in a for loop
    if(i == v.size()){
        if(sum == k) return 1;
        else return 0;
    }

    for(int j=0;j<2;j++){
        sum += help2(i, sum,v,k);
        i++;
    }
    return sum;
}
int main(){
    vector<int> v{1,2,1};
    int k = 2;
    int sum = 0;
    cout << help2(0, 0, v, k);
}