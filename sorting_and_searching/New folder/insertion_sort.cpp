#include<iostream>
using namespace std;
int main(){
    int a[] = {2,4,1,6,5,10,9,212};
    int n = sizeof(a)/sizeof(a[0]);

    for(int i=1;i<n;i++){
        for(int j=i-1; j>=0 && a[j]>a[j+1]; j--){
            int t = a[j];
            a[j] = a[j+1];
            a[j+1] = t;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}
