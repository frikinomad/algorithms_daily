#include<bits/stdc++.h>
using namespace std;
void pair_sort(vector<int>& a, vector<int> &b, int n){
	pair<int, int> pairt[n];
  
    // Storing the respective array
    // elements in pairs.
    for (int i = 0; i < n; i++) 
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }
  
    // Sorting the pair array.
    sort(pairt, pairt + n);
      
    // Modifying original arrays
    for (int i = 0; i < n; i++) 
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}
int main(){
	int t;
	cin >> t;
	int m=0;
	while(m!=t){
		int n,k;				// k = amount of ram you currently have
		cin >> n >> k;
		vector<int> a;		//memeory required to run
		vector<int> b;	    // how much memeory it gives permanently
		int x;
		map<int, int> memo;
		//taking input
		for(int i=0;i<n;i++){
			cin >> x;
			a.push_back(x);
		}
		//taking input
		for(int i=0;i<n;i++){
			cin >> x;
			b.push_back(x);
		}
		pair_sort(a,b, n);
	
//		for(int x_a: a) cout << x_a << " ";
//		cout << "\n";
//		for(int x_b: b) cout << x_b << " ";
//		cout << "\n";

		//logic
		for(int i=0;i<n;i++){
//			cout << a[i] << " " << k << "\n";
			if(a[i] <= k){
				k += b[i];
			}
		}
		cout << k << "\n";
		m++;
	}
}
