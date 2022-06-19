#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char s[] = "rhar";
	int n = strlen(s);
	n--;
	cout<<n<<endl;
	for(int i=0;i<=n;i++){
		if(s[i]!=s[n-i]){
			cout<<s[i]<<endl;
			cout<<"not a pallindrome\t";
			break;
		}
		else
			cout<<"pallindrome"<<endl;
	}
}
