#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums{1,-1,0};
    int k = 0;
    int count=0;
    for(int i=0;i<nums.size();i++){
        int sum=0;
        for(int j=i;j<nums.size();j++){
            sum+=nums[j];
            cout << sum << " ";
            if(sum==k) {
                count++;
                break;
            }
        }
        cout << "\n";
    }
    cout << count;
}
