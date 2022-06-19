//https://www.geeksforgeeks.org/longest-even-length-substring-sum-first-second-half/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="1234123";
    int reslen=0; 
    for(int i=0;i<s.size();i++){
        int l=i, r=i;
        int l_sum=0, r_sum;
        while(l>=0 && r<s.size() && (l_sum+(int)(s[l])) == (r_sum+(int)(s[r]))){
            if(r-l+1 > reslen){
                reslen = r-l+1;
            }
            l_sum += (int)(s[l]);
            r_sum += (int)(s[r]);
            l--; r++;
        }

    //     sum=0;
    //     l=i; r=i+1;
    //     while(l>=0 && r<s.size() && (sum+(int)(s[l])) == (sum+(int)(s[r]))){
    //         reslen = max(reslen, r-l+1);
    //         l--; r++;
    //     }
    }
    cout << reslen;
}