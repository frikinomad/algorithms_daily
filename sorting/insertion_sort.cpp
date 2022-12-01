#include<iostream>
using namespace std;
int main(){
    int a[] = {2,4,1,3,5};
    int n = sizeof(a)/sizeof(a[0]);
    int count=0, j;
    for(int i=0; i< n; i++){
        int item = a[i];
        for(j=i-1;j>=0 && item<a[j];j--){
            count++;
            a[j+1] = a[j];
        }
        a[j+1] = item;
    }
    cout<<count<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}
