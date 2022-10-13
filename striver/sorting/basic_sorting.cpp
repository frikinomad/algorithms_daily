#include<bits/stdc++.h>
void bubbleSort(int *a, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i] < a[j]){
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    std::cout << "After Bubble sort: ";
}
void selectSort(int *a, int n){
    //select min element from whole array and swap at last, unlike in bubble sort where you swap each time
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j] < a[min]) min = j;
        }
        std::swap(a[min], a[i]);
    }
    std::cout << "After Selection sort: ";
}
void insertSort(int *a, int n){
    for(int i=1;i<n;i++){
        int j = i;
        while(j>0 && a[j]<a[j-1]){
            std::swap(a[j], a[j-1]);
            j--;
        }
    }
    std::cout << "After Insertion sort: ";
}

int main(){
    int a[] = {8,1,-9,4,9,7};
    int n = sizeof(a)/sizeof(a[0]);
    // bubbleSort(a,n);
    // selectSort(a, n);
    insertSort(a,n);
    for(auto i: a){
        std::cout << i << " ";
    }
}