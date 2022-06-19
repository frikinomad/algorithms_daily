#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void substr(int i, string temp, string&sc, vector<string>&ans){

    if(i==sc.size()){ 
        ans.push_back(temp);
        return;
    }

    temp.push_back(sc[i]);
    substr(i+1,temp,sc,ans);
    temp.pop_back();
    
    substr(i+1,temp,sc,ans);
}
int main(){
    vector<string> ans;
    string sc = "abc";
    string temp="";
    substr(0,temp,sc,ans);
    sort(ans.begin(), ans.end());
    ans.erase(ans.begin());
    for(auto x: ans){
        cout << x << "\t";
    } 
}