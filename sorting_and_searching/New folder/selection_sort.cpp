#include<iostream>
using namespace std;
int main(){
    int a[] = {2,4,1,6,5,10,9,212};
    int n = sizeof(a)/sizeof(a[0]);

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}
