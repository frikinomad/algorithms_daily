#include<iostream>
#include<vector>
using namespace std;

void print(vector<char>& s){
	cout<<s[0];
	cout<<s[1];
}

int main(){
	char s[] =  {'r', 'i'};
    vector<char>v (s,s+2);
	print(v);
}
/* int len=s.size();
    
    for(int i=0,j=len-1; i<j; i++,j--)
    {
        char c=s[i];
        s[i]=s[j];
        s[j]=c;
    }
*/
