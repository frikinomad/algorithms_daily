// armstrong number, sum of each digit in a number raised to the power of number of digit is equal to that number itself 
#include<bits/stdc++.h>
using namespace std;
int no_of_digits(int n){
    int count=0;
    while(n!=0){
        count++;
        n=n/10;
    }
    return count;
}
bool check_armstrong(int a, int count){
    int n = a;
    int sum=0;
    while(n!=0){
        int x = n%10;
        cout << sum << "\n";
        cout << pow(x, count) << "\n";
        sum = sum + pow(x, count);
        n=n/10;
    }
    cout << sum;
    if(sum == n) return true;
    else return false;
}
int main(){
    int a = 153;
    int count = no_of_digits(a);
    cout << check_armstrong(a, count);
}