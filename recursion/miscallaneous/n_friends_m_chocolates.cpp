//distribute m chocolates among n friends and the max and min diff should be less than k
#include<bits/stdc++.h>
using namespace std;
// void make(vector<int> v, int i, int m, int k, int n, vector<int> temp, vector<vector<int>>&ans){
void make(vector<int> v, int i, int m, int k, int n, vector<int> temp, int&ans){
    
    if(i==v.size()){
        // sort(temp.begin(), temp.end());
        int x = *max_element(temp.begin(), temp.end()) - *min_element(temp.begin(), temp.end());
        cout << x << " ";
        // if(temp.size() == m && (temp[temp.size()-1] - temp[0]<=k))
        if(temp.size() == m && (x<=k))
            ans++;
        return;
    }

    temp.push_back(v[i]);
    make(v,i+1,m,k,n,temp,ans);
    temp.pop_back();
    
    make(v,i+1,m,k,n,temp,ans);
}
int main(){
    int n=4,m=2,k=3;
    // vector<vector<int>> ans;
    int ans=0;
    vector<int> v{1,2,3,4,5};
    vector<int> temp;   //to store temp vector
    make(v,0,m,k,n,temp,ans);
    cout << ans;
    // for(vector<int> x: ans){
    //     for(int y: x){
    //         cout << y << " ";
    //     }
    //     cout << "\n";
    // } 
}



// void make(vector<int> v, int i, int m, int k, int n, vector<int> temp, vector<vector<int>>&ans){
    
//     if(i==v.size()){
//         sort(temp.begin(), temp.end());
//         if(temp.size() == m && (temp[temp.size()-1] - temp[0]<=k))
//             ans.push_back(temp);
//         return;
//     }

//     temp.push_back(v[i]);
//     make(v,i+1,m,k,n,temp,ans);
//     temp.pop_back();
    
//     make(v,i+1,m,k,n,temp,ans);
// }

// int possibleWays(int n, int m, int k, vector<int> &v){
//     vector<vector<int>> ans;
//     vector<int> temp;   //to store temp vector
//     make(v,0,m,k,n,temp,ans);
//     return ans.size();
// }