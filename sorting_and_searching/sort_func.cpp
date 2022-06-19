//merge & sort 2 array without extra space
/*
Input:
N = 4, M = 5
arr1[] = {1, 3, 5, 7}
arr2[] = {0, 2, 6, 8, 9}
Output: 0 1 2 3 5 6 7 8 9
*/
#include<iostream>
#include<chrono>
#include<algorithm>
#include<vector>
using namespace std;
using namespace std::chrono;
int main(){

    auto start = high_resolution_clock::now();

    int a1[] = {1, 3, 5, 7};
    int n1 = sizeof(a1)/sizeof(a1[0]);
    int a2[] = {0, 2, 6, 8, 9};
    int n2 = sizeof(a2)/sizeof(a2[0]);

    vector <int> v1(a1,a1+n1);
    vector <int> v2(a2,a2+n2);

    for(auto i = v1.begin(); i!=v1.end();i++){
        v2.push_back(*i);
    }
    for(auto i=v2.begin(); i!=v2.end();i++){
        cout<<*i<<" ";
    }
    cout<<"\n";
    sort(v2.begin(), v2.end());

    for(auto i=v2.begin(); i!=v2.end();i++){
        cout<<*i<<" ";
    }
    cout<<"\n";
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout << duration.count() << " microseconds";


}
