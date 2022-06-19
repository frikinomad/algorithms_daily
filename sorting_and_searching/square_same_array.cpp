//check if, for all elements in array there square exist in other array
#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> a {121, 144, 19, 161, 19, 144, 19, 11};
	vector<int> b {14641, 20736, 361, 25921, 361, 20736, 362, 121};
	int count=0;
//	cout << float(sqrt(362));
	for(int x: b){
		int s = float(sqrt(x));
		auto found = find(begin(a), end(a), s);
		cout << x << " " << s << " " << *found << "\n";
		
		if(*found == 0) {
			cout << false;
		}
	}
	cout <<  true;
}

