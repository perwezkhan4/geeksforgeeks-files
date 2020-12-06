#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int test;
	cin>>test;
	
	while(test--){
	    int m;
	    int n;
		cin>>m>>n;
	    int t = m+n;
	    int arr[t];
	    
	   // for(int i=0; i<m; i++){
	   //     cin>>arr[i];
	   // }
	    
	    for(int i=0; i<t; i++){
	        cin>>arr[i];
	    }
	    
	    sort(arr,arr+t);
	    
	    int ans = 0;
	    for(int i=0; i<t-1; i++){
	        if(arr[i]!=arr[i+1]){
	            ans++;
	        }
	    }
	    
	    cout<<ans+1<<endl;
	}
	return 0;
}