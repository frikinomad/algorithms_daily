#include<iostream>
using namespace std;
void binary_search(int arr[], int n, int x){
    int low=0, high=n;

    while(low<high){
    int mid=(low+high)/2;
        if(arr[mid]==x){
            cout<<"Element found at "<<mid+1<<endl;
            break;
        }
        else if(arr[mid]>x)
            high=mid;
        else if(arr[mid]<x)
            low=mid;
   }
}
int main(){
    int *arr;
    int n;
    cout<<"Enter no of elements "<<endl;
    cin>>n;
    arr = new int[n];

    cout<<"Enter "<<n<<" elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nEnter element to find "<<endl;
    int x;
    cin>>x;
    binary_search(arr, n,x);
}
