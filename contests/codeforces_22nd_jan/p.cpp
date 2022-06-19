#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ; cin>>t  ;
    int val ; 
    while(t--){
        int n , k , count=0; cin>>n ; cin>>k;  
        vector<int>a;
        int b[n] ;
        
        for(int i = 0 ; i<n ; i++){
            cin>>val ; a.push_back(val);
            
        }
            
        for(int i = 0 ; i<n ; i++)
            cin>>b[i];
            
        while((*min_element(a.begin(), a.end()))<=k){
            for(int i = 0 ; i<n ; i++){
                if(a[i]<=k){
                    k= k+b[i];
                    a[i]=INT_MAX; count++ ;
                    break;
                }
                   
                if(count==n)
                    break;
            }
            
        }
        cout<<k<<endl ;
    }
    
}
