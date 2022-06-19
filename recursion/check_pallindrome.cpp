#include<bits/stdc++.h>
using namespace std;
bool check_pallindrome_reverse(string s){   //using reverse
    string t = s;
    reverse(s.begin(), s.end());
    if(t==s){
        return true;
    }
    else return false;
}
bool check_pallindrome(int i, int p, string s){       //using recursion
    if(i>p) return true;
    if(s[i] == s[p]){
        i+=1; p-=1;
        return check_pallindrome(i,p,s);
    }else return false;
}

int main(){
    string s = "rishi";
    // cout << check_pallindrome_reverse(s);
    cout << check_pallindrome(0, s.size()-1, s);
}
