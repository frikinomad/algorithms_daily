#include<bits/stdc++.h>
using namespace std;
void letter_comb(int i, string &digits, map<char, string>&m, vector<string>&v, string &temp){
    if(i==digits.size()){       //since we want each subset to be equal to the size of digits
        if(temp.size()!=0)
        v.push_back(temp);
        return;
    }
    string str = m[digits[i]];
    for(int j=0;j<str.size();j++){
        temp.push_back(str[j]);
        letter_comb(i+1, digits, m, v, temp);
        temp.pop_back();
    }
}
int main(){

    string digits="23";

    map<char,string> m;
    m['2'] = "abc";
    m['3'] = "def";
    m['4'] = "ghi";
    m['5'] = "jkl";
    m['6'] = "mno";
    m['7'] = "pqrs";
    m['8'] = "tuv";
    m['9'] = "wxyz";
    
    string temp;
    vector<string> v;
    letter_comb(0, digits, m, v, temp);

    for(auto x: v){
        for(char y: x){
            cout << y;
        }
        cout << " ";
    }
}