#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int size){
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void merge(int arr[], int l, int mid, int r)
{
    // Your code here
    int i=l;
    int j=mid+1;
    int f=l;        //temp array index
    int temp[100000];    //cause max elements will be these many only;
    while(i<=mid && j<=r){      //just to check if the values are in bound
        if(arr[i]<arr[j]){       //left half first element is smaller then right half first element 
            temp[f]=arr[i];
            i++;
        }else{
            temp[f]=arr[j];
            j++;
        }
        f++;
    }
        
    if(i>mid){          //i.e. left elements are over and right ones are remaining
        while(j<=r){    //copy all remaining right elements to the array
            temp[f] = arr[j];
            j++;
            f++;
        }
    }else{              //for remaining in left half
        while(i<=mid){    //copy all remaining left elements to the array
            temp[f] = arr[i];
            i++;
            f++;
        }
    }
    
    for(int f=l;f<=r;f++){       //copying all elements from temp to main array
        arr[f] = temp[f];
    }
}
void mergeSort(int arr[], int l, int r){
    //code here
    //first divide the array recursively and then merge the array in the merge code
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }  
}

int main(){
    int n=5,i;
    int arr[n]={4,1,3,9,7};
    mergeSort(arr, 0, n-1);
    printArray(arr, n);
}
