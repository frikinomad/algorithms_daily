#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> f{0,1,0,1,0,1,0,0};
	int n=1;

        int count = 0;
        
        if(f.size()==1 && f[0] == 0){
            cout << true;
        }
        
        if(f[0] == 0 && f[1] != 1){
            f[0] = 1;
            count++;
        }
        for(int i=1;i<f.size();i++){
            if(f[i] == 0 && f[i-1]!=1 && f[i+1] != 1){
                f[i] = 1;
                count++;
            }
        }
        
		if(count >= n)
            cout<< true;
        else 
            cout << false;
    }
