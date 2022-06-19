#include<bits/stdc++.h>
using namespace std;
bool cmp_map(map<char, int> memo_p, map<char, int> memo_s){
    bool flag = true;
    for(auto i=memo_s.begin(), j=memo_p.begin(); j!=memo_p.end(); i++, j++){
        if(i->first == j->first && i->second == j->second) continue;
        else flag=false;
    }
    return flag;
}
int main(){
    string s = "abab";
    string p = "ab";
    map<char, int> memo_p;      //map for pattern search string
    map<char, int> memo_s;      //map for text search string
    
    //inserting into hash map for patter & for first window
    for(int i=0;i<p.size();i++){
        char x = p[i];
        if(memo_p[x]) memo_p[x]++;
        else memo_p[x] = 1;
        char y = s[i];
        if(memo_s[y]) memo_s[y]++;
        else memo_s[y] = 1;
    }
    vector<int> v;
    //comparing above newly created hashmaps
    bool flag = cmp_map(memo_p, memo_s);
    if(flag) v.push_back(0);
    
    int l = 0;      //left pointer i.e. add one digit in right and then remove one digit from the left from hashmap
    for(int i=p.size();i<s.size();i++){
        if(memo_s[s[i]]) memo_s[s[i]]++;
        else memo_s[s[i]] = 1;
        memo_s[s[l]]--;
        if(memo_s[s[l]] == 0)
            memo_s.erase(s[l]);

        l++;

        bool flag = cmp_map(memo_p, memo_s);
        if(flag) v.push_back(l);        //puting l since at any point of time the window starts from l
        
        //window size is from l to i [IMP]
    }
    for(int x: v){
        cout << x << " ";
    }
}