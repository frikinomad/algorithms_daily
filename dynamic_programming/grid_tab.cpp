#include<iostream>
using namespace std;
int grid(int m, int n){
    int** table = new int*[m+1];

    for (int i = 0; i < m; i++) {
        table[i] = new int[n+1]{0};
    }


    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++) {
            cout<<table[i][j]<<"\t";
        }
        cout<<endl;
    }


    table[1][1] = 1;

    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            cout<<table[i][j]<<"\t";
            if(j+1 <= n)
                table[i][j+1] += table[i][j];
            if(i+1 <= m)
                table[i+1][j] += table[i][j];
        }
        cout<<endl;
    }

    return table[m][n];
}
int main(){
    int a = grid(3,2);
    cout<<a;
}
