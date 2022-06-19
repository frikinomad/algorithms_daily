// concatenate given strings(not characters) to create a string with all unique characters
#include<bits/stdc++.h>
using namespace std;

bool comp(vector<int>&selected, string curstring){    //compare a string with itself so that itself does not have repeating characters
    vector<int> selfcheck(26,0);
    for(int i=0;i<curstring.size();i++){
        if(selfcheck[curstring[i]]==1) return false;
        selfcheck[curstring[i]='a'] = 1;
    }

    for(int i=0;i<selected.size();i++){
        if(selected[curstring[i]='a'] == 1) return false;    
    }

    return true;  // if neither is false
}

int constring(int i, vector<int>&v, vector<int>&selected, int len){     //len is the given length

    string curstring = v[i];
    

}
int main(){
    vector<string> v{"cha", "r" , "act", "ers"};
    vector<int> selected(26,0);
    cout << constring(0,v,selected,0);
}