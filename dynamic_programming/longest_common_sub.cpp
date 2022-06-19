#include<bits/stdc++.h>
using namespace std;
int main(){
    string text1 = "abcde", text2="ace";
    int m = text1.size()+1;
    int n = text2.size()+1;

    //creating a 2D array, with m+1 and n+1 size since we need + 1 cause we'll go out of bound and trigger buffer overflow
    //for one string as it might be over but other string might be left so if hit 0 then return max - see video again neetcode
    int** tab = new int*[m];
    for (int i = 0; i < m; i++) {
        tab[i] = new int[n];
    }

    //initialize 2 array with 0
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            tab[i][j] = 0;
        }
    }

    for(int i=m-2;i>=0;i--){        //IMP: use m-2 since final index of each string will be m-2 for ex: abcde e is at index 4 and m=6 
        for(int j=n-2;j>=0;j--){    //same above for n-2
            if(text1[i] == text2[j]){
                tab[i][j] = 1 + tab[i+1][j+1];      //if match then move diagonally
            }else{
                tab[i][j] = max(tab[i+1][j], tab[i][j+1]);  //if not match then move left and right
            }
        }
    }
    
    //display final 2D array
    for(int x=0;x<m-1;x++){
        for(int y=0;y<n-1;y++){
            cout << tab[x][y] << " ";
        }
        cout << "\n";
    }

    cout << tab[0][0];
}
