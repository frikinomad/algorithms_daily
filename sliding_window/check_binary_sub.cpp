//Check If a String Contains All Binary Codes of Size K, like for k=2, all codes will be 00, 01, 10, 11 - i.e. 2^k

#include<bits/stdc++.h>
using namespace std;
bool hasAllCodes(string&s, int k) {
    //using sliding window to generate all possible substring of length k & then check if equal to total no possible with k
    set<string> memo;
    if(s.size() == 1 || s.size() < k){
        return false;
    }
    for(int i=0;i<s.size()-k+1;i++){
        string t;
        for(int j=0;j<k;j++){
            t.push_back(s[i+j]);
        }
        memo.insert(t);
    }
    if(memo.size() == pow(2,k)) return true;
    else return false;
}
int main(){
    string s = "00110110";
    int k=2;
    cout << hasAllCodes(s,k);
}