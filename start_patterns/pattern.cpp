#include<bits/stdc++.h>
using namespace std;
void pattern1(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern2(){
    for(int i=1;i<=5;i++){
        for(int j=0;j<i;j++){
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern3(){
    int count=0;
    for(int i=1;i<=5;i++){
        count++;
        for(int j=0;j<i;j++){
            cout << count;
        }
        cout << "\n";
    }
}
void pattern4(){
    //n spaces then odd stars
    int n=5;
    for(int i=0;i<5;i++){
        n--;
        for(int k=0;k<=n;k++)    //for spaces
            cout << " ";
        for(int j=0;j<(2*i+1);j++){
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern5(){
    //n spaces then odd stars
    int n=5;
    for(int i=0;i<5;i++){
        n--;
        for(int k=0;k<i;k++)    //for spaces
            cout << " ";
        for(int j=0;j<(2*n+1);j++){
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern6(){
    //n spaces then odd stars
    int n=5;
    for(int i=0;i<5;i++){
        n--;
        for(int k=0;k<n;k++)    //for spaces
            cout << " ";
        for(int j=0;j<(2*i+1);j++){
            cout << "*";
        }
        cout << "\n";
    }
    n=5;    
    for(int i=0;i<5;i++){
        n--;
        for(int k=0;k<i;k++)    //for spaces
            cout << " ";
        for(int j=0;j<(2*n+1);j++){
            cout << "*";
        }
        cout << "\n";
    }
}
int main(){
    // pattern1();
    // pattern2();
    // pattern3();
    // pattern4();
    // pattern5();
    pattern6();
}