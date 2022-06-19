#include<iostream>
#include<vector>
using namespace std;
int main(){
	int arr[] = {-2,-1, 4, 3};
	int a_size = sizeof(arr)/sizeof(arr[0]);
	vector<int> v(arr, arr+a_size);
	
	int max_now = 0;
	int max_so_far = *(v.begin());	//first element of the vector
	
	if(v.size() == 1){
        cout << *(v.begin());
        return 0;
    }

	//O(n) time
	for(auto i=v.begin()+1;i != v.end(); i++){
		if(max_now<max_so_far){		//main condition
//			cout<< "value given to max_now\n";
			max_now = max_so_far;
		}
		if(max_so_far<0){			//main condition
//			cout<< "set to zero\n";
			max_so_far = 0;
		}
//		cout<< max_now << "\t" << *i<<"\t"<< max_so_far<< "\n";
		max_so_far += *i;
	}
	if(max_so_far>max_now){
		max_now = max_so_far;
	}
	cout << max_now;
}
