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
void pattern7(){
    int n = 5;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout << "\n";
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<(n-i-1);j++){
            cout << "*";
        }
        cout << "\n";
    }

}
void pattern8(){
    int n = 5;
    int count=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << count;
            if(count) count = 0;
            else count = 1;
        }
        cout << "\n";
    }
}
void pattern9(){
    int n = 4;
    for(int i=0;i<n;i++){
        for(int j=1;j<i+1;j++){
            cout << j;
        }
        for(int k=0;k<(n+1-2*i);k++){
            cout << " ";
        }
        for(int j=i;j>=1;j--){
            cout << j;
        }
        cout << "\n";
    }
}
void pattern10(){
    int count=1;
    int n = 5;
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout << count;
            count++;
        }
        cout << "\n";
    }
}
void pattern11(){
    int n = 5;
    char c = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << char(c + j);
        }
        cout << "\n";
    }
}
void pattern12(){
    int n = 5;
    char c = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << char(c + i);
        }
        cout << "\n";
    }
}
void pattern13(){
    int n = 5;
    char c = 'A';
    for(int i=0;i<n;i++){
        for(int j=i;j>=0;j--){
            cout << char(c + n - j);
        }
        cout << "\n";
    }
}
void pattern14(){
    
}
int main(){
    // pattern1();
    // pattern2();
    // pattern3();
    // pattern4();
    // pattern5();
    // pattern6();
    // pattern7();
    // pattern8();
    // pattern9();
    // pattern10();
    // pattern11();
    // pattern12();
    // pattern13();
    pattern14();
}