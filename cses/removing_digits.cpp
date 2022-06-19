#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int count = 0;
	while(n!=0){
//		cout << "n is: " << n << "\n";
		int t = n;
		int x = t%10;
		int max=x; //to subtract the max number each time

		while(x !=0){
//			cout << "t is: "<< t << "\n";
			t = t/10;
			x = t%10;
			if(x>max) max = x;
		}
//		cout << x << "\n";
		count++;
		n = n - max;
	}
	cout << count;
}
