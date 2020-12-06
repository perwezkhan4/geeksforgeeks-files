#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int arr[n];

  for(int i=0; i<n; i++){
	  cin>>arr[i];
  }

  int j=0;
  for(int i=0; i<n; i++){
	  if(arr[i]<0){
		  if(i!=j){
			  swap(arr[i], arr[j]);
		  }
		  j++;
	  }
  }

//   int s =0;
//   int e = n-1;

//   while(s<e){
// 	  if(arr[s]<0){
// 		  s++;
// 	  }
// 	  else if(arr[e]>0){
// 		  e--;
// 	  }
// 	  else if(arr[s]>0 && arr[e]<0){
// 		  swap(arr[s], arr[e]);
// 	  }
// 	  else{
// 		  if(arr[s]>0){
// 			  e--;
// 		  }
// 		  s++;
// 	  }
//   }

  for(int i=0; i<n; i++){
	  cout<<arr[i]<<" ";
  }
}