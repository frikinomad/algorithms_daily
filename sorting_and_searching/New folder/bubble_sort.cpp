#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;
void bubble_sort(int a[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
}
void print_array(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    auto start = high_resolution_clock::now();

    int a[] = {5,4,1,3,2};
    int n = sizeof(a)/sizeof(a[0]);
    bubble_sort(a, n);
    print_array(a,n);

    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout <<"\n"<<duration.count() << " microseconds";
}
